/*
 * XREFs of PopFxInvokeDripsWatchdogCallback @ 0x140981FD0
 * Callers:
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14099E11C (PopDripsWatchdogInvokeDeviceCallbacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxInvokeDripsWatchdogCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  result = a1;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 168) )
    {
      if ( result == a2
        || (result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 824), 0, 0),
            (result & 8) != 0) )
      {
        result = *(_QWORD *)(v4 + 864);
        v5 = *(_QWORD *)(a2 + 32);
        if ( !result || result == *(_QWORD *)(v5 + 8) )
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v4 + 168))(
                   *(_QWORD *)(v4 + 192),
                   v5,
                   a3,
                   0LL);
      }
    }
  }
  return result;
}
