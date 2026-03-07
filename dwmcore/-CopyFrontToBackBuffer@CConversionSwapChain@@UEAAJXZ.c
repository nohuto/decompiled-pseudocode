__int64 __fastcall CConversionSwapChain::CopyFrontToBackBuffer(CConversionSwapChain *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdx
  FastRegion::Internal::CRgnData *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-50h]
  _DWORD *v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  int v15; // [rsp+50h] [rbp-38h]
  _DWORD v16[4]; // [rsp+60h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 99);
  if ( !v3 || v3 == 3 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 84),
      (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v16[1] = *v13;
      v16[3] = v13[2];
      v5 = 2 * v15;
      v16[0] = *(_DWORD *)(v14 + 4 * v5);
      v16[2] = *(_DWORD *)(v14 + 4 * v5 + 4);
      CLegacySwapChain::NotifyRenderedRect((__int64)this, (__int64)v16);
      FastRegion::Internal::CRgnData::StepIterator(v6, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  if ( ((*((_DWORD *)this + 99) - 1) & 0xFFFFFFFD) == 0 && *((_BYTE *)this + 776) )
    CLegacySwapChain::NotifyRenderedRect((__int64)this, (__int64)this + 760);
  v7 = CLegacySwapChain::CopyFrontToBackBuffer(this, a2, a3);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x9Eu, 0LL);
  return v9;
}
