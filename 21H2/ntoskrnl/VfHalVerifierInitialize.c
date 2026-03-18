/*
 * XREFs of VfHalVerifierInitialize @ 0x140A863B8
 * Callers:
 *     VfInitVerifierComponents @ 0x140A82480 (VfInitVerifierComponents.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     ViHalApplySettings @ 0x140A887D4 (ViHalApplySettings.c)
 */

__int64 VfHalVerifierInitialize()
{
  qword_140D575A0 = 0LL;
  qword_140D577C0 = 0LL;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_140D577B8 = (__int64)&ViDomainCommonBufferList;
  ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
  ExInitializeNPagedLookasideListInternal(
    (__int64)&ViHalWaitBlockLookaside,
    0LL,
    (void (__stdcall *)(PVOID, ULONG))VfUtilFreePoolCheckIRQL,
    512,
    152,
    1449943368,
    16,
    VfInitializedWithoutReboot);
  return ViHalApplySettings();
}
