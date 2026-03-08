/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1406A6ABC
 * Callers:
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 * Callees:
 *     MiMakePartitionActive @ 0x1402A6140 (MiMakePartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x1403AA5DC (MiAllocateMappedWriterMdls.c)
 *     MiLockPartitionSystemThreads @ 0x1403B04F0 (MiLockPartitionSystemThreads.c)
 *     MiUnlockPartitionSystemThreads @ 0x1403B10A0 (MiUnlockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x140626E1C (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int v3; // ecx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // rax
  int MappedWriterMdls; // edi
  unsigned int v8; // ebp
  _QWORD *v9; // r15
  int *v10; // r14
  __int64 v11; // rsi
  _QWORD v12[9]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+A8h] [rbp+10h] BYREF
  int v14; // [rsp+ACh] [rbp+14h]
  __int64 v15; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+20h]

  v13 = 3;
  v12[0] = MiDereferenceSegmentThread;
  v1 = &v13;
  v14 = 5;
  v12[1] = MiMappedPageWriter;
  v3 = 0;
  while ( a1[(unsigned int)*v1 + 19] )
  {
    ++v3;
    ++v1;
    if ( v3 >= 2 )
    {
      if ( v3 == 2 )
        return 0LL;
      break;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v6 = a1[25];
  v15 = 0LL;
  MappedWriterMdls = 0;
  v16 = *(_QWORD *)(v6 + 120);
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v8 = 0;
  v9 = v12;
  v10 = &v13;
  while ( 1 )
  {
    v11 = (unsigned int)*v10;
    if ( a1[v11 + 19] )
      goto LABEL_13;
    if ( (_DWORD)v11 == 5 )
    {
      MappedWriterMdls = MiAllocateMappedWriterMdls(a1);
      if ( MappedWriterMdls < 0 )
        goto LABEL_14;
    }
    if ( !(unsigned int)MiMakePartitionActive((__int64)a1) )
      break;
    MappedWriterMdls = PsCreateSystemThreadEx(&v15, 0x1FFFFFLL, 0LL, v16, 0LL, *v9, a1, 0LL, 0LL);
    if ( MappedWriterMdls < 0 )
      goto LABEL_16;
    a1[v11 + 19] = v15;
LABEL_13:
    ++v8;
    ++v10;
    ++v9;
    if ( v8 >= 2 )
      goto LABEL_14;
  }
  MappedWriterMdls = -1073741523;
LABEL_16:
  if ( (_DWORD)v11 == 5 )
    MiDeleteMappedMdls((__int64)a1);
LABEL_14:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
