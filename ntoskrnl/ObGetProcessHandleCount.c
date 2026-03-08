/*
 * XREFs of ObGetProcessHandleCount @ 0x14071172C
 * Callers:
 *     ExpCopyProcessInfo @ 0x140711514 (ExpCopyProcessInfo.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x1407E8520 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407E8D90 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408A3722 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x1407117F0 (ExHandleTableQuery.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  v5 = ObReferenceProcessHandleTable(a1);
  if ( v5 )
  {
    ExHandleTableQuery(v5, &v7, a2);
    ExReleaseRundownProtection_0(a1 + 139);
    return v7;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v2;
}
