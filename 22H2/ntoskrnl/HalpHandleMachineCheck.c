/*
 * XREFs of HalpHandleMachineCheck @ 0x140502FF0
 * Callers:
 *     HalHandleMcheck @ 0x1405057D0 (HalHandleMcheck.c)
 * Callees:
 *     KxTryToAcquireSpinLock @ 0x14020D904 (KxTryToAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpMceHandler @ 0x140503B14 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x140503DD0 (HalpMceHandlerWithRendezvous.c)
 */

__int64 __fastcall HalpHandleMachineCheck(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  _InterlockedIncrement(&WheapCriticalStateRefCount);
  if ( HalpMceBroadcast )
  {
    for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
    {
      if ( !i )
      {
        result = HalpMceHandlerWithRendezvous(a1);
        goto LABEL_11;
      }
      if ( (((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))HalpWheaReadMsr)(*(_QWORD *)(i + 172), 378LL, 0LL) & 8) != 0 )
        break;
    }
    while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLocalHandlingLock) )
      _mm_pause();
    LOBYTE(v4) = 1;
    HalpMceHandler(a1, v4);
    result = KxReleaseSpinLock(&HalpMceLocalHandlingLock);
  }
  else
  {
    result = HalpMceHandler(a1, 0LL);
  }
LABEL_11:
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  return result;
}
