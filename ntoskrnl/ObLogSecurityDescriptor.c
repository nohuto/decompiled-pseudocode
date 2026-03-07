__int64 __fastcall ObLogSecurityDescriptor(__int16 *Buf1, _QWORD *a2, unsigned int a3)
{
  int v4; // ecx
  unsigned int v5; // esi
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // rbx
  __int16 *v15; // rcx
  __int16 *i; // rax
  __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *Pool2; // r12
  signed __int64 *v20; // r14
  volatile signed __int64 *v21; // r15
  signed __int64 v22; // rdi

  v4 = Buf1[1];
  v5 = ((v4 >> 31) & 0xFFFFFFEC) + 40;
  if ( (v4 & 0x8000u) == 0 )
  {
    v7 = (char *)*((_QWORD *)Buf1 + 1);
  }
  else
  {
    v6 = *((unsigned int *)Buf1 + 1);
    if ( !(_DWORD)v6 )
      goto LABEL_7;
    v7 = (char *)Buf1 + v6;
  }
  if ( v7 )
    v5 += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
  if ( (v4 & 0x8000u) == 0 )
  {
    v9 = (char *)*((_QWORD *)Buf1 + 2);
    goto LABEL_9;
  }
LABEL_7:
  v8 = *((unsigned int *)Buf1 + 2);
  if ( !(_DWORD)v8 )
    goto LABEL_11;
  v9 = (char *)Buf1 + v8;
LABEL_9:
  if ( v9 )
    v5 += (4 * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v4 & 4) == 0 )
    goto LABEL_17;
  if ( (v4 & 0x8000u) == 0 )
  {
    v11 = (char *)*((_QWORD *)Buf1 + 4);
  }
  else
  {
    v10 = *((unsigned int *)Buf1 + 4);
    if ( !(_DWORD)v10 )
      goto LABEL_17;
    v11 = (char *)Buf1 + v10;
  }
  if ( v11 )
    v5 += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v4 & 0x10) == 0 )
    goto LABEL_23;
  if ( (v4 & 0x8000u) == 0 )
  {
    v13 = (char *)*((_QWORD *)Buf1 + 3);
  }
  else
  {
    v12 = *((unsigned int *)Buf1 + 3);
    if ( !(_DWORD)v12 )
      goto LABEL_23;
    v13 = (char *)Buf1 + v12;
  }
  if ( v13 )
    v5 += (*((unsigned __int16 *)v13 + 1) + 3) & 0xFFFFFFFC;
LABEL_23:
  v14 = 0LL;
  v15 = (__int16 *)((char *)Buf1 + (v5 & 0xFFFFFFF8));
  for ( i = Buf1; i < v15; v14 = __ROL8__(v17, 3) )
  {
    v17 = *(_QWORD *)i ^ v14;
    i += 8;
  }
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  v20 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v14);
LABEL_26:
  --CurrentThread->KernelApcDisable;
  v21 = v20 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v20, 0LL);
  while ( 1 )
  {
    v22 = *v21;
    if ( *v21 )
      break;
LABEL_31:
    if ( !Pool2 )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 + 40 < v5 )
        return 3221225626LL;
      Pool2 = (signed __int64 *)ExAllocatePool2(264LL, v5 + 40, 1666409039LL);
      if ( !Pool2 )
        return 3221225626LL;
      Pool2[1] = a3;
      Pool2[2] = v14;
      *((_DWORD *)Pool2 + 6) = v5;
      memmove(Pool2 + 4, Buf1, v5);
      goto LABEL_26;
    }
    *Pool2 = v22;
    v21 = (volatile signed __int64 *)_InterlockedCompareExchange64(v21, (signed __int64)Pool2, v22);
    if ( (volatile signed __int64 *)v22 == v21 )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = Pool2 + 4;
      return 0LL;
    }
  }
  while ( *(_QWORD *)(v22 + 16) != v14 )
  {
    if ( *(_QWORD *)(v22 + 16) > v14 )
      goto LABEL_31;
LABEL_30:
    v21 = (volatile signed __int64 *)v22;
    v22 = *(_QWORD *)v22;
    if ( !v22 )
      goto LABEL_31;
  }
  if ( *(_DWORD *)(v22 + 24) != v5 || memcmp(Buf1, (const void *)(v22 + 32), v5) )
    goto LABEL_30;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v22 + 32;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x6353624Fu);
  return 0LL;
}
