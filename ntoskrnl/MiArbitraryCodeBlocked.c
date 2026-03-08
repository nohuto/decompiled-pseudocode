/*
 * XREFs of MiArbitraryCodeBlocked @ 0x1407F1204
 * Callers:
 *     MiAllowProtectionChange @ 0x140367C88 (MiAllowProtectionChange.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 * Callees:
 *     EtwTraceMemoryAcg @ 0x140367DD8 (EtwTraceMemoryAcg.c)
 *     EtwTimLogProhibitDynamicCode @ 0x1409E7154 (EtwTimLogProhibitDynamicCode.c)
 */

__int64 __fastcall MiArbitraryCodeBlocked(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 2512);
  if ( (v3 & 0x100) == 0 || _bittest((const signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x12u) )
  {
    if ( (v3 & 0x800) != 0 && !_bittest((const signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x12u) )
      EtwTimLogProhibitDynamicCode(1LL, a1);
    EtwTraceMemoryAcg(0);
    return 0LL;
  }
  else
  {
    EtwTraceMemoryAcg(0x80000000);
    EtwTimLogProhibitDynamicCode(2LL, a1);
    return 3221227012LL;
  }
}
