void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Release(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 136LL));
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 2) = 0;
  }
}
