/*
 * XREFs of TpCallbackMayRunLong @ 0x180070F70
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpTpWorkCallback @ 0x180070B60 (RtlpTpWorkCallback.c)
 * Callees:
 *     TppCallbackMayRunLongProlog @ 0x180070FD8 (TppCallbackMayRunLongProlog.c)
 *     NtSetInformationWorkerFactory @ 0x1800A08F0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpCallbackMayRunLong(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  result = TppCallbackMayRunLongProlog(a1, 1, (unsigned int)&v2, (unsigned int)&v3, (__int64)&v5);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741637 )
      return 0LL;
  }
  else if ( !v3 )
  {
    v4 = 1;
    return NtSetInformationWorkerFactory(*(_QWORD *)(v2 + 56), 9LL, &v4);
  }
  return result;
}
