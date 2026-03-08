/*
 * XREFs of ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5264
 * Callers:
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C01B2220 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4968 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall DxgkpExpandStackAndCreateStandardAllocation(
        struct DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        struct COREDEVICEACCESS *a3)
{
  NTSTATUS v6; // eax
  __int64 v8; // rbx
  _QWORD v9[3]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp-10h]

  v9[0] = this;
  v9[1] = a2;
  v9[2] = a3;
  v10 = 0LL;
  v6 = KeExpandKernelStackAndCalloutEx(CreateStandardAllocCallout, v9, 0x6000uLL, 1u, 0LL);
  if ( v6 >= 0 )
    return (unsigned int)v10;
  v8 = v6;
  WdLogSingleEntry1(2LL, v6);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to expand kernel stack: 0x%I64x",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
  return DXGDEVICE::CreateStandardAllocation(this, a2, a3);
}
