/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00AFF94
 * Callers:
 *     GdiProcessCallout @ 0x1C006FD60 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00B0000 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z @ 0x1C00B0034 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@2@@Z @ 0x1C0188350 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@AEAAJPEAVCOPMProtec.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0188900 (-GetElement@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z @ 0x1C0188B1C (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@OPM@@QEAAEKPEAK@Z.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  char i; // al
  struct _KMUTANT *v5; // rcx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  OPM::CMutex::Lock((COPM *)((char *)this + 56));
  v6 = 0;
  for ( i = OPM::CList<COPMProtectedOutput>::GetFirstElementIndex((char *)this + 24, &v6);
        i;
        i = OPM::CList<COPMProtectedOutput>::GetNextElementIndex((char *)this + 24, v6, &v6) )
  {
    v7 = 0LL;
    OPM::CList<COPMProtectedOutput>::GetElement((char *)this + 24, v6, &v7);
    if ( a2 == *(void **)(v7 + 56) )
      OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        (char *)this + 24,
        v7,
        v6,
        (char *)this + 48);
  }
  v5 = (struct _KMUTANT *)*((_QWORD *)this + 7);
  if ( v5 )
    KeReleaseMutex(v5, 0);
}
