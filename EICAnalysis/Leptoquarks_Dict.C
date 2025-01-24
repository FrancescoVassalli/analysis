//
// File generated by rootcint at Wed Jul 24 11:48:08 2019

// Do NOT change. Changes will be lost next time file is generated
//

#define R__DICTIONARY_FILENAME Leptoquarks_Dict
#include "RConfig.h" //rootcint 4834
#if !defined(R__ACCESS_IN_SYMBOL)
//Break the privacy of classes -- Disabled for the moment
#define private public
#define protected public
#endif

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;
#include "Leptoquarks_Dict.h"

#include "TClass.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"

// Direct notice to TROOT of the dictionary's loading.
namespace {
   static struct DictInit {
      DictInit() {
         ROOT::RegisterModule();
      }
   } __TheDictionaryInitializer;
}

// START OF SHADOWS

namespace ROOTShadow {
   namespace Shadow {
   } // of namespace Shadow
} // of namespace ROOTShadow
// END OF SHADOWS

namespace ROOTDict {
   void Leptoquarks_ShowMembers(void *obj, TMemberInspector &R__insp);
   static void Leptoquarks_Dictionary();
   static void delete_Leptoquarks(void *p);
   static void deleteArray_Leptoquarks(void *p);
   static void destruct_Leptoquarks(void *p);

