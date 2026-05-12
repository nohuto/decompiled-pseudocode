/*
 * XREFs of StorReset @ 0x1C003A630
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000F6F0 (StorPortExtendedFunction.c)
 *     RaidAdapterDeviceReset @ 0x1C002C574 (RaidAdapterDeviceReset.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorReset(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-30h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]

  if ( a2 )
    return 3221225474LL;
  v3 = **(_QWORD **)(a1 - 16);
  if ( !v3 )
    return 3221225485LL;
  v6 = 0LL;
  v4[0] = 24LL;
  v4[1] = StorResetCompletion;
  memset(&Event, 0, sizeof(Event));
  v4[2] = v4;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v3 + 5504) + 32LL))(
             *(_QWORD *)(*(_QWORD *)(v3 + 5504) + 8LL),
             0LL,
             0LL,
             0LL);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return (unsigned int)v6;
  }
  return result;
}
