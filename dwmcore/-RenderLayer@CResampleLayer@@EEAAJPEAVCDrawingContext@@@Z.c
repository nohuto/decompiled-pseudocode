/*
 * XREFs of ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F2A40
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801E48FC (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F27D4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F2C94 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  _QWORD *v2; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  struct CSurfaceShaderComposer *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // r9d
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned int v14; // edx
  struct ID3D11RenderTargetView *v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // rcx
  char v18; // al
  char *v19; // rcx
  char v20; // r9
  unsigned int v22; // [rsp+20h] [rbp-48h]
  struct D3D11_VIEWPORT v23; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_QWORD *)*((_QWORD *)a2 + 4);
  v5 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
  v7 = *(struct CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5) + 1536);
  v8 = 0LL;
  memset(&v23, 0, sizeof(v23));
  if ( !v7 )
  {
    v9 = -2005270524;
    v22 = 230;
LABEL_3:
    v10 = v9;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v10, v22, 0LL);
    return v9;
  }
  do
  {
    *(&v23.TopLeftX + v8) = (float)*((int *)this + v8 + 36);
    ++v8;
  }
  while ( v8 < 4 );
  LODWORD(v23.MaxDepth) = (_DWORD)FLOAT_1_0;
  v11 = CDrawingContext::FlushD2D(a2);
  v9 = v11;
  if ( v11 < 0 )
  {
    v22 = 241;
    goto LABEL_20;
  }
  if ( g_LockAndReadLayer )
  {
    v12 = *(int *)(v2[1] + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)((char *)v2 + v12 + 8) + 24LL))(
      (__int64)v2 + v12 + 8,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 56LL))(v2);
  v6 = CCommonRegistryData::m_dwResampleModeOverride;
  v14 = *((_DWORD *)this + 30);
  v15 = (struct ID3D11RenderTargetView *)v13;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v14 = CCommonRegistryData::m_dwResampleModeOverride;
  v16 = v14 - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      v9 = -2147024809;
      v22 = 274;
      goto LABEL_3;
    }
    v17 = (__int64)v2 + *(int *)(v2[1] + 8LL) + 8;
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
    v11 = CResampleLayer::RenderXBR(this, v7, v15, v18, &v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      v22 = 270;
LABEL_20:
      v10 = v11;
      goto LABEL_21;
    }
  }
  else
  {
    v19 = (char *)v2 + *(int *)(v2[1] + 8LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v19 + 24LL))(v19);
    v11 = CResampleLayer::RenderLanczos(this, v7, v15, v20, &v23);
    v9 = v11;
    if ( v11 < 0 )
    {
      v22 = 263;
      goto LABEL_20;
    }
  }
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v9;
}
