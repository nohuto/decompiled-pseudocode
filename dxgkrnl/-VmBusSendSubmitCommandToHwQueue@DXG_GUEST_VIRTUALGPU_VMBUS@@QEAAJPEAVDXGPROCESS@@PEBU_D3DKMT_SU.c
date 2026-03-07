__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v5; // r12
  __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // r13
  size_t v12; // r8
  void *v13; // rsi
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  __int64 PrivateDriverDataSize; // rax
  char *pPrivateDriverData; // rdx
  unsigned int v17; // esi
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // edi
  int v24; // eax
  char v25[8]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-1B0h]
  char v27; // [rsp+60h] [rbp-1A8h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+68h] [rbp-1A0h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+70h] [rbp-198h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v30; // [rsp+78h] [rbp-190h]
  struct DXGPROCESS *v31; // [rsp+80h] [rbp-188h]
  _BYTE v32[24]; // [rsp+88h] [rbp-180h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-168h] BYREF
  int v34; // [rsp+B0h] [rbp-158h]

  v5 = this;
  v30 = this;
  v31 = a2;
  v26 = *((_QWORD *)this + 9);
  v27 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  if ( *(_DWORD *)(*((_QWORD *)v5 + 9) + 200LL) != 1 )
  {
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    return 0LL;
  }
  v7 = 4 * a3->NumPrimaries;
  v8 = v7 + 80;
  if ( (unsigned int)v7 >= 0xFFFFFFB0 )
  {
    WdLogSingleEntry1(3LL, 12102LL);
  }
  else
  {
    v9 = v8 + a3->PrivateDriverDataSize;
    if ( v9 >= v8 )
    {
      if ( v9 > 0x20000 )
      {
        WdLogSingleEntry1(3LL, 12114LL);
        if ( v27 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        return 3221225659LL;
      }
      v33 = 0LL;
      v34 = 0;
      DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v33, v5, v9, 0LL, 0LL, 0LL);
      v10 = v33;
      if ( !(_QWORD)v33 )
      {
        WdLogSingleEntry1(6LL, 12122LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMANDTOHWQUEUE",
          12122LL,
          0LL,
          0LL,
          0LL,
          0LL);
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
        if ( v27 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        return 3221225495LL;
      }
      *(_QWORD *)v33 = 0LL;
      *(_DWORD *)(v10 + 8) = 0;
      *(_BYTE *)(v10 + 12) = 0;
      *(_DWORD *)(v10 + 12) &= 0x1FFu;
      *(_QWORD *)(v10 + 16) = 52LL;
      *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess(a2);
      *(_OWORD *)(v10 + 24) = *(_OWORD *)&a3->hHwQueue;
      *(_OWORD *)(v10 + 40) = *(_OWORD *)&a3->CommandBuffer;
      *(_OWORD *)(v10 + 56) = *(_OWORD *)&a3->pPrivateDriverData;
      *(_QWORD *)(v10 + 72) = a3->WrittenPrimaries;
      v11 = v10 + 80;
      v12 = (unsigned int)v7;
      v13 = (void *)(v10 + 80 + v7);
      if ( a3->NumPrimaries )
      {
        WrittenPrimaries = a3->WrittenPrimaries;
        if ( (const D3DKMT_HANDLE *)((char *)WrittenPrimaries + v12) < WrittenPrimaries
          || (unsigned __int64)WrittenPrimaries + v12 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove((void *)(v10 + 80), WrittenPrimaries, v12);
      }
      PrivateDriverDataSize = a3->PrivateDriverDataSize;
      if ( (_DWORD)PrivateDriverDataSize )
      {
        pPrivateDriverData = (char *)a3->pPrivateDriverData;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v13, pPrivateDriverData, (unsigned int)PrivateDriverDataSize);
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, a2);
      v17 = 0;
      if ( a3->NumPrimaries )
      {
        while ( 1 )
        {
          v28 = 0LL;
          AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                          (__int64)a2,
                                                          (DXGALLOCATIONREFERENCE *)&v29,
                                                          *(_DWORD *)(v11 + 4LL * v17));
          DXGALLOCATIONREFERENCE::MoveAssign(&v28, AllocationUnsafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
          if ( !v28 )
            break;
          *(_DWORD *)(v11 + 4LL * v17) = HIDWORD(v28[2].Ptr);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
          if ( ++v17 >= a3->NumPrimaries )
          {
            v5 = v30;
            goto LABEL_33;
          }
        }
        WdLogSingleEntry1(3LL, 12164LL);
        v23 = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
        goto LABEL_43;
      }
LABEL_33:
      v19 = (*(_DWORD *)(v10 + 24) >> 6) & 0xFFFFFF;
      if ( v19 < *((_DWORD *)a2 + 74) )
      {
        v20 = *((_QWORD *)a2 + 35);
        if ( ((*(_DWORD *)(v10 + 24) >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
          && (*(_DWORD *)(v20 + 16LL * v19 + 8) & 0x2000) == 0 )
        {
          v21 = *(_DWORD *)(v20 + 16LL * v19 + 8) & 0x1F;
          if ( v21 )
          {
            if ( v21 == 15 )
            {
              v22 = *(_QWORD *)(v20 + 16LL * v19);
              goto LABEL_40;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      v22 = 0LL;
LABEL_40:
      if ( v22 )
      {
        *(_DWORD *)(v10 + 24) = *(_DWORD *)(v22 + 28);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
        v24 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v5, (struct DXGVMBUSMESSAGE *)&v33);
        v23 = v24;
        if ( v24 < 0 )
          WdLogSingleEntry1(3LL, v24);
        goto LABEL_47;
      }
      WdLogSingleEntry1(3LL, 12174LL);
      v23 = -1073741811;
LABEL_43:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
LABEL_47:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
      if ( v27 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      return v23;
    }
    WdLogSingleEntry1(3LL, 12108LL);
  }
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
  return 3221225485LL;
}
