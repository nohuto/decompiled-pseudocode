/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x1403773C0
 * Callers:
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403772B8 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     RtlSetSystemGlobalData @ 0x1402EF650 (RtlSetSystemGlobalData.c)
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r11
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140C62290 )
    {
      v2 = *(_QWORD *)(a1 + 208);
      if ( qword_140C62288 )
        qword_140C62288(v2);
    }
    if ( *(_DWORD *)(a1 + 228) == 5 && *(_QWORD *)(a1 + 192) )
    {
      v3 = HalpTimerScaleCounter(abs64(*(_QWORD *)(a1 + 208)), *(_QWORD *)(a1 + 192), 10000000LL);
      if ( v4 < 0 )
        v3 = -v3;
      v6 = v3;
      RtlSetSystemGlobalData(19, &v6, 8);
    }
    v5 = *(_DWORD *)(a1 + 228);
    if ( v5 == 10 || v5 == 7 )
    {
      v6 = *(_QWORD *)(a1 + 208);
      RtlSetSystemGlobalData(19, &v6, 8);
    }
  }
}
