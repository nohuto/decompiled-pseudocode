/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C007522C
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0041D64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0062C48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapSz@D@@@-$_tlgWrit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2@Z @ 0x1C006CC44 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C006CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@23@Z @ 0x1C006CEB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C006D00C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 * Callees:
 *     CompareEventEntry @ 0x1C0074C98 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1C0074D24 (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1C0074DB4 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C007501C (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r14d
  KIRQL v10; // al
  KIRQL CurrentIrql; // al
  volatile signed __int64 *i; // rsi
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned __int8 v18; // r9
  signed __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r11d
  volatile signed __int64 *v22; // r8
  signed __int64 v23; // rax
  volatile signed __int64 v24; // rtt
  volatile LONG *v25; // rcx
  KIRQL OldIrql; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v28 = 0LL;
  v29 = v5;
  v8 = 0;
  v9 = ComputeEventEntryHash(a5, a3, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_10;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v10 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v10, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v30 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v30 = 0;
LABEL_11:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v16 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v14 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_44;
      }
      if ( !v7 )
      {
        v13 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, &v28);
        v7 = v28;
        v8 = v13;
        if ( !v28 )
        {
          if ( v13 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_44;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      {
        v28 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
        v17 = *(_DWORD *)(v5 + 256);
        v7 = v28;
        if ( *(_DWORD *)(v5 + 304) < v17 )
          *(_DWORD *)(v5 + 304) = v17;
        goto LABEL_44;
      }
      v7 = v28;
    }
    v14 = *i;
    v15 = *(_DWORD *)(v14 + 40);
    v16 = v9 == v15 ? CompareEventEntry(a3, a4, v14) : v9 - v15;
    if ( !v16 )
      break;
  }
  if ( v14 )
  {
    v18 = 2;
    if ( a5 )
    {
      do
      {
        v19 = **(_QWORD **)(a4 + 16LL * v18);
        v20 = *(_QWORD *)(v14 + 16);
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
            v23 = *v22;
            if ( v21 == 114 )
            {
              if ( v19 >= v23 )
                break;
            }
            else if ( v19 <= v23 )
            {
              break;
            }
            v24 = *v22;
          }
          while ( v24 != _InterlockedCompareExchange64(v22, v19, v23) );
        }
        ++v18;
      }
      while ( v18 < (unsigned int)a5 + 2 );
      v7 = v28;
      v5 = v29;
    }
  }
LABEL_44:
  if ( v30 )
  {
    v25 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v25);
    else
      ExReleaseSpinLockShared(v25, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v7 )
    ExFreePoolWithTag(*(PVOID *)(v7 + 16), 0);
  return v8;
}
