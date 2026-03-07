__int64 __fastcall DXGDEVICE::MakeAllocationResident(DXGDEVICE *this, unsigned int a2, struct _EX_RUNDOWN_REF *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct DXGPROCESS *Current; // r15
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  struct _EX_RUNDOWN_REF *v13; // rdx
  int Resident; // eax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v21; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v21 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8697LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8697LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v6) = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v9 = *((_QWORD *)Current + 35);
  v10 = 2LL * v8;
  v11 = *(_DWORD *)(v9 + 16LL * v8 + 8);
  if ( ((a2 >> 25) & 0x60) != (v11 & 0x60) )
    goto LABEL_9;
  if ( (v11 & 0x2000) != 0 )
    goto LABEL_9;
  v12 = v11 & 0x1F;
  if ( !v12 )
    goto LABEL_9;
  if ( v12 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v13 = 0LL;
    goto LABEL_10;
  }
  v13 = *(struct _EX_RUNDOWN_REF **)(v9 + 8 * v10);
LABEL_10:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21, v13);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v21 )
  {
    WdLogSingleEntry1(1LL, 8703LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllocRef.m_pAllocation != NULL", 8703LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( DXGDEVICE::UmdManagesResidency(this) && (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4472LL),
                 *((_DWORD *)Current + 126),
                 *((_DWORD *)this + 118),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)&v21,
                 0LL,
                 0LL);
    v6 = Resident;
    if ( Resident < 0 )
    {
      WdLogSingleEntry1(2LL, Resident);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
        v6,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v15 = *((_QWORD *)this + 2);
    v20 = 0LL;
    v18 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 976LL))(
      *((_QWORD *)this + 99),
      0LL,
      &v20,
      &v18);
    v22 = 0LL;
    v19 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 768LL))(
            *(_QWORD *)(v15 + 768),
            v20,
            v21 + 3,
            1LL,
            3,
            &v22,
            &v19);
    LODWORD(v6) = v16;
    if ( v16 >= 0 )
    {
      if ( v16 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 984LL))(
          *(_QWORD *)(v15 + 768),
          &v18,
          &v22,
          1LL);
        LODWORD(v6) = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v16);
    }
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
  return (unsigned int)v6;
}
