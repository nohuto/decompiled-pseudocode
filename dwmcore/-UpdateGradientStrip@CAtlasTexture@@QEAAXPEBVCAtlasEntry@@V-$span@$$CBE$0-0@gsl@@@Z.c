/*
 * XREFs of ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800B76E4
 * Callers:
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180024284 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x1800B74A4 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047D5C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x1800B78E4 (-GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800B795C (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012A6F8 (McTemplateU0qqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CAtlasTexture::UpdateGradientStrip(CAtlasTexture *a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, GUID *, struct ID3D11Resource **); // rsi
  char *v7; // rcx
  int *v8; // rax
  unsigned int v9; // esi
  char *v10; // rcx
  unsigned int v11; // r15d
  LONG v12; // eax
  char *v13; // rcx
  CD3DDevice *v14; // rax
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, _BYTE *); // rbx
  char *v18; // rcx
  _DWORD *v19; // rax
  struct IDeviceTexture *v20; // [rsp+30h] [rbp-69h] BYREF
  struct ID3D11Resource *v21; // [rsp+38h] [rbp-61h] BYREF
  struct tagRECT v22; // [rsp+40h] [rbp-59h] BYREF
  int v23; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v24[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v25[80]; // [rsp+70h] [rbp-29h] BYREF

  v20 = 0LL;
  CAtlasTexture::GetDeviceTexture(a1, &v20);
  v21 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, GUID *, struct ID3D11Resource **))(**(__int64 (__fastcall ***)(struct IDeviceTexture *))v20)(v20);
  if ( v21 )
    ((void (__fastcall *)(struct ID3D11Resource *))v21->lpVtbl->Release)(v21);
  (**v6)(v6, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v21);
  v7 = (char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 12LL) + 8;
  v8 = (int *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v7)(v7, v24);
  v9 = GetPixelFormatSize(*v8) >> 3;
  v10 = (char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, int *))v10)(v10, &v23);
  v11 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 >= v9 * v23 )
    v11 = v9 * v23;
  v12 = *(_DWORD *)(a2 + 16);
  v22.left = 0;
  v22.top = v12;
  v22.bottom = v12 + 1;
  v22.right = v11 / v9;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 12LL) + 8;
    v19 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v18)(v18, v24);
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v11 / v9,
      1,
      *v19,
      v9);
  }
  v13 = (char *)v20 + *(int *)(*((_QWORD *)v20 + 1) + 8LL) + 8;
  v14 = (CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
  CD3DDevice::UpdateSubresource(v14, v21, &v22, *(const void **)(a3 + 8), v11, 1);
  v15 = *((_QWORD *)a1 + 1) + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) + 16LL);
  v16 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v15 + 8) + 32LL);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v25, &v22);
  v16(v15 + 8, v25);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
}
