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
