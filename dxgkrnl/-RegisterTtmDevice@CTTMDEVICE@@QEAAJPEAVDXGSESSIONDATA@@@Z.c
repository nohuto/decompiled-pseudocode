__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  char v4; // bl
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdi
  struct DXGSESSIONDATA **v10; // rdx
  struct DXGSESSIONDATA *v11; // rax
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  v12[1] = 0LL;
  v12[3] = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 344LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 5952LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->GetSessionMgr()->IsTtmDeviceListLockOwner()",
      5952LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v4 = *((_BYTE *)this + 912);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    WdLogSingleEntry2(4LL, this, -1073741130LL);
    return 3221226166LL;
  }
  else
  {
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
    *((_DWORD *)this + 2 * v6 + 157) = 0x40000000;
    v12[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)v6 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v7 = *((unsigned int *)this + 21);
    v12[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v8 = TtmNotifyDeviceArrival(1LL, this, v12, v7, (char *)this + 608);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2327);
      v11 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v10 != (struct DXGSESSIONDATA *)((char *)a2 + 18608) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)a2 + 18608;
      *((_QWORD *)this + 3) = v10;
      *v10 = v11;
      *((_QWORD *)a2 + 2327) = v11;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 20), *((_QWORD *)this + 8), v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to report TTM device for target 0x%I64x on adapter 0x%I64x (Status = 0x%I64x).",
        *((unsigned int *)this + 20),
        *((_QWORD *)this + 8),
        v9,
        0LL,
        0LL);
    }
    return (unsigned int)v9;
  }
}
