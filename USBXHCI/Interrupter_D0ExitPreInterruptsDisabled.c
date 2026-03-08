/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000F410
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000F310 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     Interrupter_ReleaseEventRingLock @ 0x1C000F4C4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C000F4FC (Interrupter_AcquireEventRingLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rdx
  int v7; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(v3 + 8 * i);
    if ( v4 && *(_QWORD *)(v4 + 200) )
    {
      v5 = Interrupter_AcquireEventRingLock(*(_QWORD *)(v3 + 8 * i));
      *(_DWORD *)(v4 + 96) |= 2u;
      LOBYTE(v6) = v5;
      Interrupter_ReleaseEventRingLock(v4, v6);
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v4 + 176), Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
            v7,
            9,
            35,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            i);
        }
      }
    }
  }
  return 0LL;
}
