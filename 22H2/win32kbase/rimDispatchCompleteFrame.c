/*
 * XREFs of rimDispatchCompleteFrame @ 0x1C0174394
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174C5C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessCompleteFrame @ 0x1C0174F58 (rimProcessCompleteFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0031780 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7F70 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C0171818 (RIMFixUpAutoRepeatCompleteFrameUpDowns.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01760E4 (rimStackAttachAndProcessInput.c)
 */

void __fastcall rimDispatchCompleteFrame(struct RawInputManagerObject *a1, struct RIMDEV *a2, LARGE_INTEGER *a3)
{
  __int64 LowPart; // rax
  bool v4; // zf
  int v8; // edx
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int64 *v11[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v12[2]; // [rsp+50h] [rbp-10h] BYREF

  LowPart = a3->LowPart;
  v4 = (*((_DWORD *)a2 + 46) & 0x2000) == 0;
  v9 = 0LL;
  v10 = LowPart;
  if ( !v4 )
  {
    if ( a3[4].QuadPart != *((_QWORD *)a2 + 3) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 543);
    if ( !a3[10].LowPart )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 544);
  }
  a3[11].HighPart = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  a3[12] = KeQueryPerformanceCounter(0LL);
  rimStackAttachAndProcessInput((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (unsigned int)&v9, 1);
  if ( !*((_QWORD *)a1 + 80) && !*((_BYTE *)a1 + 584) && *((_QWORD *)a2 + 3) )
  {
    v11[1] = (__int64 *)a2;
    v11[0] = (__int64 *)((char *)a1 + 48);
    HMAssignmentLock(v11);
    v12[0] = (__int64 *)((char *)a1 + 56);
    v12[1] = *((__int64 **)a2 + 60);
    HMAssignmentLock(v12);
  }
  rimSignalReadComplete(a1, a2);
  if ( *((_QWORD *)a1 + 43) == -1LL || (*((_DWORD *)a2 + 46) & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 51) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 623);
    Win32FreePool((__int64)a3);
  }
  else
  {
    rimFreeAutoRepeatCompleteFrame((__int64)a2);
    RIMFixUpAutoRepeatCompleteFrameUpDowns((__int64)a1, (__int64)a2, (__int64)a3);
    if ( a3[3].LowPart )
    {
      a3[11].LowPart = 1;
      *((_DWORD *)a2 + 47) |= 1u;
      *((_QWORD *)a2 + 51) = a3;
    }
    else
    {
      if ( *((_QWORD *)a2 + 51) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 615);
      Win32FreePool((__int64)a3);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v8,
        1,
        19,
        (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
        a2,
        v9,
        v10);
    }
  }
}
