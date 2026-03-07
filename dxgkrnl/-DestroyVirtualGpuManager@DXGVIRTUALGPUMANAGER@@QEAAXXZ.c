void __fastcall DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(DXGVIRTUALGPUMANAGER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // r15
  char *v3; // rbx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 13);
  while ( v2 != (DXGVIRTUALGPUMANAGER *)((char *)this + 104) )
  {
    v3 = (char *)v2 - 120;
    v2 = *(DXGVIRTUALGPUMANAGER **)v2;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
    (**(void (__fastcall ***)(char *, __int64))v3)(v3, 1LL);
  }
  operator delete(*((void **)this + 3));
  *((_QWORD *)this + 6) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
}
