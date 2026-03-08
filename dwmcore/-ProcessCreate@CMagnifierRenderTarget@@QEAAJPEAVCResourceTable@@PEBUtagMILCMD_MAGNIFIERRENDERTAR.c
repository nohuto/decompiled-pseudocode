/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x1801ED2BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _OWORD *v8; // rcx

  *((_QWORD *)this + 230) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 5));
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x52u, 0LL);
  }
  else
  {
    v8 = (_OWORD *)((char *)a3 + 16);
    *((_DWORD *)this + 26) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 27) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *(_OWORD *)((char *)this + 1864) = *v8;
      *(_OWORD *)((char *)this + 1880) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)this + 1896) = *((_OWORD *)a3 + 3);
      *(_OWORD *)((char *)this + 1912) = *((_OWORD *)a3 + 4);
      *(_OWORD *)((char *)this + 1928) = *((_OWORD *)a3 + 5);
      *(_OWORD *)((char *)this + 1944) = *((_OWORD *)a3 + 6);
      *(_OWORD *)((char *)this + 1960) = *((_OWORD *)a3 + 7);
      *(_OWORD *)((char *)this + 1976) = *((_OWORD *)a3 + 8);
      *(_OWORD *)((char *)this + 1992) = *((_OWORD *)a3 + 9);
      *(_OWORD *)((char *)this + 2008) = *((_OWORD *)a3 + 10);
      *(_OWORD *)((char *)this + 2024) = *((_OWORD *)a3 + 11);
      *(_OWORD *)((char *)this + 2040) = *((_OWORD *)a3 + 12);
      *(_OWORD *)((char *)this + 2056) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024809, 0x59u, 0LL);
    }
  }
  return v7;
}
