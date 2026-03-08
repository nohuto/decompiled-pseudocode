/*
 * XREFs of ?UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z @ 0x1800213C8
 * Callers:
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x180021298 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x180021318 (-Initialize@CSubDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CD2DContext::UpdateContextOwner(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v2; // eax
  _QWORD *v3; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 88);
  if ( v2 && (v3 = *(_QWORD **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v2 - 1))) != 0LL )
  {
    *v3 = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
      (const char *)0x88982F04LL,
      v5);
    return 2291674884LL;
  }
}
