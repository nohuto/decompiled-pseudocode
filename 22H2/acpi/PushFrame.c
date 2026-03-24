/*
 * XREFs of PushFrame @ 0x1C0022DD8
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     ReadObject @ 0x1C000B4C0 (ReadObject.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     Acquire @ 0x1C0022CF0 (Acquire.c)
 *     Release @ 0x1C0022E60 (Release.c)
 *     LoadDDB @ 0x1C002372C (LoadDDB.c)
 *     PushPreserveWriteObj @ 0x1C0024300 (PushPreserveWriteObj.c)
 *     SleepQueueRequest @ 0x1C00675A0 (SleepQueueRequest.c)
 *     PushPost @ 0x1C0068278 (PushPost.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall PushFrame(struct _SLIST_ENTRY *a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 30, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
