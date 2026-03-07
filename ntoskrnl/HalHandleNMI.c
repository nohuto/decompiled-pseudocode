char HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  char result; // al
  unsigned __int8 v3; // al
  char v4; // bl
  __int64 ErrorSource; // rax

  _InterlockedAdd(&WheapCriticalStateRefCount, 1u);
  dword_140C6A5A8 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v0 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v1 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes((__int64)v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &HalpGenericNmiErrorSourceListHead );
  if ( v1 != 1 )
  {
LABEL_7:
    v3 = __inbyte(0x61u);
    v4 = v3;
    if ( dword_140C6A5A4 != 1 )
    {
      HalpDoingCrashDump = 1;
      HalpBugcheckInProgress = 1;
      KeBugCheckEx(0x80u, 0x4F4454uLL, v3, 0LL, 0LL);
    }
    memset(&dword_140C6A5B0, 0, 0x5CuLL);
    dword_140C6A5B4 = 3;
    dword_140C6A5C0 = 3;
    dword_140C6A5CC = 3;
    dword_140C6A5B0 = 1095059543;
    dword_140C6A608 = ((unsigned int)dword_140C6A5BC >> 2) & 1;
    dword_140C6A5B8 = 92;
    dword_140C6A5C4 = 1;
    dword_140C6A5C8 = HalpNmiInfo;
    xmmword_140C6A5D0 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140C6A5E8 = 4;
    dword_140C6A5F0 = 80;
    dword_140C6A5F4 = 12;
    byte_140C6A600 = v4;
    ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140C6A5B0,
      (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError(&dword_140C6A5B0);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
