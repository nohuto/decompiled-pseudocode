/*
 * XREFs of ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18003D378
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x1800085C8 (-GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x18003D1E8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapRealization@@@Z @ 0x180051C50 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapReal.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1802388F8 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        struct IWICBitmapSource **a3)
{
  struct IBitmapRealization **v3; // rsi
  __int64 v5; // r8
  struct IBitmapRealization *v7; // rdx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  struct IWICBitmapSource *v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  CDeviceManager *v15; // rcx
  int DefaultDevice; // eax
  unsigned int v17; // ecx
  struct IBitmapRealization *StockTransparentBitmap; // rax
  CD3DDevice *v19; // rcx
  CD3DDevice *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = a2;
  v3 = (struct IBitmapRealization **)((char *)this + 64);
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v5 )
  {
    v13 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( a3[1] )
  {
    v7 = *v3;
    *v3 = 0LL;
    if ( v7 )
    {
      v14 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v8 = CWICBitmapRealization::Create(a3[1], v3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18u, 0LL);
  }
  else
  {
    v20 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v20);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v15, &v20);
    v10 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, DefaultDevice, 0x1Fu, 0LL);
      v19 = v20;
      if ( !v20 )
        goto LABEL_8;
    }
    else
    {
      StockTransparentBitmap = CD3DDevice::GetStockTransparentBitmap(v20);
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(v3, StockTransparentBitmap);
      if ( !v20 )
        goto LABEL_8;
      v19 = v20;
    }
    CD3DDevice::Release(v19);
  }
LABEL_8:
  v11 = a3[1];
  if ( v11 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v11->lpVtbl->Release)(v11);
  (*(void (__fastcall **)(CBitmapResource *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v10;
}
