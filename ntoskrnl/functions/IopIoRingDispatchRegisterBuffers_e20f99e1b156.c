LONG_PTR __fastcall IopIoRingDispatchRegisterBuffers(__int64 a1, __int64 a2)
{
  char PreviousMode; // r10
  __int64 v4; // r14
  __int64 v5; // r15
  ULONG_PTR *v6; // rsi
  ULONG_PTR *v7; // r12
  unsigned __int64 v8; // r9
  signed int BufferEntry; // ebx
  _KPROCESS *Process; // rcx
  __int16 v11; // ax
  bool v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edx
  ULONG_PTR *Pool2; // rax
  __int64 v19; // rbx
  size_t v20; // rbx
  __int64 v21; // rax
  volatile void *v22; // rcx
  unsigned int v23; // ebx
  ULONG_PTR v24; // rax
  ULONG_PTR *v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  unsigned __int64 v29; // [rsp+50h] [rbp-58h]
  __int128 v30; // [rsp+60h] [rbp-48h] BYREF
  char v32; // [rsp+C0h] [rbp+18h]
  bool v33; // [rsp+C8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  LODWORD(v4) = 0;
  LODWORD(v5) = 0;
  v6 = 0LL;
  v27 = *(_DWORD *)(a1 + 176);
  v7 = *(ULONG_PTR **)(a1 + 184);
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    BufferEntry = -1069154303;
    goto LABEL_51;
  }
  v5 = *(unsigned int *)(a2 + 28);
  v8 = *(_QWORD *)(a2 + 32);
  v29 = v8;
  if ( !(_DWORD)v5 )
  {
    BufferEntry = v8 != 0 ? 0xC000000D : 0;
    goto LABEL_51;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 0;
  if ( Process[1].Affinity.StaticBitmap[30] )
  {
    v11 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v11 == 332 || v11 == 452 )
      v13 = 1;
  }
  v33 = v13;
  if ( PreviousMode )
  {
    v14 = 0xFFFFFFFFLL;
    if ( v13 )
      v15 = 8 * v5;
    else
      v15 = 16 * v5;
    if ( v15 <= 0xFFFFFFFF )
      v14 = (unsigned int)v15;
    BufferEntry = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_51;
    if ( (_DWORD)v14 )
    {
      v16 = v8 + v14;
      if ( v16 > 0x7FFFFFFF0000LL || v16 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v17 = v27;
  if ( (_DWORD)v5 == v27 )
  {
    v6 = v7;
    v7 = 0LL;
  }
  else
  {
    Pool2 = (ULONG_PTR *)ExAllocatePool2(257LL, 8 * v5, 1112699465LL);
    v6 = Pool2;
    if ( !Pool2 )
    {
      BufferEntry = -1073741670;
      goto LABEL_51;
    }
    v19 = (unsigned int)v5;
    if ( (unsigned int)v5 >= v27 )
      v19 = v27;
    v20 = 8 * v19;
    memmove(Pool2, v7, v20);
    memset(v7, 0, v20);
    v17 = v27;
    v8 = v29;
    PreviousMode = v32;
  }
  v4 = 0LL;
  while ( (unsigned int)v4 < (unsigned int)v5 )
  {
    v21 = (unsigned int)v4;
    if ( v33 )
    {
      v22 = (volatile void *)*(unsigned int *)(v8 + 8 * v4);
      v28 = (__int64)v22;
      v23 = *(_DWORD *)(v8 + 8 * v4 + 4);
    }
    else
    {
      v22 = *(volatile void **)(v8 + 16LL * (unsigned int)v4);
      v28 = (__int64)v22;
      v23 = *(_DWORD *)(v8 + 16LL * (unsigned int)v4 + 8);
      v21 = (unsigned int)v4;
    }
    if ( (unsigned int)v4 >= v17
      || (v24 = v6[v21]) == 0
      || *(volatile void **)(v24 + 32) != v22
      || *(_DWORD *)(v24 + 40) != v23 )
    {
      if ( PreviousMode )
        ProbeForWrite(v22, v23, 1u);
      v25 = &v6[(unsigned int)v4];
      if ( *v25 )
      {
        IopMcWaitAndCleanupBufferEntry(*v25);
        v25 = &v6[v4];
        *v25 = 0LL;
      }
      if ( v23 )
      {
        BufferEntry = IopMcCreateBufferEntry(v28, v23, v32, (__int64 *)v25);
        if ( BufferEntry < 0 )
          goto LABEL_51;
      }
      v8 = v29;
      v17 = v27;
    }
    v4 = (unsigned int)(v4 + 1);
    PreviousMode = v32;
  }
  *(_DWORD *)(a1 + 176) = v4;
  *(_QWORD *)(a1 + 184) = v6;
  v6 = 0LL;
  BufferEntry = 0;
LABEL_51:
  if ( v6 )
    IopIoRingCleanupRegBufferArray(v5, v6);
  if ( v7 )
    IopIoRingCleanupRegBufferArray(v27, v7);
  *((_QWORD *)&v30 + 1) = (unsigned int)v4;
  *(_QWORD *)&v30 = (unsigned int)BufferEntry;
  return IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v30, 0);
}
