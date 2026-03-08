/*
 * XREFs of NVMeCleanUpSqCqMapping @ 0x1C000C4EC
 * Callers:
 *     IoSqToIoCqMapping @ 0x1C000B78C (IoSqToIoCqMapping.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     GetMaxDedicatedSqPerCqCount @ 0x1C0009CF4 (GetMaxDedicatedSqPerCqCount.c)
 *     NVMeCompletionQueuesDedicatedSubmissionQueuesInit @ 0x1C000C96C (NVMeCompletionQueuesDedicatedSubmissionQueuesInit.c)
 *     NVMeCompletionQueuesSubmissionQueuesInit @ 0x1C000CA00 (NVMeCompletionQueuesSubmissionQueuesInit.c)
 */

__int64 __fastcall NVMeCleanUpSqCqMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // si
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  char v9; // si
  unsigned int v10; // edi
  __int64 v11; // rdx
  char v12; // r9
  unsigned __int16 MaxDedicatedSqPerCqCount; // ax
  int v14; // r10d
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = 0;
  v6 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    do
    {
      result = v6;
      v7 = *(_QWORD *)(a1 + 880) + 392LL * v6;
      *(_DWORD *)(v7 + 244) &= 0xFFFFFFF0;
      if ( *(_DWORD *)(v7 + 180) )
      {
        NVMeCompletionQueuesSubmissionQueuesInit(a1, v7, a3, 0LL);
        result = v5;
        if ( !v5 )
          result = 1LL;
        v5 = result;
      }
      a3 = *(unsigned __int16 *)(a1 + 338);
      ++v6;
    }
    while ( v6 < (unsigned int)a3 );
    if ( v5 )
    {
      v8 = *(unsigned __int16 *)(a1 + 336);
      if ( (unsigned __int16)v8 >= *(_WORD *)(a1 + 242) )
        v8 = *(unsigned __int16 *)(a1 + 242);
      result = (__int64)NVMeZeroMemory(
                          *(void **)(*(_QWORD *)(a1 + 880) + 192LL),
                          8 * (unsigned int)a3 * (unsigned __int16)((v8 - 1) / (int)a3 + 1));
    }
  }
  v9 = 0;
  v10 = 0;
  if ( *(_WORD *)(a1 + 338) )
  {
    do
    {
      result = v10;
      v11 = *(_QWORD *)(a1 + 880) + 392LL * v10;
      if ( *(_DWORD *)(v11 + 212) )
      {
        result = NVMeCompletionQueuesDedicatedSubmissionQueuesInit(a1, v11, a3, 0LL);
        v12 = v9;
        if ( !v9 )
          v12 = 1;
        v9 = v12;
      }
      ++v10;
    }
    while ( v10 < *(unsigned __int16 *)(a1 + 338) );
    if ( v9 )
    {
      MaxDedicatedSqPerCqCount = GetMaxDedicatedSqPerCqCount((unsigned __int16 *)a1);
      return (__int64)NVMeZeroMemory(
                        *(void **)(*(_QWORD *)(a1 + 880) + 224LL),
                        8 * v14 * (unsigned int)MaxDedicatedSqPerCqCount);
    }
  }
  return result;
}
