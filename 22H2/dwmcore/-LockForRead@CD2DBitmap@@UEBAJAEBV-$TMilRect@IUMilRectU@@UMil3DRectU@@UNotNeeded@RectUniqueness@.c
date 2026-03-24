/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18003B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180009404 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003A95C (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003A9AC (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18003B75C (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18003BF1C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003C06C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18003C0A8 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180044A20 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180248F6C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // eax
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v10; // r13d
  __int64 v11; // rax
  CBitmapLock *v12; // rax
  unsigned int v13; // ecx
  CBitmapLock *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, CBitmapLock **); // rcx
  const struct PixelFormatInfo *v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 (__fastcall ***v21)(_QWORD, __int64 *); // rcx
  const struct PixelFormatInfo *v22; // rax
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  struct CD3DDevice *v26; // rdi
  struct IBitmapDest *v27; // rbx
  __int64 (__fastcall ***v28)(_QWORD, __int64 *); // rcx
  struct PixelFormatInfo *v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+20h] [rbp-69h]
  struct IBitmapDest *v33; // [rsp+60h] [rbp-29h] BYREF
  void *v34; // [rsp+68h] [rbp-21h] BYREF
  struct IUnknown *v35; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int8 *v36; // [rsp+78h] [rbp-11h] BYREF
  __int64 v37; // [rsp+80h] [rbp-9h] BYREF
  int v38; // [rsp+88h] [rbp-1h]
  int v39; // [rsp+8Ch] [rbp+3h]
  CBitmapLock *v40[2]; // [rsp+90h] [rbp+7h] BYREF

  v38 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v35 = 0LL;
  v37 = 0LL;
  v39 = v4;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v37, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x105u, 0LL);
    goto LABEL_9;
  }
  if ( !CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v36, (unsigned int *)&v34, (unsigned int *)&v33, &v35) )
  {
    v33 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v33);
    v21 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
    v22 = (const struct PixelFormatInfo *)(**v21)(v21, &v37);
    v23 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v22, &v33);
    v19 = v23;
    if ( v23 >= 0 )
    {
      v25 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
      v26 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v27 = v33;
      v28 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
      v29 = (struct PixelFormatInfo *)(**v28)(v28, &v37);
      v30 = CD3DDevice::CopyTexture2D(
              v26,
              *(struct ID3D11Texture2D **)(a1 + 24),
              *(_DWORD *)(a1 + 144),
              v29,
              (__int64)a2,
              (__int64)v27,
              0,
              0);
      v19 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x137u, 0LL);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v33 + 24LL))(
                v33,
                0LL,
                1LL,
                a3);
        v19 = v23;
        if ( v23 < 0 )
        {
          v32 = 316;
LABEL_18:
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, v32, 0LL);
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
      goto LABEL_9;
    }
    v32 = 304;
    goto LABEL_18;
  }
  PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
  v10 = (unsigned int)v34;
  v40[0] = 0LL;
  v11 = *a2 * (PixelFormatSize >> 3) + (int)v34 * a2[1];
  LODWORD(v34) = v11;
  v37 = v11;
  v12 = (CBitmapLock *)DefaultHeap::Alloc(0xA8uLL);
  if ( v12 )
    v12 = CBitmapLock::CBitmapLock(v12);
  wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)v40, (__int64)v12);
  v14 = v40[0];
  if ( v40[0] )
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, CBitmapLock **))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
    v16 = (const struct PixelFormatInfo *)(**v15)(v15, v40);
    v17 = CBitmapLock::HrInit(
            v14,
            (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 96)),
            a2[2] - *a2,
            a2[3] - a2[1],
            v16,
            v10,
            (int)v33 - (int)v34,
            &v36[v37],
            WICBitmapLockRead,
            0,
            v35);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x125u, 0LL);
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else
    {
      *a3 = (char *)v14 + 16;
    }
  }
  else
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x119u, 0LL);
  }
LABEL_9:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v35);
  return v19;
}
