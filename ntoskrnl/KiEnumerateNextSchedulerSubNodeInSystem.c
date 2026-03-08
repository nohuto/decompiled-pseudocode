/*
 * XREFs of KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056E2D8
 * Callers:
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 *     KiTraceLogHeteroRundown @ 0x1403AB22C (KiTraceLogHeteroRundown.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     MmGetNextNode @ 0x1402AB0A0 (MmGetNextNode.c)
 */

__int64 __fastcall KiEnumerateNextSchedulerSubNodeInSystem(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  int NextNode; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  while ( (int)KeEnumerateNextSchedulerSubNodeInNode(a1 + 8, &v8) < 0 )
  {
    NextNode = MmGetNextNode(*(_DWORD *)a1, (int *)(a1 + 4));
    if ( NextNode == -1 )
      break;
    v6 = KeNodeBlock[NextNode];
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(v6 + 16);
  }
  if ( v8 )
    *a2 = v8;
  else
    return (unsigned int)-2147483622;
  return v2;
}
