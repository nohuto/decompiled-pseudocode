/*
 * XREFs of Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003DF10
 * Callers:
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     Interrupter_ReleaseEventRingLock @ 0x1C000F4C4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C000F4FC (Interrupter_AcquireEventRingLock.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

void __fastcall Interrupter_FlushPendingDpcOrWorkItemPreReset(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  char v5; // al
  __int64 j; // rdi
  _QWORD *v7; // rsi
  int v8; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(v3 + 8 * i);
    if ( v4 )
    {
      v5 = Interrupter_AcquireEventRingLock(*(_QWORD *)(v3 + 8 * i));
      *(_DWORD *)(v4 + 96) |= 0x10u;
      Interrupter_ReleaseEventRingLock(v4, v5);
    }
  }
  KeFlushQueuedDpcs();
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 80); j = (unsigned int)(j + 1) )
  {
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * j);
    if ( v7 && v7[25] )
    {
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject(v7 + 22, Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7[1] + 72LL),
            v8,
            9,
            34,
            (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
            j);
        }
      }
    }
  }
}
