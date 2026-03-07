__int64 __fastcall DXGDEVICE::CreateStagingSurface2(
        DXGDEVICE *this,
        struct _D3DKMDT_STAGINGSURFACEDATA *a2,
        struct COREDEVICEACCESS *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  char v9; // al
  __int64 result; // rax
  struct COREDEVICEACCESS *v11; // r8
  int AllocationResident; // edi
  _QWORD v13[54]; // [rsp+50h] [rbp-B0h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8786LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8786LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v13, 0, 0x1A8uLL);
  *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = v13[51];
  HIDWORD(v13[0]) = 0;
  LODWORD(v13[2]) = 3;
  v13[3] = a2;
  if ( !a5 )
    v9 = 1;
  LOBYTE(v13[51]) = v9;
  result = DXGDEVICE::CreateStandardAllocation(this, (struct _D3DKM_CREATESTANDARDALLOCATION *)v13, a3);
  if ( (int)result >= 0 )
  {
    AllocationResident = DXGDEVICE::MakeAllocationResident(this, HIDWORD(v13[6]), v11);
    if ( AllocationResident >= 0 )
    {
      *a4 = HIDWORD(v13[6]);
      if ( a5 )
        *a5 = v13[1];
    }
    else
    {
      DXGDEVICE::DestroyStagingSurface(this, HIDWORD(v13[6]), v13[1], a3);
    }
    return (unsigned int)AllocationResident;
  }
  return result;
}
