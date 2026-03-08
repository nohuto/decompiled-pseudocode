/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800CFFE0
 * Callers:
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800CFF5C (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD3DPixelShader@@IEAA@XZ @ 0x1800D0114 (--0CD3DPixelShader@@IEAA@XZ.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800D0528 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ??$SetInterface@UID3D11PixelShader@@U1@@@YAXAEAPEAUID3D11PixelShader@@PEAU0@@Z @ 0x1800D059C (--$SetInterface@UID3D11PixelShader@@U1@@@YAXAEAPEAUID3D11PixelShader@@PEAU0@@Z.c)
 *     ?RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z @ 0x1800F1D0C (-RegisterResource@CD3DResourceManager@@QEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDevice *this,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DPixelShader *v8; // rax
  __int64 v9; // rcx
  CD3DPixelShader *v10; // rax
  CD3DPixelShader *v11; // rdi
  __int64 v12; // rcx
  struct ID3D11ClassLinkage *v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  struct ID3D11PixelShader *v17; // rbx
  char *v19; // rcx
  struct ID3D11PixelShader *v20; // [rsp+30h] [rbp-18h] BYREF

  v20 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 1LL);
  v8 = (CD3DPixelShader *)operator new(0x80uLL);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_16;
  }
  v10 = CD3DPixelShader::CD3DPixelShader(v8);
  v11 = v10;
  if ( !v10 )
  {
LABEL_16:
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x25u, 0LL);
    goto LABEL_7;
  }
  v12 = (__int64)v10 + *(int *)(*((_QWORD *)v10 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v14 = CD3DDevice::CreatePixelShader(this, a2, a3, v13, &v20);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2Du, 0LL);
  }
  else
  {
    v17 = v20;
    *((_QWORD *)v11 + 3) = (char *)this + 1104;
    *((_DWORD *)v11 + 16) = a3;
    *((_BYTE *)v11 + 70) = 1;
    CD3DResourceManager::RegisterResource((struct CD3DDevice *)((char *)this + 1104), v11);
    SetInterface<ID3D11PixelShader,ID3D11PixelShader>((char *)v11 + 96, v17);
    v16 = 0;
    *a4 = v11;
    v11 = 0LL;
  }
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 1LL);
  if ( v20 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v20->lpVtbl->Release)(v20);
  if ( v11 )
  {
    v19 = (char *)v11 + *(int *)(*((_QWORD *)v11 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v16;
}
