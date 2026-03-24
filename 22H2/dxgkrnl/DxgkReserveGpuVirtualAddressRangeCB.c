/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C0157820
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00034C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013A20 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *DxgAdapter; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int128 *v15; // rsi
  unsigned int v16; // ecx
  unsigned int v17; // edi
  __int64 v19; // rax
  int v20; // eax
  __int128 v21; // [rsp+20h] [rbp-29h] BYREF
  __int128 v22; // [rsp+30h] [rbp-19h]
  __int128 v23; // [rsp+40h] [rbp-9h]
  _BYTE v24[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v24);
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v5, v4, v6, v7) + 347) & 0x10) != 0 )
  {
    v19 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v19 + 24) = 319LL;
    WdLogEvent5_WdError(v19);
    v17 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1, v8);
    Global = DXGGLOBAL::GetGlobal(v12, v11);
    if ( *((_BYTE *)Global + 1554)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1548),
           DxgAdapter) )
    {
      v17 = -1073741637;
    }
    else
    {
      v14 = *((_QWORD *)DxgAdapter + 338);
      v15 = a2;
      v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL);
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      if ( v16 <= 0x5003 )
      {
        v20 = *((_DWORD *)a2 + 4);
        v15 = &v21;
        *(_QWORD *)&v23 = 0LL;
        *((_QWORD *)&v22 + 1) = 0LL;
        LODWORD(v22) = v20;
        v21 = *a2;
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)(v14 + 640) + 8LL) + 832LL))(
              *(_QWORD *)(v14 + 648),
              v15);
      *((_QWORD *)a2 + 3) = *((_QWORD *)v15 + 3);
    }
  }
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  return v17;
}