   // Function generating the singleton type initializer
   static ROOT::TGenericClassInfo *GenerateInitInstanceLocal(const ::Leptoquarks*)
   {
      ::Leptoquarks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Leptoquarks),0);
      static ::ROOT::TGenericClassInfo 
         instance("Leptoquarks", "./Leptoquarks.h", 19,
                  typeid(::Leptoquarks), ::ROOT::DefineBehavior(ptr, ptr),
                  0, &Leptoquarks_Dictionary, isa_proxy, 1,
                  sizeof(::Leptoquarks) );
      instance.SetDelete(&delete_Leptoquarks);
      instance.SetDeleteArray(&deleteArray_Leptoquarks);
      instance.SetDestructor(&destruct_Leptoquarks);
      return &instance;
   }
   ROOT::TGenericClassInfo *GenerateInitInstance(const ::Leptoquarks*)
   {
      return GenerateInitInstanceLocal((::Leptoquarks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Leptoquarks*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static void Leptoquarks_Dictionary() {
      ::ROOTDict::GenerateInitInstanceLocal((const ::Leptoquarks*)0x0)->GetClass();
   }

} // end of namespace ROOTDict

namespace ROOTDict {
   // Wrapper around operator delete
   static void delete_Leptoquarks(void *p) {
      delete ((::Leptoquarks*)p);
   }
   static void deleteArray_Leptoquarks(void *p) {
      delete [] ((::Leptoquarks*)p);
   }
   static void destruct_Leptoquarks(void *p) {
      typedef ::Leptoquarks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOTDict for class ::Leptoquarks

/********************************************************
* Leptoquarks_Dict.C
* CAUTION: DON'T CHANGE THIS FILE. THIS FILE IS AUTOMATICALLY GENERATED
*          FROM HEADER FILES LISTED IN G__setup_cpp_environmentXXX().
*          CHANGE THOSE HEADER FILES AND REGENERATE THIS FILE.
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#undef free
#endif

#if defined(__GNUC__) && __GNUC__ >= 4 && ((__GNUC_MINOR__ == 2 && __GNUC_PATCHLEVEL__ >= 1) || (__GNUC_MINOR__ >= 3))
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

extern "C" void G__cpp_reset_tagtableLeptoquarks_Dict();

extern "C" void G__set_cpp_environmentLeptoquarks_Dict() {
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("Leptoquarks.h");
  G__cpp_reset_tagtableLeptoquarks_Dict();
}
#include <new>
extern "C" int G__cpp_dllrevLeptoquarks_Dict() { return(30051515); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* Leptoquarks */
static int G__Leptoquarks_Dict_193_0_1(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   Leptoquarks* p = NULL;
   char* gvp = (char*) G__getgvp();
   //m: 1
   if ((gvp == (char*)G__PVOID) || (gvp == 0)) {
     p = new Leptoquarks(*((string*) G__int(libp->para[0])));
   } else {
     p = new((void*) gvp) Leptoquarks(*((string*) G__int(libp->para[0])));
   }
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Leptoquarks_Dict_193_0_5(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((Leptoquarks*) G__getstructoffset())->set_beam_energies((float) G__double(libp->para[0]), (float) G__double(libp->para[1]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Leptoquarks_Dict_193_0_6(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      G__letint(result7, 105, (long) ((const Leptoquarks*) G__getstructoffset())->get_embedding_id());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__Leptoquarks_Dict_193_0_7(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
      ((Leptoquarks*) G__getstructoffset())->set_embedding_id((int) G__int(libp->para[0]));
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__Leptoquarks_Dict_193_0_9(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)

{
   Leptoquarks* p;
   void* tmp = (void*) G__int(libp->para[0]);
   p = new Leptoquarks(*(Leptoquarks*) tmp);
   result7->obj.i = (long) p;
   result7->ref = (long) p;
   G__set_tagnum(result7,G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks));
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
typedef Leptoquarks G__TLeptoquarks;
static int G__Leptoquarks_Dict_193_0_10(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   char* gvp = (char*) G__getgvp();
   long soff = G__getstructoffset();
   int n = G__getaryconstruct();
   //
   //has_a_delete: 0
   //has_own_delete1arg: 0
   //has_own_delete2arg: 0
   //
   if (!soff) {
     return(1);
   }
   if (n) {
     if (gvp == (char*)G__PVOID) {
       delete[] (Leptoquarks*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       for (int i = n - 1; i >= 0; --i) {
         ((Leptoquarks*) (soff+(sizeof(Leptoquarks)*i)))->~G__TLeptoquarks();
       }
       G__setgvp((long)gvp);
     }
   } else {
     if (gvp == (char*)G__PVOID) {
       delete (Leptoquarks*) soff;
     } else {
       G__setgvp((long) G__PVOID);
       ((Leptoquarks*) (soff))->~G__TLeptoquarks();
       G__setgvp((long)gvp);
     }
   }
   G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic assignment operator
static int G__Leptoquarks_Dict_193_0_11(G__value* result7, G__CONST char* funcname, struct G__param* libp, int hash)
{
   Leptoquarks* dest = (Leptoquarks*) G__getstructoffset();
   *dest = *(Leptoquarks*) libp->para[0].ref;
   const Leptoquarks& obj = *dest;
   result7->ref = (long) (&obj);
   result7->obj.i = (long) (&obj);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */

/*********************************************************
* Member function Stub
*********************************************************/

/* Leptoquarks */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncLeptoquarks_Dict {
 public:
  G__Sizep2memfuncLeptoquarks_Dict(): p(&G__Sizep2memfuncLeptoquarks_Dict::sizep2memfunc) {}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncLeptoquarks_Dict::*p)();
};

size_t G__get_sizep2memfuncLeptoquarks_Dict()
{
  G__Sizep2memfuncLeptoquarks_Dict a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceLeptoquarks_Dict() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks))) {
     Leptoquarks *G__Lderived;
     G__Lderived=(Leptoquarks*)0x1000;
     {
       SubsysReco *G__Lpbase=(SubsysReco*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks),G__get_linked_tagnum(&G__Leptoquarks_DictLN_SubsysReco),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       Fun4AllBase *G__Lpbase=(Fun4AllBase*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks),G__get_linked_tagnum(&G__Leptoquarks_DictLN_Fun4AllBase),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableLeptoquarks_Dict() {

   /* Setting up typedef entry */
   G__search_typename2("vector<ROOT::TSchemaHelper>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("vector<TVirtualArray*>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR),0,-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<const_iterator>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
   G__search_typename2("reverse_iterator<iterator>",117,G__get_linked_tagnum(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR),0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR));
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* Leptoquarks */
static void G__setup_memvarLeptoquarks(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks));
   { Leptoquarks *p; p=(Leptoquarks*)0x1000; if (p) { }
   G__memvar_setup((void*)0,103,0,0,-1,-1,-1,4,"_verbose=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"_ievent=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"_total_pass=",0,(char*)NULL);
   G__memvar_setup((void*)0,117,0,0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_string),-1,-1,4,"_foutname=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_TFile),-1,-1,4,"_fout_root=",0,(char*)NULL);
   G__memvar_setup((void*)0,85,0,0,G__get_linked_tagnum(&G__Leptoquarks_DictLN_TNtuple),-1,-1,4,"_tree_event=",0,(char*)NULL);
   G__memvar_setup((void*)0,102,0,0,-1,-1,-1,4,"_ebeam_E=",0,(char*)NULL);
   G__memvar_setup((void*)0,102,0,0,-1,-1,-1,4,"_pbeam_E=",0,(char*)NULL);
   G__memvar_setup((void*)0,105,0,0,-1,-1,-1,4,"_embedding_id=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarLeptoquarks_Dict() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncLeptoquarks(void) {
   /* Leptoquarks */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks));
   G__memfunc_setup("Leptoquarks",1179,G__Leptoquarks_Dict_193_0_1, 105, G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks), -1, 0, 1, 1, 1, 0, "u 'string' - 0 - filename", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("Init",404,(G__InterfaceMethod) NULL,105, -1, -1, 0, 1, 1, 1, 0, "U 'PHCompositeNode' - 0 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("process_event",1408,(G__InterfaceMethod) NULL,105, -1, -1, 0, 1, 1, 1, 0, "U 'PHCompositeNode' - 0 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("End",279,(G__InterfaceMethod) NULL,105, -1, -1, 0, 1, 1, 1, 0, "U 'PHCompositeNode' - 0 - -", (char*)NULL, (void*) NULL, 1);
   G__memfunc_setup("set_beam_energies",1777,G__Leptoquarks_Dict_193_0_5, 121, -1, -1, 0, 2, 1, 1, 0, 
"f - - 0 - beam_electron f - - 0 - beam_proton", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("get_embedding_id",1642,G__Leptoquarks_Dict_193_0_6, 105, -1, -1, 0, 0, 1, 1, 8, "", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("set_embedding_id",1654,G__Leptoquarks_Dict_193_0_7, 121, -1, -1, 0, 1, 1, 1, 0, "i - - 0 - id", (char*)NULL, (void*) NULL, 0);
   G__memfunc_setup("UpdateFinalStateParticle",2434,(G__InterfaceMethod) NULL, 121, -1, -1, 0, 1, 1, 4, 0, "U 'HepMC::GenParticle' - 1 - -", (char*)NULL, (void*) NULL, 0);
   // automatic copy constructor
   G__memfunc_setup("Leptoquarks", 1179, G__Leptoquarks_Dict_193_0_9, (int) ('i'), G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks), -1, 0, 1, 1, 1, 0, "u 'Leptoquarks' - 11 - -", (char*) NULL, (void*) NULL, 0);
   // automatic destructor
   G__memfunc_setup("~Leptoquarks", 1305, G__Leptoquarks_Dict_193_0_10, (int) ('y'), -1, -1, 0, 0, 1, 1, 0, "", (char*) NULL, (void*) NULL, 0);
   // automatic assignment operator
   G__memfunc_setup("operator=", 937, G__Leptoquarks_Dict_193_0_11, (int) ('u'), G__get_linked_tagnum(&G__Leptoquarks_DictLN_Leptoquarks), -1, 1, 1, 1, 1, 0, "u 'Leptoquarks' - 11 - -", (char*) NULL, (void*) NULL, 0);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncLeptoquarks_Dict() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
static void G__cpp_setup_global0() {

   /* Setting up global variables */
   G__resetplocal();

}

static void G__cpp_setup_global1() {

   G__resetglobalenv();
}
extern "C" void G__cpp_setup_globalLeptoquarks_Dict() {
  G__cpp_setup_global0();
  G__cpp_setup_global1();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
static void G__cpp_setup_func0() {
   G__lastifuncposition();

}

static void G__cpp_setup_func1() {
}

static void G__cpp_setup_func2() {
}

static void G__cpp_setup_func3() {
}

static void G__cpp_setup_func4() {
}

static void G__cpp_setup_func5() {
}

static void G__cpp_setup_func6() {
}

static void G__cpp_setup_func7() {
}

static void G__cpp_setup_func8() {
}

static void G__cpp_setup_func9() {
}

static void G__cpp_setup_func10() {
}

static void G__cpp_setup_func11() {
}

static void G__cpp_setup_func12() {
}

static void G__cpp_setup_func13() {
}

static void G__cpp_setup_func14() {
}

static void G__cpp_setup_func15() {
}

static void G__cpp_setup_func16() {
}

static void G__cpp_setup_func17() {
}

static void G__cpp_setup_func18() {
}

static void G__cpp_setup_func19() {
}

static void G__cpp_setup_func20() {
}

static void G__cpp_setup_func21() {

   G__resetifuncposition();
}

extern "C" void G__cpp_setup_funcLeptoquarks_Dict() {
  G__cpp_setup_func0();
  G__cpp_setup_func1();
  G__cpp_setup_func2();
  G__cpp_setup_func3();
  G__cpp_setup_func4();
  G__cpp_setup_func5();
  G__cpp_setup_func6();
  G__cpp_setup_func7();
  G__cpp_setup_func8();
  G__cpp_setup_func9();
  G__cpp_setup_func10();
  G__cpp_setup_func11();
  G__cpp_setup_func12();
  G__cpp_setup_func13();
  G__cpp_setup_func14();
  G__cpp_setup_func15();
  G__cpp_setup_func16();
  G__cpp_setup_func17();
  G__cpp_setup_func18();
  G__cpp_setup_func19();
  G__cpp_setup_func20();
  G__cpp_setup_func21();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__Leptoquarks_DictLN_string = { "string" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR = { "vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR = { "reverse_iterator<vector<ROOT::TSchemaHelper,allocator<ROOT::TSchemaHelper> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR = { "vector<TVirtualArray*,allocator<TVirtualArray*> >" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR = { "reverse_iterator<vector<TVirtualArray*,allocator<TVirtualArray*> >::iterator>" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_Fun4AllBase = { "Fun4AllBase" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_PHCompositeNode = { "PHCompositeNode" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_SubsysReco = { "SubsysReco" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_TNtuple = { "TNtuple" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_HepMC = { "HepMC" , 110 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_HepMCcLcLGenParticle = { "HepMC::GenParticle" , 99 , -1 };
G__linked_taginfo G__Leptoquarks_DictLN_Leptoquarks = { "Leptoquarks" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableLeptoquarks_Dict() {
  G__Leptoquarks_DictLN_string.tagnum = -1 ;
  G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR.tagnum = -1 ;
  G__Leptoquarks_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR.tagnum = -1 ;
  G__Leptoquarks_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR.tagnum = -1 ;
  G__Leptoquarks_DictLN_Fun4AllBase.tagnum = -1 ;
  G__Leptoquarks_DictLN_PHCompositeNode.tagnum = -1 ;
  G__Leptoquarks_DictLN_SubsysReco.tagnum = -1 ;
  G__Leptoquarks_DictLN_TNtuple.tagnum = -1 ;
  G__Leptoquarks_DictLN_TFile.tagnum = -1 ;
  G__Leptoquarks_DictLN_HepMC.tagnum = -1 ;
  G__Leptoquarks_DictLN_HepMCcLcLGenParticle.tagnum = -1 ;
  G__Leptoquarks_DictLN_Leptoquarks.tagnum = -1 ;
}


extern "C" void G__cpp_setup_tagtableLeptoquarks_Dict() {

   /* Setting up class,struct,union tag entry */
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_string);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_vectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgR);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlEROOTcLcLTSchemaHelpercOallocatorlEROOTcLcLTSchemaHelpergRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_vectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgR);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_reverse_iteratorlEvectorlETVirtualArraymUcOallocatorlETVirtualArraymUgRsPgRcLcLiteratorgR);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_Fun4AllBase);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_PHCompositeNode);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_SubsysReco);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_TNtuple);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_TFile);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_HepMC);
   G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_HepMCcLcLGenParticle);
   G__tagtable_setup(G__get_linked_tagnum_fwd(&G__Leptoquarks_DictLN_Leptoquarks),sizeof(Leptoquarks),-1,98304,(char*)NULL,G__setup_memvarLeptoquarks,G__setup_memfuncLeptoquarks);
}
extern "C" void G__cpp_setupLeptoquarks_Dict(void) {
  G__check_setup_version(30051515,"G__cpp_setupLeptoquarks_Dict()");
  G__set_cpp_environmentLeptoquarks_Dict();
  G__cpp_setup_tagtableLeptoquarks_Dict();

  G__cpp_setup_inheritanceLeptoquarks_Dict();

  G__cpp_setup_typetableLeptoquarks_Dict();

  G__cpp_setup_memvarLeptoquarks_Dict();

  G__cpp_setup_memfuncLeptoquarks_Dict();
  G__cpp_setup_globalLeptoquarks_Dict();
  G__cpp_setup_funcLeptoquarks_Dict();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncLeptoquarks_Dict();
  return;
}
class G__cpp_setup_initLeptoquarks_Dict {
  public:
    G__cpp_setup_initLeptoquarks_Dict() { G__add_setup_func("Leptoquarks_Dict",(G__incsetup)(&G__cpp_setupLeptoquarks_Dict)); G__call_setup_funcs(); }
   ~G__cpp_setup_initLeptoquarks_Dict() { G__remove_setup_func("Leptoquarks_Dict"); }
};
G__cpp_setup_initLeptoquarks_Dict G__cpp_setup_initializerLeptoquarks_Dict;

