void __fastcall DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( *((_DWORD *)this + 2) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 160));
    ExReleasePushLockSharedEx(v1 + 144, 0LL);
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 136));
  }
  KeLeaveCriticalRegion();
}
