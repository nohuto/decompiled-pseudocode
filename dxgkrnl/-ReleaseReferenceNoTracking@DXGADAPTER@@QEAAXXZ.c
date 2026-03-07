void __fastcall DXGADAPTER::ReleaseReferenceNoTracking(DXGADAPTER *this)
{
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
}
