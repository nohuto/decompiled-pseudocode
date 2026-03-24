/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1C0018998
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00137A4 (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002BA8 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0005900 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005AAC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0005B00 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rbx
  unsigned __int16 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned __int16 *v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  v10 = 2 * a3 + 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v11 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v11;
  *(_DWORD *)(a1 + 840) = 1;
  NVMeAllocateDmaBuffer(a1, v10);
  if ( !v17 )
    return 3238002691LL;
  NVMeZeroMemory(v17, v10);
  if ( !(unsigned int)SetPrpFromBuffer(a1, (_QWORD *)v11, 0LL, v10) )
    goto LABEL_13;
  *(_BYTE *)(v11 + 4253) |= 7u;
  *(_DWORD *)(v11 + 4100) = a2;
  *(_DWORD *)(v11 + 4136) = (v10 >> 2) - 1;
  *(_QWORD *)(v11 + 4224) = NVMeDirectiveCompletion;
  *(_BYTE *)(v11 + 4096) = 26;
  *(_WORD *)(v11 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 848);
  ProcessCommand(a1, a1 + 848);
  WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_BYTE *)(a1 + 851) == 1 )
  {
    v13 = v17;
    v14 = *v17;
    *a4 = v14;
    if ( a3 < v14 )
    {
      v16 = -1056964604;
    }
    else
    {
      v15 = 0LL;
      if ( v14 )
      {
        do
        {
          *(_DWORD *)(v9 + 4 * v15) = v13[v15 + 1];
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *v13 );
      }
      v16 = 0;
    }
  }
  else
  {
LABEL_13:
    v13 = v17;
    v16 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, v10, (__int64 *)&v17, 0LL);
  return v16;
}
