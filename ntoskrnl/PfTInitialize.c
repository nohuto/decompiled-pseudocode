/*
 * XREFs of PfTInitialize @ 0x140845B5C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 *     PfpParametersPropagate @ 0x14097D050 (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x140B619EC (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140204750 (KeInitializeGuardedMutex.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeQueryTimeIncrement @ 0x140351FF0 (KeQueryTimeIncrement.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfFbBufferListInitialize @ 0x140845D94 (PfFbBufferListInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A85A48 (PfTAccessTracingInitialize.c)
 */

__int64 __fastcall PfTInitialize(_QWORD *a1, unsigned __int64 *a2, char a3)
{
  struct _FAST_MUTEX *v3; // rdi
  unsigned int v7; // eax
  struct _KEVENT *v8; // rcx

  v3 = (struct _FAST_MUTEX *)(a1 + 70);
  if ( a3 )
  {
    ExAcquireFastMutex(v3);
    ExReleaseFastMutex(v3);
    *((_OWORD *)a1 + 49) = 0LL;
    *((_OWORD *)a1 + 50) = 0LL;
    a1[102] = 0LL;
  }
  else
  {
    memset(a1, 0, 0x340uLL);
    memset(a2 + 1, 0, 0x58uLL);
    *a1 = 0LL;
  }
  *a2 = 0x23C34600uLL / KeQueryTimeIncrement();
  *(_OWORD *)(a1 + 3) = 0LL;
  *(_OWORD *)(a1 + 5) = 0LL;
  a1[7] = 0LL;
  *((_DWORD *)a1 + 6) &= 0xFFFFFFF0;
  a1[7] = a1 + 6;
  a1[6] = a1 + 6;
  *((_WORD *)a1 + 17) = 0;
  a1[5] = 0LL;
  *((_WORD *)a1 + 16) = 2;
  *((_OWORD *)a1 + 4) = 0LL;
  *((_OWORD *)a1 + 5) = 0LL;
  a1[12] = 0LL;
  a1[12] = a1 + 11;
  a1[11] = a1 + 11;
  v7 = a1[8] & 0xFFFFFFF1;
  *((_WORD *)a1 + 37) = 0;
  a1[10] = 0LL;
  *((_DWORD *)a1 + 16) = v7 | 1;
  *((_WORD *)a1 + 36) = 0;
  if ( a3 )
    ExAcquireFastMutex(v3);
  else
    KeInitializeGuardedMutex(v3);
  a1[64] = a1 + 63;
  a1[63] = a1 + 63;
  a1[66] = a1 + 65;
  a1[65] = a1 + 65;
  if ( a3 )
    ExReleaseFastMutex(v3);
  else
    PfTAccessTracingInitialize(a1, a2, 0LL);
  v8 = (struct _KEVENT *)(a1 + 17);
  if ( a3 )
  {
    KeResetEvent(v8);
    KeResetEvent((PRKEVENT)(a1 + 20));
    KeResetEvent((PRKEVENT)(a1 + 14));
    KeResetEvent((PRKEVENT)(a1 + 25));
  }
  else
  {
    KeInitializeEvent(v8, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 20), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 14), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 25), NotificationEvent, 0);
  }
  PfFbBufferListInitialize((PEX_RUNDOWN_REF)a1 + 28);
  InitializeSListHead((PSLIST_HEADER)a1 + 30);
  *((_DWORD *)a1 + 124) = -1;
  return PfFbBufferListInitialize((PEX_RUNDOWN_REF)a1 + 44);
}
