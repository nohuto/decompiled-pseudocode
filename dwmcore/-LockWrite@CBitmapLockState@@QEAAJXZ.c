__int64 __fastcall CBitmapLockState::LockWrite(CBitmapLockState *this)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this, 0x80000000, 0) )
  {
    v1 = -2003292403;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292403, 0x58u, 0LL);
  }
  return v1;
}
