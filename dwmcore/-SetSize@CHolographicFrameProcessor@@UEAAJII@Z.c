__int64 __fastcall CHolographicFrameProcessor::SetSize(CHolographicFrameProcessor *this, int a2, int a3)
{
  RTL_SRWLOCK *v3; // r9
  unsigned int v4; // ebx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    *((_DWORD *)this + 17) = a2;
    *((_DWORD *)this + 18) = a3;
    CHolographicManager::ResizeWin32kInteropTexture(
      v3,
      (struct IUnknown *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)));
  }
  else
  {
    v4 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0xF8u, 0LL);
  }
  return v4;
}
