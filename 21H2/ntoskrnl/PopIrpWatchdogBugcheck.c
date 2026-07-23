/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x1405653D8
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PopIrpWatchdog @ 0x1405653A0 (PopIrpWatchdog.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PopIrpWatchdogBugcheck(__int64 MaxDataSize)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR BugCheckParameter3[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = MaxDataSize;
  if ( !*(_DWORD *)(MaxDataSize + 188) )
  {
    v2 = *(_QWORD *)(MaxDataSize + 24);
    if ( v2 )
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    else
      v3 = 0LL;
    v4 = *(_QWORD *)(v3 + 264);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 72LL * *(char *)(v4 + 66) + 200);
      if ( *(_BYTE *)(v5 + 184) == *(_BYTE *)(MaxDataSize + 184) )
        v1 = v5;
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v1 + 16);
  PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(v1 + 24));
  IoAddTriageDumpDataBlock(BugCheckParameter4, (PVOID)*(unsigned __int16 *)(BugCheckParameter4 + 2));
  IoAddTriageDumpDataBlock(v1, (PVOID)0x100);
  BugCheckParameter3[1] = (ULONG_PTR)&PopIrpList;
  BugCheckParameter3[0] = 163840LL;
  BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
  BugCheckParameter3[3] = ExWorkerQueue;
  BugCheckParameter3[4] = IoWorkerQueue;
  KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(v1 + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
}
