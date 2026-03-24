/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C013C550
 * Callers:
 *     <none>
 * Callees:
 *     HmgAlloc @ 0x1C0001410 (HmgAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00742F4 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007FDD8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020005C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  struct HOBJ__ *v4; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  _QWORD *v6; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(0x868uLL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(*(_QWORD *)this + 2136LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = *(_QWORD **)this;
    v6[140] = 0LL;
    v6[141] = 0LL;
    v6[139] = &CPushLock::`vftable';
    *(_QWORD *)(*(_QWORD *)this + 1144LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*a2, (DC **)this);
  }
  return this;
}
