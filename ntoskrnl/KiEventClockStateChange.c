/*
 * XREFs of KiEventClockStateChange @ 0x1402A9ADC
 * Callers:
 *     KiSetClockTickRate @ 0x14022AF70 (KiSetClockTickRate.c)
 *     KeClockInterruptNotify @ 0x14022CD80 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 *     KiResumeClockTimer @ 0x14056D878 (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, _QWORD *a3, __int64 *a4)
{
  int v4; // ecx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int128 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v7 = 0LL;
    v6 = 0LL;
    LOBYTE(v6) = a1;
    BYTE1(v6) = a2;
    if ( a1 && (v4 = a1 - 1) != 0 )
    {
      if ( v4 == 1 )
        *((_QWORD *)&v6 + 1) = KiClockTimerNextTickTime;
    }
    else
    {
      *((_QWORD *)&v6 + 1) = *a3;
      v7 = *a4;
    }
    v10 = 0;
    v8 = &v6;
    v9 = 24;
    return EtwTraceKernelEvent((unsigned int)&v8, 1, 1074790400, 3927, 1538);
  }
  return result;
}
