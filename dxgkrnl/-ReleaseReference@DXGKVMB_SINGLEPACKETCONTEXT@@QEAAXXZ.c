void __fastcall DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(DXGKVMB_SINGLEPACKETCONTEXT *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0x42677844u);
}
