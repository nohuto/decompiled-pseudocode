/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C02E1060
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008714 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  struct DXGADAPTER *DxgAdapter; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int128 *v9; // r14
  unsigned int v10; // ecx
  __int128 v12; // [rsp+50h] [rbp-29h] BYREF
  __int128 v13; // [rsp+60h] [rbp-19h]
  __int128 v14; // [rsp+70h] [rbp-9h]
  _BYTE v15[8]; // [rsp+80h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v15);
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v4) + 106) & 0x80) != 0 )
  {
    WdLogSingleEntry1(2LL, 335LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"KMD should not reserve GPU VA for the VM worker process",
      335LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v5 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_BYTE *)Global + 1690)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1684),
           DxgAdapter) )
    {
      v5 = -1073741637;
    }
    else
    {
      v8 = *((_QWORD *)DxgAdapter + 366);
      v9 = a2;
      v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL);
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      if ( v10 <= 0x5003 )
      {
        v9 = &v12;
        LODWORD(v13) = *((_DWORD *)a2 + 4);
        v12 = *a2;
        *(_QWORD *)&v14 = 0LL;
        *((_QWORD *)&v13 + 1) = 0LL;
      }
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)(v8 + 760) + 8LL) + 824LL))(
             *(_QWORD *)(v8 + 768),
             v9);
      *((_QWORD *)a2 + 3) = *((_QWORD *)v9 + 3);
    }
  }
  if ( v15[0] )
    KeUnstackDetachProcess(&ApcState);
  return v5;
}
