/*
 * XREFs of HalpHandleMachineCheck @ 0x140500F10
 * Callers:
 *     HalHandleMcheck @ 0x1405036F0 (HalHandleMcheck.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14036B144 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpMceHandler @ 0x140501A34 (HalpMceHandler.c)
 *     HalpMceHandlerWithRendezvous @ 0x140501CF0 (HalpMceHandlerWithRendezvous.c)
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
