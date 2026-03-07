void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY ***a2)
{
  struct DXGOVERLAY **v3; // rcx
  struct DXGOVERLAY **v4; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 4046LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 4046LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *a2;
  if ( (*a2)[1] != (struct DXGOVERLAY *)a2 || (v4 = a2[1], *v4 != (struct DXGOVERLAY *)a2) )
    __fastfail(3u);
  *v4 = (struct DXGOVERLAY *)v3;
  v3[1] = (struct DXGOVERLAY *)v4;
  DXGOVERLAY::`scalar deleting destructor'((DXGOVERLAY *)a2);
}
