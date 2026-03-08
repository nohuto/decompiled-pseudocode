/*
 * XREFs of PushFrame @ 0x1C0053C34
 * Callers:
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     LoadDDB @ 0x1C004FA40 (LoadDDB.c)
 *     SleepQueueRequest @ 0x1C00514EC (SleepQueueRequest.c)
 *     AccessBaseField @ 0x1C00517B0 (AccessBaseField.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 *     PushPreserveWriteObj @ 0x1C00526F4 (PushPreserveWriteObj.c)
 *     WriteField @ 0x1C0053090 (WriteField.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     PushCall @ 0x1C0053AF8 (PushCall.c)
 *     PushPost @ 0x1C0053CE0 (PushPost.c)
 *     PushScope @ 0x1C0053D40 (PushScope.c)
 *     PushTerm @ 0x1C0053E18 (PushTerm.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     Release @ 0x1C0055850 (Release.c)
 *     Acquire @ 0x1C0055C90 (Acquire.c)
 *     Package @ 0x1C0057FF0 (Package.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 480, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    PrintDebugMessage(153, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
