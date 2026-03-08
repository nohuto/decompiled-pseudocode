/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C00484D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0pj_EtwWriteTransfer @ 0x1C003FC2C (McTemplateK0pj_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 DxgAdapter; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  _BYTE v20[8]; // [rsp+60h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
  DxgAdapter = DpiGetDxgAdapter(a1);
  v14 = DxgAdapter;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pj_EtwWriteTransfer(v12, &Dxgk_PowerRuntimeControlRequestCB, v13, DxgAdapter, a2);
  if ( v14 && *(_BYTE *)(v14 + 3465) )
  {
    v15 = PoFxPowerControl(*(_QWORD *)(v14 + 3032), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    WdLogSingleEntry1(2LL, 506LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v17,
        v16,
        v18,
        0LL,
        0,
        -1,
        L"DxgkPowerRuntimeControlRequestCB is called when runtime power management is not enabled.",
        506LL,
        0LL,
        0LL,
        0LL,
        0LL);
    v15 = -1073741823;
  }
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  return v15;
}
