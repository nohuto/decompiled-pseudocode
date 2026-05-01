/*
 * XREFs of ?Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180306480
 * Callers:
 *     ?Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUIApplicationView@@W4DWMTRANSITION_TARGET@@@Z @ 0x180306534 (-Begin@ViewAnimationStoryboardHelper@@QEAAJPEAUIApplicationView@@W4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewAnimationStoryboardHelper::Begin(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v5 == -1 )
  {
    v7 = -2147024726;
    v8 = 52LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\ViewAnimationStoryboardHelper.h",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( *(_BYTE *)a1
    || ((int)DwmpBeginTransitionRequestWithGUID(v5, a1 + 8) < 0 ? (v10 = *(_BYTE *)a1) : (v10 = 1, *(_BYTE *)a1 = 1), v10) )
  {
    v7 = DwmpTransitionWindowWithRects(a2, a3, 0LL, 0LL);
    if ( v7 < 0 )
    {
      v8 = 66LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
