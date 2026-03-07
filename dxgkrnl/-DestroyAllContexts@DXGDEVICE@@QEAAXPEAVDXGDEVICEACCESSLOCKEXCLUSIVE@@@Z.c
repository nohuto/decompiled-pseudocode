void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
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
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  char *v16; // rdx
  _BYTE v17[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  char v19; // [rsp+68h] [rbp-98h]
  _QWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[64]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v24[88]; // [rsp+E8h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2423LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  v5 = (volatile signed __int64 **)((char *)this + 496);
LABEL_5:
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 2435LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 2435LL, 0LL, 0LL, 0LL, 0LL);
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
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, Current);
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
          if ( v12 == 7 )
          {
            if ( *(_QWORD *)(v11 + 16LL * v10) )
            {
              if ( i == (volatile signed __int64 *)v5 )
                i = 0LL;
              *(_DWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
              if ( i )
              {
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
                if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                {
                  v13 = *((_QWORD *)i + 2);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
                    (struct DXGDEVICE *)v13);
                  v14 = *((_QWORD *)i + 2);
                  v19 = 0;
                  v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
                  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v22, v13, 2, v15, 0);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v22, v16);
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) + 200LL) != 4 )
                    DXGDEVICE::DestroyContext((DXGDEVICE *)v13, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v22);
                  COREACCESS::~COREACCESS((COREACCESS *)v24);
                  COREACCESS::~COREACCESS((COREACCESS *)v23);
                  if ( v19 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
                  if ( v20[0] )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v13 + 16), (struct DXGDEVICE *)v13);
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
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  }
}
