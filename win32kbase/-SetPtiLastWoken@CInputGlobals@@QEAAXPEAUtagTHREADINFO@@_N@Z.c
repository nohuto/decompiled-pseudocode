void __fastcall CInputGlobals::SetPtiLastWoken(CInputGlobals *this, struct tagTHREADINFO *a2, char a3)
{
  RIMLockExclusive(this);
  *((_QWORD *)this + 11) = a2;
  *((_BYTE *)this + 96) = a3;
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
