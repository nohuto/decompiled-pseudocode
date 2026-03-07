__int64 __fastcall CDDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CDDisplayRenderTarget *this,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx

  if ( *((_QWORD *)this + 5) )
  {
    v3 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180383BF8, 2u, -2147467263, 0xE8u, 0LL);
  }
  else
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180383BF8, 2u, -2003304442, 0xECu, 0LL);
  }
  return v3;
}
