/*
 * XREFs of GetBootSystemTime @ 0x140A7182C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024E708 (RtlULongLongMult.c)
 *     HalQueryRealTimeClock @ 0x14030CCC0 (HalQueryRealTimeClock.c)
 *     RtlpTimeFieldsToTime @ 0x14030D0D4 (RtlpTimeFieldsToTime.c)
 *     RtlpTimeToTimeFields @ 0x14030D368 (RtlpTimeToTimeFields.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HalSetRealTimeClock @ 0x1404B6A90 (HalSetRealTimeClock.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, ULONGLONG *a2)
{
  bool v3; // zf
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  ULONGLONG CurrentServerSiloGlobals; // rax
  ULONGLONG v11; // rdx
  ULONGLONG v12; // r9
  unsigned __int64 v13; // r10
  ULONGLONG v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  ULONGLONG pullResult; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp+28h] BYREF

  v20 = 0LL;
  pullResult = 0LL;
  v3 = (*(_BYTE *)(a1 + 2624) & 1) == 0;
  v5 = *(_QWORD *)(a1 + 2600);
  v18 = 0LL;
  if ( v3 && !ExpRealTimeIsUniversal )
    v5 += *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(a1, (__int64)a2) + 133) + 440LL);
  v6 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v20);
  v7 = (unsigned int)RtlULongLongMult(v6 - *(_QWORD *)(a1 + 2608), 0x989680uLL, &pullResult);
  CurrentServerSiloGlobals = pullResult / v20;
  v11 = pullResult % v20;
  v12 = pullResult / v20;
  if ( (int)v7 < 0 )
  {
    v8 = v9 / v20;
    v7 = v20 * (v9 / v20);
    v13 = v9 % v20;
    v11 = 10000000 * v13 % v20;
    LOBYTE(CurrentServerSiloGlobals) = (_BYTE)v8 << 7;
    v12 = 10000000 * v8 + 10000000 * v13 / v20;
  }
  v14 = v12 + v5;
  v3 = (*(_BYTE *)(a1 + 2624) & 2) == 0;
  pullResult = v14;
  if ( v3 )
  {
    if ( !ExpRealTimeIsUniversal )
      pullResult = v14 - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v7, v11) + 133) + 440LL);
    RtlpTimeToTimeFields((__int64 *)&pullResult, &v18, v8);
    LOBYTE(CurrentServerSiloGlobals) = HalSetRealTimeClock((__int16 *)&v18);
  }
  else if ( (qword_140C197B8 & 4) == 0 )
  {
    LOBYTE(CurrentServerSiloGlobals) = HalQueryRealTimeClock((__int64)&v18);
    if ( (_BYTE)CurrentServerSiloGlobals )
    {
      LOBYTE(CurrentServerSiloGlobals) = RtlpTimeFieldsToTime((__int64)&v18, (__int64 *)&pullResult);
      if ( !(_BYTE)CurrentServerSiloGlobals || ExpRealTimeIsUniversal )
      {
        v14 = pullResult;
      }
      else
      {
        CurrentServerSiloGlobals = (ULONGLONG)PsGetCurrentServerSiloGlobals(v16, v15);
        v14 = *(_QWORD *)(*(_QWORD *)(CurrentServerSiloGlobals + 1064) + 440LL) + pullResult;
      }
    }
  }
  *a2 = v14;
  return CurrentServerSiloGlobals;
}
