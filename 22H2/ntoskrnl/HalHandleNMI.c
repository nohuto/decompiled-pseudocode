/*
 * XREFs of HalHandleNMI @ 0x1404BD690
 * Callers:
 *     KiProcessNMI @ 0x1405129B0 (KiProcessNMI.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     HalpCheckAndReportGhes @ 0x1404CF888 (HalpCheckAndReportGhes.c)
 *     WheaReportHwError @ 0x1405BB070 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1405BBA0C (WheapGetErrorSource.c)
 */

unsigned __int8 HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  unsigned __int8 result; // al
  char v3; // bl
  __int64 ErrorSource; // rax

  dword_140C50958 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v0 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v1 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes(v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &HalpGenericNmiErrorSourceListHead );
  if ( v1 != 1 )
  {
LABEL_7:
    result = __inbyte(0x61u);
    v3 = result;
    if ( dword_140C50954 == 1 )
    {
      memset(&dword_140C50960, 0, 0x5CuLL);
      dword_140C50964 = 3;
      dword_140C50970 = 3;
      dword_140C5097C = 3;
      dword_140C50960 = 1095059543;
      dword_140C509B8 = ((unsigned int)dword_140C5096C >> 2) & 1;
      dword_140C50968 = 92;
      dword_140C50974 = 1;
      dword_140C50978 = HalpNmiInfo;
      xmmword_140C50980 = (__int128)NMI_NOTIFY_TYPE_GUID;
      dword_140C50998 = 4;
      dword_140C509A0 = 80;
      dword_140C509A4 = 12;
      byte_140C509B0 = v3;
      ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
      PshedRetrieveErrorInfo(
        &dword_140C50960,
        (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
      result = WheaReportHwError(&dword_140C50960);
    }
  }
  HalpProcessorInNmiHandler = 1280;
  return result;
}
