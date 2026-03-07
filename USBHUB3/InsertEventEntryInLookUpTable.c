__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  signed __int64 v5; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // ecx
  unsigned __int64 v8; // r10
  int v9; // eax
  unsigned __int8 v10; // r14
  __int64 v11; // rbx
  unsigned __int8 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 i; // r8
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // r12d
  __int64 v19; // rbp
  KIRQL v20; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *j; // rsi
  unsigned int v23; // eax
  volatile signed __int64 v24; // rbp
  int v25; // ecx
  int v26; // eax
  __int64 v27; // r15
  unsigned int k; // esi
  __int64 v29; // rcx
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned __int8 v32; // r11
  signed __int64 v33; // r8
  __int64 v34; // rax
  int v35; // edi
  volatile signed __int64 *v36; // r9
  signed __int64 v37; // r10
  BOOL v38; // ecx
  BOOL v39; // eax
  volatile LONG *v40; // rcx
  unsigned int v42; // [rsp+40h] [rbp-68h]
  signed __int64 v43; // [rsp+48h] [rbp-60h] BYREF
  __int64 v44; // [rsp+50h] [rbp-58h]
  void *Buf1; // [rsp+58h] [rbp-50h]
  KIRQL OldIrql; // [rsp+B0h] [rbp+8h]
  char v48; // [rsp+C0h] [rbp+18h]

  v5 = 0LL;
  v44 = qword_1C006A228;
  v6 = a3;
  v7 = 0;
  Buf1 = (void *)(a4 + 16);
  v43 = 0LL;
  v8 = 0LL;
  v42 = 0;
  do
  {
    v9 = *(unsigned __int8 *)(a4 + 16 + v8++);
    v7 = ((1025 * (v7 + v9)) >> 6) ^ (1025 * (v7 + v9));
  }
  while ( v8 < 8 );
  v10 = a5;
  v11 = v44;
  v12 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v6 )
  {
    v13 = a4 + 16LL * v12;
    v14 = (unsigned __int8)(v6 - v12);
    do
    {
      for ( i = 0LL; i < *(unsigned int *)(v13 + 8); v7 = ((1025 * (v7 + v16)) >> 6) ^ (1025 * (v7 + v16)) )
      {
        v16 = *(unsigned __int8 *)(i + *(_QWORD *)v13);
        ++i;
      }
      v13 += 16LL;
      --v14;
    }
    while ( v14 );
  }
  v17 = (9 * v7) ^ ((9 * v7) >> 11);
  v18 = 32769 * v17;
  v19 = v17 & 0x1F;
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v44 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v44 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v44 + 280));
    goto LABEL_17;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v44 + 373) )
    {
      v20 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v44 + 280, v20, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v44 + 280));
LABEL_17:
    v48 = 1;
    goto LABEL_18;
  }
  ExAcquirePushLockSharedEx(v44 + 272, 0LL);
  v48 = 0;
LABEL_18:
  for ( j = (volatile signed __int64 *)(v44 + 8 * v19);
        ;
        j = (volatile signed __int64 *)((((__int64)v26 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v24 + 32) )
  {
    if ( !*j )
    {
      if ( *(_DWORD *)(v11 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v11 + 316);
        v30 = -1073741789;
        goto LABEL_59;
      }
      if ( !v5 )
      {
        v23 = CreateNewEventEntry(*(_BYTE *)(v11 + 373), a2, v6, a4, v10, v18, &v43);
        v5 = v43;
        v42 = v23;
        if ( !v43 )
        {
          v30 = v23;
          if ( v23 == -1073741801 )
            ++*(_DWORD *)(v11 + 320);
          else
            ++*(_DWORD *)(v11 + 324);
          goto LABEL_59;
        }
      }
      if ( !_InterlockedCompareExchange64(j, v5, 0LL) )
      {
        v43 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v11 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v11 + 360), *(_DWORD *)(v11 + 368));
        v31 = *(_DWORD *)(v11 + 256);
        v5 = v43;
        v30 = v42;
        if ( *(_DWORD *)(v11 + 304) < v31 )
          *(_DWORD *)(v11 + 304) = v31;
        goto LABEL_59;
      }
      v5 = v43;
    }
    v24 = *j;
    v25 = *(_DWORD *)(*j + 40);
    if ( v18 != v25 )
    {
      v26 = v18 - v25;
      continue;
    }
    v27 = *(_QWORD *)(v24 + 16);
    v26 = memcmp(Buf1, (const void *)(v27 + 16), 8uLL);
    if ( !v26 )
      break;
LABEL_34:
    ;
  }
  for ( k = *(unsigned __int8 *)(v24 + 45) + 2; k < v6; ++k )
  {
    v29 = 16LL * k;
    v26 = *(_DWORD *)(v29 + a4 + 8) - *(_DWORD *)(v29 + v27 + 8);
    if ( !v26 )
    {
      v26 = memcmp(*(const void **)(v29 + a4), *(const void **)(v29 + v27), *(unsigned int *)(v29 + a4 + 8));
      if ( !v26 )
        continue;
    }
    v10 = a5;
    goto LABEL_34;
  }
  if ( v24 )
  {
    v32 = 2;
    if ( a5 )
    {
      do
      {
        v33 = **(_QWORD **)(a4 + 16LL * v32);
        v34 = *(_QWORD *)(v24 + 16);
        v35 = *(unsigned __int8 *)(v34 + 16LL * v32 + 13);
        v36 = *(volatile signed __int64 **)(v34 + 16LL * v32);
        if ( v35 == 113 )
        {
          _InterlockedExchangeAdd64(v36, v33);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v34 + 16LL * v32 + 13) - 114 <= 1 )
        {
          v37 = *v36;
          v38 = v33 > *v36;
          if ( v35 == 114 )
            v38 = v33 < *v36;
          if ( v38 )
          {
            do
            {
              if ( v37 == _InterlockedCompareExchange64(v36, v33, v37) )
                break;
              v37 = *v36;
              v39 = v33 > *v36;
              if ( v35 == 114 )
                v39 = v33 < *v36;
            }
            while ( v39 );
          }
        }
        ++v32;
      }
      while ( v32 < (unsigned int)a5 + 2 );
      v5 = v43;
      v11 = v44;
    }
  }
  v30 = v42;
LABEL_59:
  if ( v48 )
  {
    v40 = (volatile LONG *)(v11 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v40);
    else
      ExReleaseSpinLockShared(v40, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v11 + 272, 0LL);
  }
  if ( v5 )
    ExFreePoolWithTag(*(PVOID *)(v5 + 16), 0);
  return v30;
}
