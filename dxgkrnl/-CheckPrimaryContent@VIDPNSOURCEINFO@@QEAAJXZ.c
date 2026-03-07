__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this)
{
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  __int64 Count; // rsi
  int v11; // ebp
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+58h] [rbp-30h]
  _QWORD v14[2]; // [rsp+60h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent((__int64)this) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v14,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((_DWORD *)this + 2));
    v9 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v9[1].Count;
      v12 = Count;
      v13 = 0;
      if ( Count != *(_QWORD *)this )
      {
        v11 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v11 >= 0xA )
          {
            v5 = -2147483631;
            WdLogSingleEntry1(2LL, Count);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device access lock for rendering device (0x%I64x) couldn't acquired within reasonable time",
              Count,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_13;
          }
        }
      }
      v5 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v9);
LABEL_13:
      ExReleaseRundownProtection(v9 + 11);
      if ( v12 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v12);
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 2), *((int *)this + 5), *((int *)this + 5));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There is no primary allocation for VidPnSource (0x%I64x) on Adapter with LUID (0x%I64x : 0x%I64x)",
        *((unsigned int *)this + 2),
        *((int *)this + 5),
        *((int *)this + 5),
        0LL,
        0LL);
      v5 = -1071775482;
    }
    if ( v14[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v7,
      0LL,
      0LL,
      0LL);
  }
  return v5;
}
