char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edx
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rax
  __int64 v13; // r9
  char *v14; // rcx
  unsigned int v15; // r8d
  struct tagRECT v16; // xmm1
  unsigned int v17; // edx
  int v18; // eax
  char *v19; // rcx
  UINT v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v23; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v24; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v25; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-78h]
  char v29; // [rsp+98h] [rbp-70h]
  _BYTE v30[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v31[8]; // [rsp+B0h] [rbp-58h] BYREF
  DXGPUSHLOCK *v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C0h] [rbp-48h]
  struct tagRECT v34; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v35; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v36[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v37[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v38[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v32);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v33 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
      v7 = 16LL * *(unsigned int *)(v4 + 72);
      if ( v7 > 0xFFFFFFFF
        || (v8 = (unsigned int)(v7 + 80), (unsigned int)v7 >= 0xFFFFFFB0)
        || (v9 = v8 + *(_DWORD *)(v5 + 76), v9 < (unsigned int)v8)
        || v9 > *((_DWORD *)a1 + 36) )
      {
        LODWORD(v22) = -1073741811;
      }
      else
      {
        v24 = 0LL;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, *(_DWORD *)(v5 + 24), Current, &v24);
        if ( v24 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v24);
          v25 = 0LL;
          v12 = DXGPROCESS::GetCurrent(v11);
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, *(_DWORD *)(v5 + 28), v12, &v25, 0, 1);
          if ( v25 )
          {
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v25 + 448));
            v28 = v6;
            v29 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v24, 0, v13, 0);
            LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
            if ( (int)v22 >= 0 )
            {
              v15 = *(_DWORD *)(v5 + 36);
              v16 = *(struct tagRECT *)(v5 + 40);
              v17 = *(_DWORD *)(v5 + 32);
              v21 = *(_DWORD *)(v5 + 72);
              v34 = *(struct tagRECT *)(v5 + 56);
              v35 = v16;
              v18 = DXGCONTEXT::BltFromVm(
                      v25,
                      v17,
                      v15,
                      0LL,
                      &v25,
                      &v35,
                      &v34,
                      v21,
                      (const struct tagRECT *)(v5 + 80),
                      (struct COREDEVICEACCESS *)v36);
              v19 = (char *)v25 + 448;
              LODWORD(v22) = v18;
              *((_QWORD *)v25 + 57) = 0LL;
              ExReleasePushLockExclusiveEx(v19, 0LL);
              KeLeaveCriticalRegion();
              if ( (int)v22 < 0 )
              {
                WdLogSingleEntry1(2LL, (int)v22);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"VmBusBlt failed: 0x%I64x",
                  (int)v22,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v14 = (char *)v25 + 448;
              *((_QWORD *)v25 + 57) = 0LL;
              ExReleasePushLockExclusiveEx(v14, 0LL);
              KeLeaveCriticalRegion();
            }
            COREACCESS::~COREACCESS((COREACCESS *)v38);
            COREACCESS::~COREACCESS((COREACCESS *)v37);
            if ( v29 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
          }
          else
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid device handle: 0x%I64x",
              *(unsigned int *)(v5 + 24),
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v22) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
          if ( v26[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
        }
        else
        {
          WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid device handle: 0x%I64x",
            *(unsigned int *)(v5 + 24),
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v22) = -1073741811;
        }
        if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v22, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 2100LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2100LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  return v3;
}
