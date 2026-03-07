__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r14
  _OWORD *v11; // rax
  struct _D3DKMT_SUBMITCOMMAND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  size_t v15; // r8
  void *v16; // rsi
  D3DKMT_HANDLE *HistoryBufferArray; // rdx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  unsigned int v20; // esi
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  unsigned int v22; // esi
  struct _EX_RUNDOWN_REF **v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // eax
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // edi
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp-1C8h] BYREF
  char v32[8]; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-1B8h]
  char v34; // [rsp+68h] [rbp-1B0h]
  struct _EX_RUNDOWN_REF *v35; // [rsp+70h] [rbp-1A8h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+78h] [rbp-1A0h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v37; // [rsp+80h] [rbp-198h]
  struct DXGPROCESS *v38; // [rsp+88h] [rbp-190h]
  _BYTE v39[32]; // [rsp+90h] [rbp-188h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-168h] BYREF
  int v41; // [rsp+C0h] [rbp-158h]

  v37 = this;
  v38 = a2;
  v33 = *((_QWORD *)this + 9);
  v34 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    if ( v34 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v34 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return 0LL;
  }
  v7 = 4LL * a3->NumHistoryBuffers;
  if ( v7 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11978LL);
    goto LABEL_58;
  }
  v8 = v7 + 408;
  if ( (unsigned int)v7 >= 0xFFFFFE68 )
  {
    WdLogSingleEntry1(3LL, 11983LL);
    goto LABEL_58;
  }
  v9 = v8 + a3->PrivateDriverDataSize;
  if ( v9 < v8 )
  {
    WdLogSingleEntry1(3LL, 11988LL);
LABEL_58:
    if ( v34 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return 3221225485LL;
  }
  if ( v9 > 0x20000 )
  {
    WdLogSingleEntry1(3LL, 11993LL);
    if ( v34 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return 3221225659LL;
  }
  v40 = 0LL;
  v41 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v40, this, v9, 0LL, 0LL, 0LL);
  v10 = v40;
  if ( !(_QWORD)v40 )
  {
    WdLogSingleEntry1(6LL, 12000LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMAND",
      12000LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v40);
    if ( v34 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
    return 3221225495LL;
  }
  *(_QWORD *)v40 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 12) &= 0x1FFu;
  *(_QWORD *)(v10 + 16) = 20LL;
  *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess(a2);
  v11 = (_OWORD *)(v10 + 24);
  v12 = a3;
  v13 = 3LL;
  do
  {
    *v11 = *(_OWORD *)&v12->Commands;
    v11[1] = *(_OWORD *)&v12->PresentHistoryToken;
    v11[2] = *(_OWORD *)&v12->BroadcastContext[1];
    v11[3] = *(_OWORD *)&v12->BroadcastContext[5];
    v11[4] = *(_OWORD *)&v12->BroadcastContext[9];
    v11[5] = *(_OWORD *)&v12->BroadcastContext[13];
    v11[6] = *(_OWORD *)&v12->BroadcastContext[17];
    v11 += 8;
    *(v11 - 1) = *(_OWORD *)&v12->BroadcastContext[21];
    v12 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v12 + 128);
    --v13;
  }
  while ( v13 );
  v14 = v10 + 408;
  v15 = (unsigned int)v7;
  v16 = (void *)((unsigned int)v7 + v10 + 408);
  HistoryBufferArray = a3->HistoryBufferArray;
  if ( (D3DKMT_HANDLE *)((char *)HistoryBufferArray + v15) < HistoryBufferArray
    || (unsigned __int64)HistoryBufferArray + v15 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove((void *)(v10 + 408), HistoryBufferArray, v15);
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  pPrivateDriverData = (char *)a3->pPrivateDriverData;
  if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
    || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v16, pPrivateDriverData, PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v39, a2);
  v20 = 0;
  if ( a3->NumPrimaries )
  {
    while ( 1 )
    {
      v31 = 0LL;
      AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                      (__int64)a2,
                                                      (DXGALLOCATIONREFERENCE *)&v35,
                                                      *(_DWORD *)(v10 + 4LL * v20 + 328));
      DXGALLOCATIONREFERENCE::MoveAssign(&v31, AllocationUnsafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
      if ( !v31 )
        break;
      *(_DWORD *)(v10 + 4LL * v20 + 328) = HIDWORD(v31[2].Ptr);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      if ( ++v20 >= a3->NumPrimaries )
        goto LABEL_31;
    }
    WdLogSingleEntry1(3LL, 12036LL);
LABEL_47:
    v30 = -1073741811;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    goto LABEL_48;
  }
LABEL_31:
  v22 = 0;
  if ( a3->NumHistoryBuffers )
  {
    while ( 1 )
    {
      v31 = 0LL;
      v23 = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                         (__int64)a2,
                                         (DXGALLOCATIONREFERENCE *)&v36,
                                         *(_DWORD *)(v14 + 4LL * v22));
      DXGALLOCATIONREFERENCE::MoveAssign(&v31, v23);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36);
      if ( !v31 )
        break;
      *(_DWORD *)(v14 + 4LL * v22) = HIDWORD(v31[2].Ptr);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      if ( ++v22 >= a3->NumHistoryBuffers )
        goto LABEL_34;
    }
    WdLogSingleEntry1(3LL, 12048LL);
    goto LABEL_47;
  }
LABEL_34:
  v24 = 0;
  if ( !*(_DWORD *)(v10 + 48) )
  {
LABEL_44:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
    v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v37, (struct DXGVMBUSMESSAGE *)&v40);
    v30 = v29;
    if ( v29 < 0 )
      WdLogSingleEntry1(3LL, v29);
    goto LABEL_52;
  }
  while ( 1 )
  {
    v25 = (*(_DWORD *)(v10 + 4LL * v24 + 52) >> 6) & 0xFFFFFF;
    if ( v25 >= *((_DWORD *)a2 + 74) )
      goto LABEL_41;
    v26 = *((_QWORD *)a2 + 35);
    if ( ((*(_DWORD *)(v10 + 4LL * v24 + 52) >> 25) & 0x60) != (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60) )
      goto LABEL_41;
    if ( (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) != 0 )
      goto LABEL_41;
    v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
    if ( !v27 )
      goto LABEL_41;
    if ( v27 != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_41:
      v28 = 0LL;
      goto LABEL_42;
    }
    v28 = *(_QWORD *)(v26 + 16LL * v25);
LABEL_42:
    if ( !v28 )
      break;
    *(_DWORD *)(v10 + 4LL * v24++ + 52) = *(_DWORD *)(v28 + 28);
    if ( v24 >= *(_DWORD *)(v10 + 48) )
      goto LABEL_44;
  }
  WdLogSingleEntry1(3LL, 12059LL);
  v30 = -1073741811;
LABEL_48:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
LABEL_52:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v40);
  if ( v34 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
  return v30;
}
