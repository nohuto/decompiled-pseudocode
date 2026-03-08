/*
 * XREFs of EtwpStackRundown @ 0x140460D80
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x1409EBB50 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpDereferenceStackEntry @ 0x140460D12 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x140460F38 (EtwpTraceCachedStack.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  volatile signed __int32 *i; // rdx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  struct _SLIST_ENTRY **v18; // rdi
  struct _SLIST_ENTRY *v19; // rbx
  _OWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( *(_DWORD *)(a1 + 8) )
  {
    do
    {
      v7 = (volatile signed __int32 *)(a1 + 8 * (v3 + 2 * (v3 + 2)));
      if ( *(volatile signed __int32 **)v7 != v7 )
      {
        v8 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v11) = 4;
          else
            v11 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v11;
        }
        KxAcquireSpinLock((PKSPIN_LOCK)v7 + 2);
        for ( i = *(volatile signed __int32 **)v7; i != v7; i = *(volatile signed __int32 **)i )
        {
          _InterlockedIncrement(i + 6);
          *((_QWORD *)v20 + v8) = i;
          v8 = (unsigned int)(v8 + 1);
        }
        KxReleaseSpinLock((volatile signed __int64 *)v7 + 2);
        if ( KiIrqlFlags )
        {
          v13 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        if ( (_DWORD)v8 )
        {
          v18 = (struct _SLIST_ENTRY **)v20;
          do
          {
            v19 = *v18;
            EtwpTraceCachedStack(a2, a3, 6180LL, *v18);
            EtwpDereferenceStackEntry(v19, (unsigned int **)a1);
            ++v18;
            --v8;
          }
          while ( v8 );
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 8) );
  }
}
