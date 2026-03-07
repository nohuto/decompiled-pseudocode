NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  char *v11; // rsi
  NTSTATUS v12; // ebx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rbp
  int v16; // eax
  PVOID v18; // r14
  SIZE_T v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 ProcessPartition; // [rsp+88h] [rbp+10h]

  LODWORD(v19) = 0;
  v6 = 0LL;
  v7 = *NumberOfBytes;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v12 = -1073741585;
LABEL_34:
    *NumberOfBytes = v6;
    return v12;
  }
  if ( (v7 & 0xFFF) != 0 )
    goto LABEL_4;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v12 = -1073741583;
    goto LABEL_34;
  }
  v13 = (unsigned __int64)VirtualAddress + v7 - 1;
  if ( v13 <= (unsigned __int64)VirtualAddress )
  {
LABEL_4:
    v12 = -1073741584;
    goto LABEL_34;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v14 = MiObtainReferencedVadEx((unsigned __int64)v11, 0, (int *)&v19);
  v15 = (void *)v14;
  if ( !v14 )
  {
    v12 = v19;
    if ( (_DWORD)v19 == -1073741664 )
      v12 = -1073741819;
    goto LABEL_34;
  }
  if ( (*(_DWORD *)(v14 + 48) & 0x70) != 0x40
    || (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) < v13 >> 12 )
  {
    v12 = -1073741800;
    goto LABEL_33;
  }
  MiGetVadCacheAttribute(v14);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v12 = MiReplaceRotateWithDemandZeroNoCopy((unsigned __int64)v11, v13);
      MiUnlockAndDereferenceVad(v15);
      *NumberOfBytes = v7;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v7 )
        MiLogVirtualRotateEvent((__int64)v11, v7, 3);
      return v12;
    }
    if ( v7 )
    {
      v18 = Context;
      do
      {
        v19 = 0LL;
        v12 = MiReplaceRotateWithDemandZero(
                (__int64)v15,
                (__int64)v11,
                v7,
                (int (__fastcall *)(struct _MDL *, struct _MDL *, __int64))CopyFunction,
                (__int64)v18,
                &v19);
        v6 += v19;
        if ( v12 == 1073741849 )
          break;
        v11 += v19;
        v7 -= v19;
      }
      while ( v7 );
    }
    else
    {
      v12 = v19;
    }
    goto LABEL_33;
  }
  if ( Direction )
    v16 = MiRotateToFrameBufferNoCopy((ULONG_PTR)v15, (unsigned __int64)v11, (__int64)NewMdl, v7 >> 12);
  else
    v16 = MiRotateToFrameBuffer(
            ProcessPartition,
            (__int64)v15,
            (unsigned __int64)v11,
            (__int64)NewMdl,
            v7 >> 12,
            (int (__fastcall *)(__int64, struct _MDL *, __int64))CopyFunction,
            (__int64)Context);
  v12 = v16;
  if ( v16 < 0 )
  {
LABEL_33:
    MiUnlockAndDereferenceVad(v15);
    goto LABEL_34;
  }
  MiUnlockAndDereferenceVad(v15);
  *NumberOfBytes = v7;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v7 )
    MiLogVirtualRotateEvent((__int64)v11, v7, Direction);
  return 0;
}
