__int64 __fastcall CCompSwapChain::Present(CCompSwapChain *this, unsigned int a2, unsigned int a3)
{
  char v4; // si
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  DXGI_PRESENT_PARAMETERS v16; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-79h] BYREF
  int v18; // [rsp+60h] [rbp-69h]
  int v19; // [rsp+64h] [rbp-65h]
  UINT v20; // [rsp+68h] [rbp-61h]
  char v21[128]; // [rsp+70h] [rbp-59h] BYREF
  const void *retaddr; // [rsp+128h] [rbp+5Fh]

  v20 = 0;
  v17[0] = v21;
  v4 = a3;
  v17[1] = v21;
  v18 = 8;
  v19 = 8;
  memset(&v16, 0, sizeof(v16));
  `vector constructor iterator'(
    v21,
    16LL,
    8LL,
    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  v7 = v4 & 2;
  if ( !v7 )
  {
    v8 = CCompSwapChain::CopyFrontToBackBuffer(this);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1803B6DB8, 2u, v8, 0x13Du, 0LL);
      goto LABEL_15;
    }
    if ( **((_DWORD **)this + 21) )
    {
      v20 = 0;
      CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,8,0>>(
        (int **)this + 21,
        (__int64)v17);
      v16.DirtyRectsCount = v20;
      v16.pDirtyRects = (RECT *)v17[0];
    }
  }
  v11 = CD3DDevice::Present(*((CD3DDevice **)this + 9), *((struct IDXGISwapChain1 **)this + 10), a2, a3, &v16);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1803B6DB8, 2u, v11, 0x14Cu, 0LL);
  }
  else if ( !v7 )
  {
    if ( *((_DWORD *)this + 40) == 3 )
    {
      v13 = FastRegion::CRegion::Copy((int **)this + 39, (int **)this + 30);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT(v13, retaddr);
    }
    v14 = FastRegion::CRegion::Copy((int **)this + 30, (int **)this + 21);
    if ( v14 < 0 )
      ModuleFailFastForHRESULT(v14, retaddr);
    **((_DWORD **)this + 21) = 0;
  }
LABEL_15:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v17);
  return v10;
}
