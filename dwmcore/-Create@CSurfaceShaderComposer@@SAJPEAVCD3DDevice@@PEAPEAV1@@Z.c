__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDevice *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 (__fastcall *v6)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **); // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **); // rbx
  __int64 (__fastcall *v11)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **); // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *, __int64, int, GUID *, _QWORD, struct ID3DDeviceContextState **); // rbx
  void (__fastcall *v13)(__int64, struct ID3DDeviceContextState *, __int64 *); // rbx
  CSurfaceShaderComposer *v14; // rax
  __int64 v15; // rcx
  struct CSurfaceShaderComposer *v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v20; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  struct CCompositingShaderCache *v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+88h] [rbp-78h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  const char *v29; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+BCh] [rbp-44h]
  int v32; // [rsp+C4h] [rbp-3Ch]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  const char *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+DCh] [rbp-24h]
  int v37; // [rsp+E4h] [rbp-1Ch]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  const char *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+104h] [rbp+4h]
  __int64 v43; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 69);
  v3 = *((_QWORD *)a1 + 70);
  v29 = "POSITION";
  v22 = 0LL;
  v34 = "TEXCOORD";
  v39 = "TEXCOORD";
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24[0] = 37632;
  v24[1] = 40960;
  v30 = 0;
  v31 = 16LL;
  v32 = -1;
  v33 = 0LL;
  v35 = 0;
  v36 = 16LL;
  v37 = -1;
  v38 = 0LL;
  v40 = 1;
  v41 = 16LL;
  v42 = -1;
  v43 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  v6 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v7 = v6(v2, &unk_18033AA50, 832LL, 0LL, &v22);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 134;
    goto LABEL_20;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  v10 = *(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  v7 = v10(v2, &v29, 3LL, &unk_18033AA50, 832LL, &v21);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 143;
    goto LABEL_20;
  }
  *(_QWORD *)&v27 = 0x200000090LL;
  *(_QWORD *)&v26 = &unk_18033ADB0;
  *((_QWORD *)&v27 + 1) = 0x1000000000001LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
  v7 = v11(v2, &v27, &v26, &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 156;
    goto LABEL_20;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64, int, GUID *, _QWORD, struct ID3DDeviceContextState **))(*(_QWORD *)v2 + 376LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  v7 = v12(v2, 1LL, v24, 2LL, 7, &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686, 0LL, &v19);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 166;
    goto LABEL_20;
  }
  v13 = *(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v13(v3, v19, &v23);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v21);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, int *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v20,
    &unk_18033AE40,
    &`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v22,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 277));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 278), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v23, 0LL);
  v7 = CCompositingShaderCache::EnsureCache(&v25);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 201;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v18, 0LL);
    goto LABEL_12;
  }
  v14 = (CSurfaceShaderComposer *)DefaultHeap::Alloc(0x70uLL);
  if ( !v14 )
  {
    *a2 = 0LL;
    goto LABEL_14;
  }
  v16 = CSurfaceShaderComposer::CSurfaceShaderComposer(v14, v22, v21, v20, v19, a1, v25);
  *a2 = v16;
  if ( !v16 )
  {
LABEL_14:
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0xD3u, 0LL);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  return v9;
}
