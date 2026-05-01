/*
 * XREFs of ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18041F864
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x180420F18 (-RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18049F118 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z @ 0x1800C9B30 (--$ZeroStateDataIfSizeInconsistent@H@details@wil@@YAXPEAHKK@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<enum _TABLETMODESTATE>(__int64 a1, char *a2, _DWORD *a3, __int64 a4)
{
  char v6; // di
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]

  v12 = HIDWORD(a4);
  v10 = a1;
  v11 = 4;
  v6 = 0;
  *a2 = 0;
  v7 = NtQueryWnfStateData(&WNF_TMCN_ISTABLETMODE, 0LL, 0LL, &v10, a3, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<int>(a3, v11, v10);
    if ( (_DWORD)v10 )
    {
      if ( v11 == 4 )
        v6 = 1;
    }
    *a2 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v7);
    return v7;
  }
}
