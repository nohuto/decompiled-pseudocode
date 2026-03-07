void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release(DXGDEVICEACCESSLOCKEXCLUSIVECDD *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 136LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 8) = 0;
  }
}
