__int64 __fastcall CVisualCapture::EnsureRenderTargets(CVisualCapture *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  CCompositionSurfaceBitmap *v4; // rcx
  struct IBitmapRealization *v5; // rdi
  char *v6; // rcx
  const struct PixelFormatInfo *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // ebx
  struct IBitmapRealization *v13; // rcx
  unsigned int v14; // esi
  struct IBitmapRealization *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD *); // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // edi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h] BYREF
  struct IBitmapRealization *v33; // [rsp+58h] [rbp-9h] BYREF
  struct _LUID v34; // [rsp+60h] [rbp-1h] BYREF
  int v35; // [rsp+68h] [rbp+7h]
  int v36; // [rsp+6Ch] [rbp+Bh]
  float v37; // [rsp+70h] [rbp+Fh]
  char v38; // [rsp+74h] [rbp+13h]
  _QWORD v39[2]; // [rsp+78h] [rbp+17h] BYREF
  char v40[16]; // [rsp+88h] [rbp+27h] BYREF

  v2 = -2003292412;
  v3 = *((_QWORD *)this + 235);
  if ( v3 )
  {
    v33 = 0LL;
    if ( (int)CCompositionSurfaceBitmap::GetCurrentRenderingRealization((CCompositionSurfaceBitmap *)(v3 + 72), &v33) < 0 )
    {
LABEL_16:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
      return v2;
    }
    v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 235);
    v32 = 0LL;
    v31 = 0LL;
    CCompositionSurfaceBitmap::GetAdapterLuid(v4, &v34);
    v36 = 0;
    v5 = v33;
    v35 = DisplayId::All;
    v6 = (char *)v33 + *(int *)(*((_QWORD *)v33 + 1) + 8LL) + 8;
    v7 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v6)(v6, v39);
    v37 = ValidateSDRBoost(*((float *)this + 474), v7);
    v38 = 0;
    v8 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, struct _LUID *, __int64 *))(*(_QWORD *)v5 + 48LL))(
           v5,
           &v34,
           &v32);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1803B5820, 3u, v8, 0x43u, 0LL);
      goto LABEL_15;
    }
    v10 = *(int *)(*(_QWORD *)(v32 + 8) + 8LL) + v32 + 8;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v31);
    v12 = DisplayId::All;
    v13 = (struct IBitmapRealization *)((char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 8LL) + 8);
    v14 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct IBitmapRealization *, _QWORD *))v13)(v13, v39) + 8);
    v15 = (struct IBitmapRealization *)((char *)v5 + *(int *)(*((_QWORD *)v5 + 1) + 8LL) + 8);
    v16 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct IBitmapRealization *, char *))v15)(v15, v40) + 4);
    v17 = (**(__int64 (__fastcall ***)(__int64))v32)(v32);
    v18 = CD3DDevice::CreateRenderTargetBitmap(v11, v17, v16, v14, v12, LODWORD(v37), &v31);
    v2 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1803B5820, 3u, v18, 0x4Au, 0LL);
      goto LABEL_15;
    }
    v20 = v31;
    v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(v31 + *(int *)(*(_QWORD *)(v31 + 8) + 16LL) + 8LL);
    v22 = (__int64 *)(**v21)(v21, v39);
    v31 = 0LL;
    v23 = *v22;
    *((_QWORD *)this + 13) = *v22;
    v24 = *((unsigned int *)this + 446);
    v39[0] = v20;
    v25 = v24 + 1;
    if ( (int)v24 + 1 < (unsigned int)v24 )
    {
      v2 = -2147024362;
      v26 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1803B5820, 3u, v26, 0x4Fu, 0LL);
      goto LABEL_15;
    }
    v26 = 0;
    if ( v25 > *((_DWORD *)this + 445) )
    {
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1760, 8, 1, v39);
      v26 = v28;
      v2 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xC0u, 0LL);
        goto LABEL_12;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 220) + 8 * v24) = v20;
      *((_DWORD *)this + 446) = v25;
    }
    v2 = v26;
LABEL_15:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v32);
    goto LABEL_16;
  }
  return v2;
}
