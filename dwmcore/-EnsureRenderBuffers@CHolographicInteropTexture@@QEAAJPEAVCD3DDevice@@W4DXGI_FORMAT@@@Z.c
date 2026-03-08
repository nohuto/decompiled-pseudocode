/*
 * XREFs of ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802A74D0
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A6564 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18003CD3C (-CreateTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D1.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180091250 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x180289A80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_.c)
 *     ?PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A24DC (-PostInteropTextureInitialize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A2528 (-PostInteropTextureResize@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ??$As@UIDXGIResource1@@@?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDXGIResource1@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A68EC (--$As@UIDXGIResource1@@@-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802A7F3C (-ReleaseResources@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::EnsureRenderBuffers(
        RTL_SRWLOCK *this,
        struct CD3DDevice *a2,
        enum DXGI_FORMAT a3)
{
  unsigned int v3; // r12d
  CD3DDevice *v4; // r13
  char *v6; // rsi
  __int64 Ptr_high; // rcx
  unsigned int Ptr; // eax
  char v9; // r15
  unsigned int v10; // r14d
  char *v11; // rax
  struct D3D11_SUBRESOURCE_DATA *v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct IRenderTargetBitmap **v19; // r8
  int v20; // r9d
  int v21; // xmm0_4
  _DWORD *v22; // rax
  int v23; // ecx
  int RenderTargetBitmap; // eax
  __int64 v25; // rcx
  struct CHolographicInteropTexture *v26; // rdx
  CHolographicInteropTaskQueue **v27; // rcx
  struct ID3D11Texture2D *v29; // [rsp+40h] [rbp-59h] BYREF
  enum DXGI_FORMAT v30; // [rsp+48h] [rbp-51h]
  __int64 v31; // [rsp+50h] [rbp-49h] BYREF
  struct CD3DDevice *v32; // [rsp+58h] [rbp-41h]
  __int128 v33; // [rsp+60h] [rbp-39h]
  _DWORD v34[5]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35; // [rsp+84h] [rbp-15h]
  int v36; // [rsp+8Ch] [rbp-Dh]
  __int64 v37; // [rsp+90h] [rbp-9h]
  int v38; // [rsp+98h] [rbp-1h]
  __int128 v39; // [rsp+A0h] [rbp+7h]

  v3 = 0;
  v30 = a3;
  v4 = a2;
  v32 = a2;
  v29 = 0LL;
  v31 = 0LL;
  if ( !LOBYTE(this[29].Ptr) )
  {
    LODWORD(v6) = -2147024875;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024875, 0x223u, 0LL);
LABEL_37:
    CHolographicInteropTexture::ReleaseResources((CHolographicInteropTexture *)this);
    goto LABEL_38;
  }
  LODWORD(v6) = 0;
  if ( !BYTE1(this[30].Ptr) )
  {
    Ptr_high = HIDWORD(this[31].Ptr);
    if ( (unsigned int)(Ptr_high - 1) > 0x3FFF || (Ptr = (unsigned int)this[32].Ptr) == 0 || Ptr > 0x4000 )
    {
      LODWORD(v6) = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(Ptr_high, 0LL, 0, -2147024809, 0x22Eu, 0LL);
      goto LABEL_37;
    }
    v9 = 1;
    v34[0] = Ptr_high;
    DWORD2(v33) = 27;
    *(_QWORD *)&v33 = "Holographic Interop texture";
    v34[1] = Ptr;
    v34[2] = 1;
    v39 = v33;
    v34[3] = 1;
    v34[4] = a3;
    v35 = 1LL;
    v36 = 0;
    v37 = 40LL;
    v38 = 2050;
    AcquireSRWLockExclusive(this + 51);
    v10 = 0;
    if ( LODWORD(this[31].Ptr) )
    {
      while ( 2 )
      {
        v11 = (char *)operator new(0x68uLL);
        if ( v11 )
        {
          v6 = v11 + 8;
          *(_QWORD *)v11 = 1LL;
          `vector constructor iterator'(
            v11 + 8,
            96LL,
            1LL,
            (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::RenderBuffer);
        }
        else
        {
          v6 = 0LL;
        }
        v9 = v10;
        if ( v10 >= 2uLL )
        {
          std::_Xout_of_range("invalid array<T, N> subscript");
          __debugbreak();
          goto LABEL_33;
        }
        this[v10 + 26].Ptr = v6;
        HIDWORD(this[30].Ptr) = 1;
        do
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
          v13 = CD3DDevice::CreateTexture(v4, (const struct DWM_TEXTURE2D_DESC *)v34, v12, &v29);
          LODWORD(v6) = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x24Eu, 0LL);
            goto LABEL_31;
          }
          v15 = Microsoft::WRL::ComPtr<ID3D11Texture2D>::As<IDXGIResource1>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v29,
                  &v31);
          LODWORD(v6) = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x250u, 0LL);
            goto LABEL_31;
          }
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v31 + 104LL))(
                  v31,
                  0LL,
                  0x80000000LL,
                  0LL,
                  (__int64)this[v10 + 26].Ptr + 96 * v3 + 8);
          LODWORD(v6) = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x256u, 0LL);
            goto LABEL_31;
          }
          if ( IsDXGIColorSpaceHDR(v30 == DXGI_FORMAT_R16G16B16A16_FLOAT) )
            v21 = (int)FLOAT_1_0;
          else
            v21 = 0;
          v22 = this[11].Ptr;
          if ( *((_QWORD *)v22 + 5) )
            v23 = v22[16];
          else
            v23 = DisplayId::Hmd;
          v4 = v32;
          RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap((__int64)v32, (__int64)v29, 1, v20, v23, v21, v19);
          LODWORD(v6) = RenderTargetBitmap;
          if ( RenderTargetBitmap < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, RenderTargetBitmap, 0x260u, 0LL);
LABEL_31:
            ReleaseSRWLockExclusive(this + 51);
            goto LABEL_37;
          }
          ++v3;
        }
        while ( v3 < HIDWORD(this[30].Ptr) );
        v9 = 1;
        ++v10;
        v3 = 0;
        if ( v10 < LODWORD(this[31].Ptr) )
          continue;
        break;
      }
    }
    ReleaseSRWLockExclusive(this + 51);
    v26 = (struct CHolographicInteropTexture *)this;
    v27 = (CHolographicInteropTaskQueue **)this[11].Ptr;
    if ( BYTE2(this[30].Ptr) )
    {
      CHolographicManager::PostInteropTextureResize(v27, (struct CHolographicInteropTexture *)this);
      goto LABEL_34;
    }
LABEL_33:
    BYTE2(this[30].Ptr) = v9;
    CHolographicManager::PostInteropTextureInitialize(v27, v26);
LABEL_34:
    BYTE1(this[30].Ptr) = v9;
    if ( (int)v6 < 0 )
      goto LABEL_37;
  }
LABEL_38:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  return (unsigned int)v6;
}
