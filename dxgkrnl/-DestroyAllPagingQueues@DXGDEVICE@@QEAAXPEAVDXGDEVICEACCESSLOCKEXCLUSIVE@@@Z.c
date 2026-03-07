void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v5; // r14
  volatile signed __int64 *i; // rbx
  __int64 *v7; // rax
  __int64 *v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  char *v17; // rdx
  struct COREDEVICEACCESS *v18; // r8
  _BYTE v19[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  char v21; // [rsp+60h] [rbp-A0h]
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v26[88]; // [rsp+E8h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2490LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2490LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v5 = (volatile signed __int64 **)((char *)this + 528);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2502LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2502LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = *v5; ; i = (volatile signed __int64 *)*i )
  {
    v7 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v5 )
      v7 = 0LL;
    if ( !v7 )
      break;
    v8 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v5 )
      v8 = 0LL;
    v9 = *((_DWORD *)v8 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
    v10 = (v9 >> 6) & 0xFFFFFF;
    if ( v10 < *((_DWORD *)Current + 74) )
    {
      v11 = *((_QWORD *)Current + 35);
      if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v10 + 8) & 0x60)
        && (*(_DWORD *)(v11 + 16LL * v10 + 8) & 0x2000) == 0 )
      {
        v12 = *(_DWORD *)(v11 + 16LL * v10 + 8) & 0x1F;
        if ( v12 )
        {
          if ( v12 == 10 )
          {
            if ( *(_QWORD *)(v11 + 16LL * v10) )
            {
              if ( i == (volatile signed __int64 *)v5 )
                i = 0LL;
              *(_DWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
              if ( i )
              {
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
                v13 = _InterlockedDecrement64(i + 8);
                if ( v13 >= 0 )
                {
                  if ( !v13 )
                  {
                    v14 = *((_QWORD *)i + 2);
                    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v22,
                      (struct DXGDEVICE *)v14);
                    v15 = *(_QWORD *)(v14 + 16);
                    v21 = 0;
                    v20 = *(_QWORD *)(v15 + 16);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
                    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, v14, 2, v16, 0);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v24, v17);
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 200LL) != 4 )
                      DXGDEVICE::DestroyPagingQueue((DXGDEVICE *)v14, (struct DXGPAGINGQUEUE *)i, v18);
                    COREACCESS::~COREACCESS((COREACCESS *)v26);
                    COREACCESS::~COREACCESS((COREACCESS *)v25);
                    if ( v21 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
                    if ( v22[0] )
                      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v22);
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
                  }
                }
                else
                {
                  WdLogSingleEntry1(1LL, 67LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NewReferenceCount >= 0",
                    67LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
                goto LABEL_5;
              }
              return;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
}
