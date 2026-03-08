/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A7C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5320 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ??4?$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z @ 0x1800A7DCC (--4-$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800A7E6C (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800A803C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8170 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x1800A82B8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18029C1D0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, CBitmapLock **a3)
{
  int v4; // eax
  __int64 v7; // rdx
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
  char *v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, __int64 *); // rcx
  const struct PixelFormatInfo *v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  struct CD3DDevice *v27; // rdi
  struct IBitmapDest *v28; // rbx
  __int64 (__fastcall ***v29)(_QWORD, __int64 *); // rcx
  const struct PixelFormatInfo *v30; // rax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  struct IBitmapDest *v35; // [rsp+60h] [rbp-29h] BYREF
  void *v36; // [rsp+68h] [rbp-21h] BYREF
  struct IUnknown *v37; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int8 *v38; // [rsp+78h] [rbp-11h] BYREF
  __int64 v39; // [rsp+80h] [rbp-9h] BYREF
  int v40; // [rsp+88h] [rbp-1h]
  int v41; // [rsp+8Ch] [rbp+3h]
  CBitmapLock *v42[2]; // [rsp+90h] [rbp+7h] BYREF

  v40 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v37 = 0LL;
  v39 = 0LL;
  v41 = v4;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(&v39)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x105u, 0LL);
    goto LABEL_9;
  }
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v38, (unsigned int *)&v36, (unsigned int *)&v35, &v37) )
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
    v10 = (unsigned int)v36;
    v42[0] = 0LL;
    v11 = *a2 * (PixelFormatSize >> 3) + a2[1] * (int)v36;
    LODWORD(v36) = v11;
    v39 = v11;
    v12 = (CBitmapLock *)DefaultHeap::Alloc(0xA0uLL);
    if ( v12 )
      v12 = CBitmapLock::CBitmapLock(v12);
    wil::com_ptr_t<CBitmapLock,wil::err_returncode_policy>::operator=(v42, v12);
    v14 = v42[0];
    if ( v42[0] )
    {
      v15 = (__int64 (__fastcall ***)(_QWORD, CBitmapLock **))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
      v16 = (const struct PixelFormatInfo *)(**v15)(v15, v42);
      v17 = CBitmapLock::HrInit(
              v14,
              (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 96)),
              a2[2] - *a2,
              a2[3] - a2[1],
              v16,
              v10,
              (int)v35 - (int)v36,
              &v38[v39],
              WICBitmapLockRead,
              0,
              v37);
      v19 = v17;
      if ( v17 >= 0 )
      {
        *a3 = v14;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x125u, 0LL);
    }
    else
    {
      v19 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x119u, 0LL);
    }
    if ( v14 )
    {
      v21 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    v35 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v35);
    v22 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
    v23 = (const struct PixelFormatInfo *)(**v22)(v22, &v39);
    v24 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v23, &v35);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x130u, 0LL);
    }
    else
    {
      v26 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
      v27 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
      v28 = v35;
      v29 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
      v30 = (const struct PixelFormatInfo *)(**v29)(v29, &v39);
      v31 = CD3DDevice::CopyTexture2D(
              v27,
              *(struct ID3D11Texture2D **)(a1 + 24),
              *(_DWORD *)(a1 + 144),
              v30,
              a2,
              (__int64)v28,
              0,
              0);
      v19 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x137u, 0LL);
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, CBitmapLock **))(*(_QWORD *)v35 + 24LL))(
                v35,
                0LL,
                1LL,
                a3);
        v19 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x13Cu, 0LL);
      }
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v35);
  }
LABEL_9:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v37);
  return v19;
}
