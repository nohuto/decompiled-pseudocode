/*
 * XREFs of PfTInitialize @ 0x1407BF500
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140709624 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1407C0200 (PfTStart.c)
 *     PfpParametersPropagate @ 0x1408E0B24 (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14024BE00 (KeQueryTimeIncrement.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     InitializeSListHead @ 0x140352660 (InitializeSListHead.c)
 *     KeInitializeGuardedMutex @ 0x1403609E0 (KeInitializeGuardedMutex.c)
 *     memset @ 0x140413800 (memset.c)
 *     PfFbBufferListInitialize @ 0x1407BF73C (PfFbBufferListInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099AAE4 (PfTAccessTracingInitialize.c)
 */

__int64 __fastcall PfTInitialize(_QWORD *a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rdi
  unsigned int v6; // eax
  struct _KEVENT *v7; // rcx

  v3 = (struct _FAST_MUTEX *)(a1 + 70);
  if ( a3 )
  {
    ExAcquireFastMutex(v3);
    KeReleaseGuardedMutex(v3);
    *((_OWORD *)a1 + 49) = 0LL;
    *((_OWORD *)a1 + 50) = 0LL;
    a1[102] = 0LL;
  }
  else
  {
    memset(a1, 0, 0x340uLL);
    memset(&RunRef, 0, 0x58uLL);
    *a1 = 0LL;
  }
  PfKernelGlobals = 0x23C34600uLL / KeQueryTimeIncrement();
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
  v6 = a1[8] & 0xFFFFFFF1;
  *((_WORD *)a1 + 37) = 0;
  a1[10] = 0LL;
  *((_DWORD *)a1 + 16) = v6 | 1;
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
    KeReleaseGuardedMutex(v3);
  else
    PfTAccessTracingInitialize(a1, &PfKernelGlobals, 0LL);
  v7 = (struct _KEVENT *)(a1 + 17);
  if ( a3 )
  {
    KeResetEvent(v7);
    KeResetEvent((PRKEVENT)(a1 + 20));
    KeResetEvent((PRKEVENT)(a1 + 14));
    KeResetEvent((PRKEVENT)(a1 + 25));
  }
  else
  {
    KeInitializeEvent(v7, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 20), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 14), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 25), NotificationEvent, 0);
  }
  PfFbBufferListInitialize(a1 + 28);
  InitializeSListHead((PSLIST_HEADER)a1 + 30);
  *((_DWORD *)a1 + 124) = -1;
  return PfFbBufferListInitialize(a1 + 44);
}
