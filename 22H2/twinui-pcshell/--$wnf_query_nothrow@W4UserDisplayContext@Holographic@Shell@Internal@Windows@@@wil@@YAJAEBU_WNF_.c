/*
 * XREFs of ??$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1802BB0C8
 * Callers:
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x1802C37B8 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BE670 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAXPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@KK@Z @ 0x1800C81F4 (--$ZeroStateDataIfSizeInconsistent@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@det.c)
 */

__int64 __fastcall wil::wnf_query_nothrow<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        __int64 a4)
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
  v7 = NtQueryWnfStateData(&WNF_HOLO_USER_DISPLAY_CONTEXT, 0LL, 0LL, &v10, a3, &v11) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    wil::details::ZeroStateDataIfSizeInconsistent<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
      a3,
      v11,
      v10);
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
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v7);
    return v7;
  }
}
