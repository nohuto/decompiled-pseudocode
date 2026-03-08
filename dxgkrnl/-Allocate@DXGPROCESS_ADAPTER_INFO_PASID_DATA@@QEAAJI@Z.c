/*
 * XREFs of ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C01DCEF0
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B6E2C (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  const wchar_t *v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  *((_DWORD *)this + 4) = a2;
  if ( a2 == 1 )
  {
    *((_QWORD *)this + 3) = this;
    if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
      *((_QWORD *)this + 4) = (char *)this + 8;
    return 0LL;
  }
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, 0x4B677844u, 256LL);
  *((_QWORD *)this + 3) = v5;
  if ( v5 )
  {
    if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
      return 0LL;
    v8 = 8LL * *((unsigned int *)this + 4);
    if ( !is_mul_ok(*((unsigned int *)this + 4), 8uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL);
    *((_QWORD *)this + 4) = v9;
    if ( v9 )
      return 0LL;
    v6 = 6471LL;
    WdLogSingleEntry1(6LL, 6471LL);
    v7 = L"Failed to allocate pPasidDevices array";
  }
  else
  {
    v6 = 6463LL;
    WdLogSingleEntry1(6LL, 6463LL);
    v7 = L"Failed to allocate Pasid array";
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
