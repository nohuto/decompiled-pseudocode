struct DXGTERMINATIONTRACKER *__fastcall ADAPTER_RENDER::PopDeferredTracker(ADAPTER_RENDER *this)
{
  char *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx

  v2 = (char *)this + 1312;
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v4 = (_QWORD *)*((_QWORD *)this + 163);
  if ( v4 )
  {
    v3 = v4 - 7;
    *((_QWORD *)this + 163) = *v4;
  }
  else
  {
    *((_BYTE *)this + 1368) = 0;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXGTERMINATIONTRACKER *)v3;
}
