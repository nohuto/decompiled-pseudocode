/*
 * XREFs of EtwpStackRundown @ 0x1405ADA68
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140710AB0 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14093D8D4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpDereferenceStackEntry @ 0x1405AD9F8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceCachedStack @ 0x1405ADC14 (EtwpTraceCachedStack.c)
 */

void __fastcall EtwpStackRundown(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  volatile signed __int32 *i; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  _SLIST_ENTRY **v17; // rsi
  _SLIST_ENTRY *v18; // rbx
  _OWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( *(_DWORD *)(a1 + 8) )
  {
    do
    {
      v7 = (volatile signed __int32 *)(a1 + 8 * (v3 + 2 * v3 + 4));
      if ( *(volatile signed __int32 **)v7 != v7 )
      {
        v8 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        KxAcquireSpinLock((PKSPIN_LOCK)v7 + 2);
        for ( i = *(volatile signed __int32 **)v7; i != v7; i = *(volatile signed __int32 **)i )
        {
          _InterlockedIncrement(i + 6);
          *((_QWORD *)v19 + v8) = i;
          v8 = (unsigned int)(v8 + 1);
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v7 + 2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v12 = KeGetCurrentIrql();
            if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v15 & v14[5]) == 0;
              v14[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( (_DWORD)v8 )
        {
          v17 = (_SLIST_ENTRY **)v19;
          do
          {
            v18 = *v17;
            EtwpTraceCachedStack(a2, a3, 6180LL, *v17);
            EtwpDereferenceStackEntry(v18, (unsigned int **)a1);
            ++v17;
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
