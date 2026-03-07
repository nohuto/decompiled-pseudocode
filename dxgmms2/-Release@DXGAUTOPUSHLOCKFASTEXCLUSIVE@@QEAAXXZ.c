void __fastcall DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release(DXGAUTOPUSHLOCKFASTEXCLUSIVE *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *(_QWORD *)this;
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 8) = 0;
  }
}
