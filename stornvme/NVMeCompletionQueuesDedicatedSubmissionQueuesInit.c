/*
 * XREFs of NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x1C000C96C
 * Callers:
 *     NVMeCleanUpSqCqMapping @ 0x1C000C4EC (NVMeCleanUpSqCqMapping.c)
 *     NVMeCompletionQueueInit @ 0x1C000C768 (NVMeCompletionQueueInit.c)
 * Callees:
 *     GetMaxDedicatedSqPerCqCount @ 0x1C0009CF4 (GetMaxDedicatedSqPerCqCount.c)
 */

__int64 __fastcall NVMeCompletionQueuesDedicatedSubmissionQueuesInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // r10
  __int16 MaxDedicatedSqPerCqCount; // ax
  __int64 result; // rax
  int v9; // ecx

  v4 = a1;
  v5 = (_QWORD *)(a2 + 224);
  v6 = a2;
  if ( a4 )
    *v5 = a4;
  *(_QWORD *)(a2 + 212) = 0LL;
  if ( *(_WORD *)(v4 + 338) )
  {
    *(_WORD *)(a2 + 232) = *v5 != 0LL;
    MaxDedicatedSqPerCqCount = GetMaxDedicatedSqPerCqCount((unsigned __int16 *)v4);
    *(_WORD *)(v6 + 234) = MaxDedicatedSqPerCqCount;
  }
  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(v6 + 232) )
    v9 = *(_DWORD *)(v4 + 4368);
  else
    v9 = -1;
  *(_DWORD *)(v6 + 236) = v9;
  if ( *(_WORD *)(v6 + 234) )
    result = *(unsigned int *)(v4 + 4372);
  *(_DWORD *)(v6 + 240) = result;
  return result;
}
