/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x18002BAB0
 * Callers:
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002B990 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800510A0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18023F3E8 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 * Callees:
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x18002BBB8 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x18002BC68 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ??0CD3DPixelShader@@IEAA@XZ @ 0x18002BCD0 (--0CD3DPixelShader@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDevice *this,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DPixelShader *v8; // rax
  unsigned int v9; // ecx
  CD3DPixelShader *v10; // rbx
  struct ID3D11ClassLinkage *v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned int v16; // [rsp+20h] [rbp-28h]
  struct ID3D11PixelShader *v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(this, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DPixelShader *)operator new(0x90uLL);
  if ( v8 )
    v10 = CD3DPixelShader::CD3DPixelShader(v8);
  else
    v10 = 0LL;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CD3DPixelShader *))v10)(v10);
    v12 = CD3DDevice::CreatePixelShader(this, a2, a3, v11, &v17);
    v14 = v12;
    if ( v12 < 0 )
    {
      v16 = 45;
    }
    else
    {
      v12 = CD3DPixelShader::Initialize(v10, (struct CD3DDevice *)((char *)this + 1136), a3, v17);
      v14 = v12;
      if ( v12 >= 0 )
      {
        *a4 = v10;
        v10 = 0LL;
        goto LABEL_9;
      }
      v16 = 47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v16, 0LL);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v17 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v17->lpVtbl->Release)(v17);
  if ( v10 )
    (*(void (__fastcall **)(CD3DPixelShader *))(*(_QWORD *)v10 + 8LL))(v10);
  return v14;
}
