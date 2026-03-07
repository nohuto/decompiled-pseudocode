signed __int32 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, __int64 a3)
{
  volatile signed __int64 *v3; // r15
  unsigned __int16 v7; // cx
  void ***v8; // rsi
  void ***v9; // rbx
  __int64 v10; // rdx
  SIZE_T v11; // rax
  __int64 Pool2; // rax
  __int64 v13; // rdi
  void **v14; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void **v21; // rcx
  void **v22; // rax

  v3 = (volatile signed __int64 *)(a1 + 688);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  v7 = *(_WORD *)a2;
  if ( *(_DWORD *)(a1 + 324) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_22;
  v8 = (void ***)(a1 + 1040);
  v9 = *(void ****)(a1 + 1040);
  while ( 1 )
  {
    if ( v9 == v8 )
    {
      Pool2 = ExAllocatePool2(256LL, v7 + 50LL, 1651995717LL);
      v13 = Pool2;
      if ( !Pool2 )
        goto LABEL_22;
      *(_DWORD *)(Pool2 + 20) = 1;
      *(_DWORD *)(Pool2 + 24) = 1;
      *(_OWORD *)(Pool2 + 28) = *(_OWORD *)a3;
      *(_DWORD *)(Pool2 + 16) = *(unsigned __int16 *)a2 + 2;
      memmove((void *)(Pool2 + 44), a2[1], *(unsigned __int16 *)a2);
      *(_WORD *)(v13 + 2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 44) = 0;
      *(_DWORD *)(a1 + 324) += *(_DWORD *)(v13 + 16) + 16;
      goto LABEL_9;
    }
    LOWORD(v10) = v7;
    if ( *((_DWORD *)v9 + 4) == v7 + 2LL )
    {
      v11 = RtlCompareMemory((char *)&v9[2 * *((unsigned int *)v9 + 5) + 3] + 4, a2[1], v7);
      v10 = *(unsigned __int16 *)a2;
      if ( v11 == v10 )
        break;
    }
    v9 = (void ***)*v9;
    v7 = v10;
  }
  v15 = *((_DWORD *)v9 + 5);
  v16 = 0;
  if ( !v15 )
  {
LABEL_16:
    if ( v15 >= 0x10 )
      goto LABEL_22;
    v19 = ExAllocatePool2(256LL, *((_DWORD *)v9 + 4) + 16 * (v15 + 3), 1651995717LL);
    v13 = v19;
    if ( !v19 )
      goto LABEL_22;
    memmove((void *)(v19 + 28), (char *)v9 + 28, 16LL * *((unsigned int *)v9 + 5));
    *(_OWORD *)(v13 + 16LL * *((unsigned int *)v9 + 5) + 28) = *(_OWORD *)a3;
    v20 = (unsigned int)(*((_DWORD *)v9 + 5) + 1);
    *(_DWORD *)(v13 + 20) = v20;
    *(_DWORD *)(v13 + 24) = *((_DWORD *)v9 + 6) + 1;
    *(_DWORD *)(v13 + 16) = *((_DWORD *)v9 + 4);
    memmove(
      (void *)(v13 + 16 * v20 + 28),
      (char *)&v9[2 * *((unsigned int *)v9 + 5) + 3] + 4,
      *((unsigned int *)v9 + 4));
    v21 = *v9;
    if ( (*v9)[1] != v9 || (v22 = v9[1], *v22 != v9) )
LABEL_10:
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    ExFreePoolWithTag(v9, 0);
LABEL_9:
    v14 = *v8;
    if ( (*v8)[1] == v8 )
    {
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v13 + 8) = v8;
      v14[1] = (void *)v13;
      *v8 = (void **)v13;
      _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0xC0u);
      goto LABEL_22;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v17 = 2LL * v16;
    v18 = *(_QWORD *)a3 - *(_QWORD *)((char *)&v9[v17 + 3] + 4);
    if ( *(void ***)a3 == *(void ***)((char *)&v9[v17 + 3] + 4) )
      v18 = *(_QWORD *)(a3 + 8) - *(_QWORD *)((char *)&v9[v17 + 4] + 4);
    if ( !v18 )
      break;
    if ( ++v16 >= v15 )
      goto LABEL_16;
  }
LABEL_22:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
