/*
 * XREFs of ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C000B338
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C005B490 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0093830 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000B3CC (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005E76C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CrossChannelVisualData *a2)
{
  unsigned int v4; // ecx
  struct DirectComposition::CApplicationChannel *v5; // rbx
  struct DirectComposition::CrossChannelVisualData *v6; // rbx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF

  do
  {
    v4 = *((_DWORD *)a2 + 3);
    v7 = 0LL;
    if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(v4, &v7) >= 0 )
    {
      v5 = v7;
      DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v7, *((unsigned int *)a2 + 2));
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
    DirectComposition::CConnection::ReleaseSystemResource(a1, *((unsigned int *)a2 + 2));
    v6 = *(struct DirectComposition::CrossChannelVisualData **)a2;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a2);
    a2 = v6;
  }
  while ( v6 );
}
