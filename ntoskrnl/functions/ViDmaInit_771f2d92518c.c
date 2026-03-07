__int64 *ViDmaInit()
{
  __int64 *result; // rax

  if ( !ViAdapterListInitialized )
  {
    result = (__int64 *)&ViAdapterList;
    qword_140C36590 = 0LL;
    ViAdapterList.Blink = &ViAdapterList;
    ViAdapterList.Flink = &ViAdapterList;
    ViAdapterListInitialized = 1;
  }
  if ( !ViDomainCommonBufferListInitialized )
  {
    result = &ViDomainCommonBufferList;
    qword_140C365D0 = 0LL;
    qword_140C365C8 = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
    ViDomainCommonBufferListInitialized = 1;
  }
  if ( !ViHalWaitBlockLookasideInitialized )
  {
    result = (__int64 *)ExInitializeNPagedLookasideListInternal(
                          (__int64)&ViHalWaitBlockLookaside,
                          0LL,
                          (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
                          512,
                          152,
                          1449943368,
                          16,
                          VfInitializedWithoutReboot);
    ViHalWaitBlockLookasideInitialized = 1;
  }
  ViVerifyDma = 1;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3A )
  {
    VfRealHalAllocateMapRegisters = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))off_140C01A00[0];
    result = (__int64 *)VfHalAllocateMapRegisters;
    off_140C01A00[0] = (__int64 (__fastcall *)())VfHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 1;
  return result;
}
