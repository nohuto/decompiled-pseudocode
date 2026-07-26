/*
 * XREFs of ndisMTimerObjectDpc @ 0x1C00BD590
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BD2C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z @ 0x1C00ABB98 (-ndisTraceDpcEnd@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K_K@Z.c)
 *     ?ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00ABC80 (-ndisTraceDpcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisMTimerObjectDpc(
        struct _KDPC *Dpc,
        _NDIS_MINIPORT_TIMER **DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 Clock; // r15
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  __int64 v8; // r8
  char v9; // r14
  __int64 v10; // r8
  $D73D6969079A092B7078AF02E356504F *v11; // rdx
  _NDIS_MINIPORT_TIMER *TimerQueue; // rcx
  __int64 v13; // rax
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[3];
  Clock = 0LL;
  if ( v4->Header.Type == 17 )
  {
    DriverHandle = v4->DriverHandle;
    v14 = 0;
    if ( ndisReferenceRefEx(&DriverHandle->Ref.SpinLock, 0xAu, (enum _NDIS_REFERENCE_STATUS *)&v14) )
    {
      if ( HIBYTE(dword_1C00E7198) )
      {
        v9 = 1;
        ndisTraceDpcStart(v4, 2u);
        Clock = WmiGetClock(0LL, 0LL, v10);
      }
      else
      {
        v9 = 0;
      }
      if ( (DriverHandle->Flags & 2) != 0 )
      {
        KeAcquireSpinLockAtDpcLevel(&v4->TimerQueueLock);
        v11 = &v4->560;
        TimerQueue = v4->TimerQueue;
        if ( TimerQueue )
        {
          while ( TimerQueue != (_NDIS_MINIPORT_TIMER *)DeferredContext )
          {
            v11 = ($D73D6969079A092B7078AF02E356504F *)TimerQueue;
            TimerQueue = *(_NDIS_MINIPORT_TIMER **)&TimerQueue->Timer.Header.Lock;
            if ( !TimerQueue )
              goto LABEL_13;
          }
          if ( !*((_DWORD *)DeferredContext + 23) )
            v11->TimerQueue = *DeferredContext;
        }
LABEL_13:
        KeReleaseSpinLockFromDpcLevel(&v4->TimerQueueLock);
      }
      if ( (v4->PnPFlags & 0x1000000) == 0 )
        ((void (__fastcall *)(_QWORD, _NDIS_MINIPORT_TIMER *, _QWORD, _QWORD))DeferredContext[21])(
          0LL,
          DeferredContext[23],
          0LL,
          0LL);
      if ( v9 )
      {
        v13 = WmiGetClock(0LL, 0LL, v8);
        ndisTraceDpcEnd(v4, 2u, v13 - Clock);
      }
      ndisDereferenceDriver(DriverHandle, 0, 0xAu);
    }
  }
}
