/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00EEC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0045394 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetCurrentThread @ 0x1C004DBF0 (W32GetCurrentThread.c)
 *     HmgAlloc @ 0x1C0052E60 (HmgAlloc.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005A080 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, DC **a2)
{
  struct HOBJ__ *v4; // rax
  struct _W32THREAD *CurrentThread; // rax
  __int64 v6; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v4 = HmgAlloc(2184LL, 1u, 1u);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_WORD *)v4 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
    *(_QWORD *)(*(_QWORD *)this + 2168LL) = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
    *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = *(_QWORD *)this;
    *(_QWORD *)(v6 + 1120) = 0LL;
    *(_QWORD *)(v6 + 1112) = 0LL;
    *(_QWORD *)(v6 + 1120) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*a2, (DC **)this);
  }
  return this;
}
