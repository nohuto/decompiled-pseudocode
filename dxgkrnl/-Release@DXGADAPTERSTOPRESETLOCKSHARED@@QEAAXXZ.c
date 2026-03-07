void __fastcall DXGADAPTERSTOPRESETLOCKSHARED::Release(DXGADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    v2 = *((_QWORD *)this + 1) + 136LL;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 16));
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v3 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v3 + 16), (struct DXGADAPTER *)v3);
  }
}
