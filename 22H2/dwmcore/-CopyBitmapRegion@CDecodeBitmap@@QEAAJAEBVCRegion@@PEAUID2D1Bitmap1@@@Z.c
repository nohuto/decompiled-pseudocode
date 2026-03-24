/*
 * XREFs of ?CopyBitmapRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID2D1Bitmap1@@@Z @ 0x1800F23D4
 * Callers:
 *     ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180263D24 (-SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B7D4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C47D0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800CEEA0 (-GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x18019B718 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 */

__int64 __fastcall CDecodeBitmap::CopyBitmapRegion(
        CDecodeBitmap *this,
        FastRegion::Internal::CRgnData **a2,
        struct ID2D1Bitmap1 *a3)
{
  int D2DBitmapTarget; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // edi
  struct ID2D1Bitmap1 *v17; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-11h]
  int *v21; // [rsp+50h] [rbp-9h]
  __int64 v22; // [rsp+58h] [rbp-1h]
  int v23; // [rsp+60h] [rbp+7h]
  _DWORD v24[4]; // [rsp+70h] [rbp+17h] BYREF

  v17 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v17);
  D2DBitmapTarget = CRenderTargetBitmap::GetD2DBitmapTarget((CDecodeBitmap *)((char *)this + 120), &v17, 0);
  v8 = D2DBitmapTarget;
  if ( D2DBitmapTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DBitmapTarget, 0x78u, 0LL);
  }
  else
  {
    FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v19);
    while ( (unsigned __int64)v21 < v20 )
    {
      v9 = *v21;
      v10 = v21[2];
      v11 = 2 * v23;
      v12 = *(_DWORD *)(v22 + 4 * v11);
      v24[2] = *(_DWORD *)(v22 + 4 * v11 + 4);
      v24[0] = v12;
      v24[1] = v9;
      v24[3] = v10;
      v18[0] = v12;
      v18[1] = v9;
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *, struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v17 + 64LL))(
              v17,
              v18,
              a3,
              v24);
      v15 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v13, 0x8Eu, 0LL);
      if ( !v8 || v8 >= 0 && v15 < 0 )
        v8 = v15;
      FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v19);
    }
    CD2DBitmapCache::AddInvalidRegion(this, (const struct CRegion *)a2);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v17);
  return (unsigned int)v8;
}
