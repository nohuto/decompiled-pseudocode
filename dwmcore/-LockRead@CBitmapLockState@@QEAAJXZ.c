__int64 __fastcall CBitmapLockState::LockRead(CBitmapLockState *this)
{
  unsigned int v1; // ebx
  signed __int32 v2; // eax

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD *)this & 0x7FFFFFFF;
    if ( v2 + 1 < 0 )
      break;
    if ( v2 == _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) )
      return v1;
  }
  v1 = -2003292403;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292403, 0x3Au, 0LL);
  return v1;
}
