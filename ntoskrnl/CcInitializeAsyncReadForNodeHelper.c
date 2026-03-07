char __fastcall CcInitializeAsyncReadForNodeHelper(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // r9d
  char v6; // di
  __int64 PoolWithTagFromNode; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // r9d
  __int64 v19; // rax
  int v20; // r9d
  __int64 v21; // rax
  int v22; // edx
  unsigned int v23; // r9d
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // r9d
  __int64 v27; // rax
  unsigned int v28; // r15d
  __int64 v29; // rbx
  __int64 v30; // r12
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  bool v41; // cf
  unsigned int v42; // r15d
  unsigned int v43; // r9d
  _QWORD *StartContext; // rax
  void *v45; // rbx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+50h] BYREF
  char *v49; // [rsp+C8h] [rbp+58h]

  v49 = a4;
  v4 = *(_DWORD *)(a3 + 24);
  v6 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(
                          NonPagedPoolNx,
                          16LL * (unsigned int)(CcMaxNestingLevel + 1),
                          1901552451LL,
                          v4 | 0x80000000,
                          0);
  *(_QWORD *)(a3 + 232) = PoolWithTagFromNode;
  if ( PoolWithTagFromNode )
  {
    v10 = 0LL;
    v11 = (unsigned int)(CcMaxNestingLevel + 1);
    do
    {
      v12 = (_QWORD *)(v10 + *(_QWORD *)(a3 + 232));
      v10 += 16LL;
      v12[1] = v12;
      *v12 = v12;
      --v11;
    }
    while ( v11 );
  }
  v13 = ExpAllocatePoolWithTagFromNode(
          NonPagedPoolNx,
          16LL * (unsigned int)(CcMaxNestingLevel + 1),
          1901552451LL,
          *(_DWORD *)(a3 + 24) | 0x80000000,
          0);
  v14 = CcMaxNestingLevel;
  v15 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 256) = v13;
  v16 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 16LL * (unsigned int)(v14 + 1), 1901552451LL, v15, 0);
  v17 = CcMaxNestingLevel;
  v18 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 264) = v16;
  v19 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 404LL * (unsigned int)(v17 + 1), 1901552451LL, v18, 0);
  v20 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 280) = v19;
  v21 = ExpAllocatePoolWithTagFromNode(
          NonPagedPoolNx,
          24LL * (unsigned int)(CcMaxNestingLevel + 1),
          1901552451LL,
          v20 | 0x80000000,
          0);
  v22 = CcMaxNestingLevel;
  v23 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 272) = v21;
  v24 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 4LL * (unsigned int)(v22 + 1), 1901552451LL, v23, 0);
  v25 = CcMaxNestingLevel;
  v26 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 240) = v24;
  v27 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 4LL * (unsigned int)(v25 + 1), 1901552451LL, v26, 0);
  *(_QWORD *)(a3 + 248) = v27;
  if ( *(_QWORD *)(a3 + 232)
    && *(_QWORD *)(a3 + 256)
    && *(_QWORD *)(a3 + 264)
    && *(_QWORD *)(a3 + 280)
    && *(_QWORD *)(a3 + 272)
    && *(_QWORD *)(a3 + 240)
    && v27 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = 404LL * v28;
      v30 = 16LL * v28;
      v31 = (_QWORD *)(v30 + *(_QWORD *)(a3 + 256));
      v31[1] = v31;
      *v31 = v31;
      v32 = (_QWORD *)(v30 + *(_QWORD *)(a3 + 264));
      v32[1] = v32;
      *v32 = v32;
      v33 = 3LL * v28;
      v34 = *(_QWORD *)(a3 + 272);
      *(_WORD *)(v34 + 8 * v33) = 1;
      *(_BYTE *)(v34 + 8 * v33 + 2) = 6;
      *(_DWORD *)(v34 + 8 * v33 + 4) = 0;
      v35 = (_QWORD *)(v34 + 24LL * v28 + 8);
      v35[1] = v35;
      *v35 = v35;
      *(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * v28) = 0;
      *(_DWORD *)(*(_QWORD *)(a3 + 248) + 4LL * v28) = 0;
      memset((void *)(v29 + *(_QWORD *)(a3 + 280)), 255, 4LL * (unsigned int)CcMaxAsyncReadWorkerThreads);
      *(_DWORD *)(v29 + *(_QWORD *)(a3 + 280)) = 0;
      v36 = 1;
      if ( (unsigned int)CcMaxAsyncReadWorkerThreads > 1 )
        break;
LABEL_17:
      if ( ++v28 > CcMaxNestingLevel )
      {
        v42 = 0;
        while ( 1 )
        {
          v43 = *(_DWORD *)(a3 + 24) | 0x80000000;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          StartContext = (_QWORD *)ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, v43, 0);
          v45 = StartContext;
          if ( !StartContext )
            goto LABEL_31;
          *((_DWORD *)StartContext + 8) = 3;
          StartContext[7] = a1;
          StartContext[8] = a2;
          StartContext[9] = a3;
          *((_DWORD *)StartContext + 10) = 0;
          *((_DWORD *)StartContext + 9) = v42;
          StartContext[2] = CcAsyncReadWorkerThread;
          StartContext[3] = StartContext;
          *StartContext = 0LL;
          ++*(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * v42);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
            __fastfail(0xEu);
          if ( a2 && _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
            __fastfail(0xEu);
          if ( PsCreateSystemThread(
                 &ThreadHandle,
                 0x1FFFFFu,
                 &ObjectAttributes,
                 *(HANDLE *)(*(_QWORD *)(a1 + 8) + 120LL),
                 0LL,
                 (PKSTART_ROUTINE)CcAsyncReadWorker,
                 StartContext) < 0 )
          {
            ExFreePoolWithTag(v45, 0x71576343u);
            CcDereferencePartition(a1);
            if ( a2 && _InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) <= -1 )
              __fastfail(0xEu);
            goto LABEL_31;
          }
          ZwClose(ThreadHandle);
          if ( ++v42 > CcMaxNestingLevel )
          {
            v6 = 1;
            goto LABEL_31;
          }
        }
      }
    }
    while ( 1 )
    {
      v37 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, *(_DWORD *)(a3 + 24) | 0x80000000, 0);
      v38 = (_QWORD *)v37;
      if ( !v37 )
        break;
      *(_QWORD *)(v37 + 56) = a1;
      *(_DWORD *)(v37 + 32) = 3;
      *(_QWORD *)(v37 + 64) = a2;
      *(_QWORD *)(v37 + 72) = a3;
      *(_DWORD *)(v37 + 40) = v36;
      *(_DWORD *)(v37 + 36) = v28;
      *(_QWORD *)(v37 + 16) = CcAsyncReadWorkerThread;
      *(_QWORD *)(v37 + 24) = v37;
      *(_QWORD *)v37 = 0LL;
      v39 = v30 + *(_QWORD *)(a3 + 232);
      v40 = *(_QWORD **)(v39 + 8);
      if ( *v40 != v39 )
        __fastfail(3u);
      *v38 = v39;
      v41 = ++v36 < (unsigned int)CcMaxAsyncReadWorkerThreads;
      v38[1] = v40;
      *v40 = v38;
      *(_QWORD *)(v39 + 8) = v38;
      if ( !v41 )
        goto LABEL_17;
    }
  }
LABEL_31:
  *v49 = v6;
  return v6;
}
