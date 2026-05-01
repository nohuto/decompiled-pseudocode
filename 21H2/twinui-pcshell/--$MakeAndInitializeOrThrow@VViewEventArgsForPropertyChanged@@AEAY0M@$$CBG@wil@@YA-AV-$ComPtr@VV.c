/*
 * XREFs of ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0M@$$CBG@Z @ 0x18031F5F8
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18003B650 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1800817D8 (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0M@$$CBG@Z @ 0x18031F104 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0M@$$CBG@Details@WRL@Microsoft@@YA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(
        __int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[12]>(
         (ViewEventArgsForPropertyChanged **)a1,
         L"BackVisible");
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
