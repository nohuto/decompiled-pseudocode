/*
 * XREFs of ?SetCloneVisuals@AcrylicHostBackdrop@@QEAAJPEAVCVisual@@0@Z @ 0x18002B354
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A42C (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AcrylicHostBackdrop::SetCloneVisuals(
        AcrylicHostBackdrop *this,
        struct CVisual *a2,
        struct CVisual *a3)
{
  __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 24) )
  {
    v3 = *((_QWORD *)this + 2);
    *(_QWORD *)(v3 + 16) = a2;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    *(_QWORD *)(v3 + 48) = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
