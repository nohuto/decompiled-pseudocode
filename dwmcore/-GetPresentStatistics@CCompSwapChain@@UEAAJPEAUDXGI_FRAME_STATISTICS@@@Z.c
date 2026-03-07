__int64 __fastcall CCompSwapChain::GetPresentStatistics(CCompSwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 10) + 128LL))(
         *((_QWORD *)this + 10),
         a2);
  v6 = v2;
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1803BF728, 3u, v2, 0xB8u, 0LL);
  TranslateDXGIorD3DErrorInContext(v4, 0, &v6);
  return v6;
}
