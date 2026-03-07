void __fastcall DXGVIRTUALMACHINE::SetVailObject(DXGVIRTUALMACHINE *this, struct DXGVAILOBJECT *a2)
{
  DxgkCompositionObject *v4; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (DxgkCompositionObject *)*((_QWORD *)this + 41);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DxgkCompositionObject::Release(v4);
      *((_QWORD *)this + 41) = 0LL;
    }
    if ( a2 )
    {
      DxgkCompositionObject::AddRef(a2);
      *((_QWORD *)this + 41) = a2;
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
