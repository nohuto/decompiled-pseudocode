__int64 __fastcall DXGDEVICE::EvictAllAllocations(DXGDEVICE *this)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  __int64 i; // rbx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v8[32]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v10[64]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v11[88]; // [rsp+C8h] [rbp-70h] BYREF

  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2820LL) >= 2000 )
  {
    WdLogSingleEntry1(1LL, 8653LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderAdapter()->GetDriverVersion() < KMT_DRIVERVERSION_WDDM_2_0",
      8653LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_QWORD *)this + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7, this);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v9, (__int64)this, 2, v3, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v9, 0LL) >= 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v8,
      *((struct DXGPROCESS **)this + 5));
    for ( i = *((_QWORD *)this + 6); i; i = *(_QWORD *)(i + 64) )
    {
      v5 = *(_QWORD *)(i + 24);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v2 + 760) + 8LL) + 720LL))(
          *(_QWORD *)(v2 + 768),
          v5,
          0LL,
          0LL);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  }
  else
  {
    LODWORD(i) = -1073741130;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  COREACCESS::~COREACCESS((COREACCESS *)v10);
  if ( v7[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v7);
  return (unsigned int)i;
}
