/*
 * XREFs of ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F96B8
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C0171100 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00F2A40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F9750 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  unsigned int v8; // ebx
  unsigned __int64 ThreadPointerData; // rax

  v8 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v8) = CTouchProcessor::GetPointerRawDataWithHistory(this, ThreadPointerData, a4, a5, a6, a7, a8) != 0;
    return v8;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
