void __fastcall DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(DXGVIRTUALGPUMANAGER *this, struct DXGPROCESS *a2)
{
  char *v2; // rdi
  _QWORD **v4; // rsi
  _QWORD *v5; // rbx
  struct DXGPROCESS **v6; // rcx

  v2 = (char *)this + 40;
  v4 = (_QWORD **)((char *)this + 104);
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = (struct DXGPROCESS **)(v5 - 15);
    v5 = (_QWORD *)*v5;
    if ( v6[11] == a2 )
      (*((void (__fastcall **)(struct DXGPROCESS **))*v6 + 1))(v6);
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
