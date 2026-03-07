__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r14d
  __int64 v10; // rcx
  int v11; // r8d
  volatile signed __int64 *i; // rsi
  unsigned int NewEventEntry; // eax
  unsigned int v14; // eax
  volatile signed __int64 v16; // rsi
  int v17; // eax
  unsigned __int8 v18; // r9
  signed __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r11d
  volatile signed __int64 *v22; // r8
  KIRQL v23; // al
  KIRQL CurrentIrql; // al
  signed __int64 v25; // rax
  volatile signed __int64 v26; // rtt
  volatile LONG *v27; // rcx
  KIRQL OldIrql; // [rsp+40h] [rbp-58h]
  signed __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h]
  char v31; // [rsp+A0h] [rbp+8h]
  int v32; // [rsp+A8h] [rbp+10h]

  v32 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  LOBYTE(a2) = a3;
  v29 = 0LL;
  LOBYTE(a1) = a5;
  v30 = v5;
  v8 = 0;
  v9 = ComputeEventEntryHash(a1, a2, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_34;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v23 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v23, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_34:
    v31 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v31 = 0;
LABEL_4:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v17 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v16 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_14;
      }
      if ( !v7 )
      {
        LOBYTE(v10) = *(_BYTE *)(v5 + 373);
        LOBYTE(v11) = a3;
        NewEventEntry = CreateNewEventEntry(v10, v32, v11, a4, a5, v9, (__int64)&v29);
        v7 = v29;
        v8 = NewEventEntry;
        if ( !v29 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_14;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      {
        v29 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
        v14 = *(_DWORD *)(v5 + 256);
        v7 = v29;
        if ( *(_DWORD *)(v5 + 304) < v14 )
          *(_DWORD *)(v5 + 304) = v14;
        goto LABEL_14;
      }
      v7 = v29;
    }
    v16 = *i;
    v10 = *(unsigned int *)(v16 + 40);
    if ( v9 == (_DWORD)v10 )
    {
      LOBYTE(v10) = a3;
      v17 = CompareEventEntry(v10, a4, v16);
    }
    else
    {
      v17 = v9 - v10;
    }
    if ( !v17 )
      break;
  }
  if ( v16 )
  {
    v18 = 2;
    if ( a5 )
    {
      do
      {
        v19 = **(_QWORD **)(a4 + 16LL * v18);
        v20 = *(_QWORD *)(v16 + 16);
        v21 = *(unsigned __int8 *)(v20 + 16LL * v18 + 13);
        v22 = *(volatile signed __int64 **)(v20 + 16LL * v18);
        if ( v21 == 113 )
        {
          _InterlockedExchangeAdd64(v22, v19);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v20 + 16LL * v18 + 13) - 114 <= 1 )
        {
          do
          {
            v25 = *v22;
            if ( v21 == 114 )
            {
              if ( v19 >= v25 )
                break;
            }
            else if ( v19 <= v25 )
            {
              break;
            }
            v26 = *v22;
          }
          while ( v26 != _InterlockedCompareExchange64(v22, v19, v25) );
        }
        ++v18;
      }
      while ( v18 < (unsigned int)a5 + 2 );
      v7 = v29;
      v5 = v30;
    }
  }
LABEL_14:
  if ( v31 )
  {
    v27 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v27);
    else
      ExReleaseSpinLockShared(v27, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    ExFreePoolWithTag(*(PVOID *)(v7 + 16), 0);
  return v8;
}
