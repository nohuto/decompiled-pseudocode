/*
 * XREFs of PspRemoveCpuRateControl @ 0x140678AEC
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x1402075A4 (KeRemoveSchedulingGroup.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PspFreeRateControl @ 0x140678B4C (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1200) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1512), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1200) + 128LL));
  result = PspFreeRateControl(*(PVOID *)(a1 + 1200));
  *(_QWORD *)(a1 + 1200) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1272);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1304);
      if ( v3 )
      {
        result = ObfDereferenceObjectWithTag(v3, 0x624A7350u);
        *(_QWORD *)(a1 + 1304) = 0LL;
      }
    }
  }
  return result;
}
