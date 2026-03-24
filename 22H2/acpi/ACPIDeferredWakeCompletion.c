/*
 * XREFs of ACPIDeferredWakeCompletion @ 0x1C0052CC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E778 (ACPIInternalDecrementIrpReferenceCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDqss @ 0x1C00530A0 (WPP_RECORDER_SF_qqDqss.c)
 */

LONG __fastcall ACPIDeferredWakeCompletion(__int64 a1, __int64 a2, int a3)
{
  void *v5; // r9
  __int64 v6; // rdx
  void (__fastcall *v7)(_QWORD, __int64); // rax

  if ( a3 < 0 )
  {
    v5 = &unk_1C00BABB3;
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( (v6 & 0x200000000000LL) != 0 && (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        a3,
        (_DWORD)v5);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 960), 0xFFFFFFFFFFFFCFFFuLL);
  }
  v7 = *(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v7(*(_QWORD *)(a1 + 728), a2);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
