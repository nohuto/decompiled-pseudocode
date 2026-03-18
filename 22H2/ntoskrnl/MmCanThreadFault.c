/*
 * XREFs of MmCanThreadFault @ 0x14022786C
 * Callers:
 *     RtlWalkFrameChain @ 0x140227780 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpGetStackCaptureSettings @ 0x1404682A4 (EtwpGetStackCaptureSettings.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140469C68 (EtwpCovSampSafeForUserAddressCapture.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 */

bool MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  bool result; // al

  result = ObGetCurrentIrql() < 2u
        && (CurrentThread = KeGetCurrentThread(), (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0)
        && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
        && MmPhysicalMemoryBlock
        && (v1 = *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25])
                           + 16920LL)) != 0
        && CurrentThread != *(struct _KTHREAD **)(v1 + 88);
  return result;
}
