/*
 * XREFs of ACPIIsPowerNodeInTransition @ 0x1C0022070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqss @ 0x1C000A12C (WPP_RECORDER_SF_qqqss.c)
 */

__int64 __fastcall ACPIIsPowerNodeInTransition(__int64 a1, int a2, __int64 a3)
{
  char v3; // r10
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  const char *v7; // r11
  __int64 v8; // rcx

  v3 = a1;
  if ( (*(_DWORD *)(a3 + 104) == a2 || *(_DWORD *)(*(_QWORD *)(a3 + 40) + 384LL) == a2)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) == 4 )
  {
    *(_DWORD *)(a3 + 56) |= 0x8000000u;
    v4 = (const char *)&unk_1C00622D0;
    v5 = *(_QWORD *)(a3 + 40);
    LOBYTE(v6) = 0;
    v7 = (const char *)&unk_1C00622D0;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a3 + 40);
      v8 = *(_QWORD *)(v5 + 8);
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v4 = *(const char **)(v6 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(v6 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x32u,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
        a3,
        v3,
        v6,
        v4,
        v7);
  }
  return 0LL;
}
