/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C025D104
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5B80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01F5D14 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 * Callees:
 *     CompareEventEntry @ 0x1C025CB6C (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1C025CBF8 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1C025CC88 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C025CEF4 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r15d
  char v8; // r13
  signed __int64 v9; // rdi
  unsigned int v10; // r14d
  int v11; // ebp
  volatile signed __int64 *i; // rsi
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // r9
  __int64 v19; // rbx
  signed __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r10d
  volatile signed __int64 *v23; // r8
  signed __int64 v24; // rcx
  BOOL v25; // eax
  volatile LONG *v26; // rcx
  __int64 v28; // [rsp+40h] [rbp-48h]
  KIRQL CurrentIrql; // [rsp+48h] [rbp-40h]
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int128 *v31; // [rsp+98h] [rbp+10h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v7 = a5;
  v8 = 0;
  v30 = 0LL;
  v28 = v5;
  v9 = 0LL;
  v10 = 0;
  v11 = ComputeEventEntryHash(a5, a3, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_10;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v8 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
LABEL_11:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v11 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v16 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v14 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v10 = -1073741789;
        goto LABEL_46;
      }
      if ( !v9 )
      {
        v13 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v31, a3, v32, v7, v11, &v30);
        v9 = v30;
        v10 = v13;
        if ( !v30 )
        {
          if ( v13 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_46;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v9, 0LL) )
      {
        v30 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
        v17 = *(_DWORD *)(v5 + 256);
        v9 = v30;
        if ( *(_DWORD *)(v5 + 304) < v17 )
          *(_DWORD *)(v5 + 304) = v17;
        goto LABEL_46;
      }
      v9 = v30;
    }
    v14 = *i;
    v15 = *(_DWORD *)(v14 + 40);
    v16 = v11 == v15 ? CompareEventEntry(a3, v32, v14) : v11 - v15;
    if ( !v16 )
      break;
  }
  if ( v14 )
  {
    v18 = 2;
    if ( v7 < 0xFFFFFFFE && v7 != 0 )
    {
      v19 = v32;
      do
      {
        v20 = **(_QWORD **)(v19 + 16LL * v18);
        v21 = *(_QWORD *)(v14 + 16);
        v22 = *(unsigned __int8 *)(v21 + 16LL * v18 + 13);
        v23 = *(volatile signed __int64 **)(v21 + 16LL * v18);
        if ( v22 == 113 )
        {
          _InterlockedExchangeAdd64(v23, v20);
        }
        else if ( (unsigned int)(v22 - 114) <= 1 )
        {
          while ( 1 )
          {
            v24 = *v23;
            if ( (_BYTE)v22 == 114 )
              break;
            if ( v20 <= v24 )
            {
              v25 = 0;
LABEL_40:
              if ( !v25 )
                goto LABEL_44;
            }
            if ( v24 == _InterlockedCompareExchange64(v23, v20, v24) )
              goto LABEL_44;
          }
          v25 = v20 < v24;
          goto LABEL_40;
        }
LABEL_44:
        ++v18;
      }
      while ( v18 < v7 + 2 );
      v9 = v30;
      v5 = v28;
    }
  }
LABEL_46:
  if ( v8 )
  {
    v26 = (volatile LONG *)(v5 + 280);
    if ( CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v26);
    else
      ExReleaseSpinLockShared(v26, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v9 )
    ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
  return v10;
}
