/*
 * XREFs of HalpInitSystemHelper @ 0x140A88D44
 * Callers:
 *     HalInitializeProcessor @ 0x14037DBF0 (HalInitializeProcessor.c)
 *     HalpInitializeLateSystemActions @ 0x1403B1748 (HalpInitializeLateSystemActions.c)
 *     HalpDispatchPnp @ 0x140821D00 (HalpDispatchPnp.c)
 *     HalpInitSystemPhase1 @ 0x140A88D08 (HalpInitSystemPhase1.c)
 *     HalReportResourceUsage @ 0x140B45C40 (HalReportResourceUsage.c)
 *     HalAllProcessorsStarted @ 0x140B72860 (HalAllProcessorsStarted.c)
 *     HalpInitSystemPhase0 @ 0x140B72924 (HalpInitSystemPhase0.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInitSystemHelper(unsigned int a1, int a2, __int64 a3)
{
  unsigned int Number; // r15d
  unsigned int i; // ecx
  unsigned int v8; // edi
  __int64 (__fastcall **v9)(); // rsi
  int v10; // eax

  Number = KeGetPcr()->Prcb.Number;
  for ( i = 0; (int)a1 <= a2; ++a1 )
  {
    v8 = 0;
    v9 = &HalSubComponents;
    do
    {
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*v9)(a1, Number, a3);
      i = v10;
      if ( v10 < 0 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, v10, (int)a1, (ULONG_PTR)*(&HalSubComponents + 2 * v8 + 1));
      ++v8;
      v9 += 2;
    }
    while ( v8 < 0x15 );
  }
  return i;
}
