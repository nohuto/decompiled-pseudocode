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
