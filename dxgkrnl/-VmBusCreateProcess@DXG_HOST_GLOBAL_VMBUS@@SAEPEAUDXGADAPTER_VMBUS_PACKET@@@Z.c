unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned __int8 v4; // dl
  unsigned int v5; // r15d
  bool v6; // si
  __int64 v7; // r14
  DXGVIRTUALMACHINE *v8; // rcx
  unsigned int v9; // eax
  bool v10; // bl
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  int v13; // eax
  DXGPROCESSVM *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // r12
  unsigned int v17; // esi
  int v18; // edx
  char v19; // al
  DXGFASTMUTEX *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rbx
  struct VMBPACKETCOMPLETION__ *v23; // rcx
  int v25; // [rsp+6Ch] [rbp-35h] BYREF
  DXGPROCESSVM *v26; // [rsp+70h] [rbp-31h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v27; // [rsp+78h] [rbp-29h]
  _BYTE v28[24]; // [rsp+80h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-9h] BYREF

  v1 = a1;
  v27 = a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 562);
  v5 = 0;
  v26 = 0LL;
  v6 = 0;
  if ( (v4 & 3) == 3 || ((v4 >> 2) & (unsigned __int8)(v4 | (v4 >> 1)) & 1) != 0 )
  {
    v11 = 7086LL;
    WdLogSingleEntry1(2LL, 7086LL);
    v12 = L"Invalid process flags";
    goto LABEL_45;
  }
  v7 = *((_QWORD *)v1 + 12);
  v8 = *(DXGVIRTUALMACHINE **)(v7 + 608);
  v9 = *((_DWORD *)v8 + 98);
  if ( v9 < 0x1F )
  {
    v10 = 0;
    if ( v9 < 0x1B )
      goto LABEL_11;
  }
  else
  {
    v10 = (v4 & 0x10) != 0;
  }
  v6 = (v4 & 8) != 0;
  if ( ((v4 & 8) != 0 || v10) && (v4 & 7) != 0 )
  {
    v11 = 7105LL;
    WdLogSingleEntry1(2LL, 7105LL);
    v12 = L"Invalid process Linux/WSL flags";
LABEL_45:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
LABEL_11:
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(v8) < 0 )
  {
    v11 = 7113LL;
    WdLogSingleEntry1(2LL, 7113LL);
    v12 = L"To  many VM processes created";
    goto LABEL_45;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v7 + 56), &ApcState);
  v13 = DXGPROCESS::CreateDxgProcess(&v26, (struct DXGPROCESS *)v7, *(struct DXGPROCESS **)(v3 + 24), 0, 0LL);
  v25 = v13;
  if ( v13 < 0 )
  {
    v22 = v13;
    WdLogSingleEntry1(2LL, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VM process: 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v14 = v26;
    if ( v6 )
      *((_DWORD *)v26 + 106) |= 0x20u;
    if ( v10 )
    {
      v15 = *((_QWORD *)v14 + 8);
      *((_DWORD *)v14 + 106) |= 0x10u;
      *(_BYTE *)(v15 + 136) = 1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v28,
      (struct DXGPROCESS *)v7);
    v16 = (_QWORD *)(v7 + 280);
    v5 = HMGRTABLE::AllocHandle((unsigned int *)(v7 + 280), (__int64)v14, 12, 0, 0);
    if ( !v5 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      WdLogSingleEntry1(2LL, 7142LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate process handle: 0x%I64x",
        7142LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESS::DestroyDxgProcess(v14);
      _InterlockedDecrement(*(volatile signed __int32 **)(v7 + 608));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
      return 0;
    }
    v17 = (v5 >> 6) & 0xFFFFFF;
    if ( v17 < *(_DWORD *)(v7 + 296) )
    {
      v18 = *(_DWORD *)(*v16 + 16LL * v17 + 8);
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(*v16 + 16LL * v17 + 8) & 0x60) && (v18 & 0x2000) == 0 && (v18 & 0x1F) != 0 )
        *(_DWORD *)(*v16 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
    *((_DWORD *)v14 + 163) = v5;
    DXGPROCESSVM::SetVmProcessName(v14, (unsigned __int16 *)(v3 + 40));
    *(_QWORD *)(*((_QWORD *)v14 + 8) + 88LL) = *(_QWORD *)(v3 + 32);
    v19 = *(_BYTE *)(v3 + 562);
    if ( (v19 & 2) != 0 )
    {
      *((_DWORD *)v14 + 106) |= 4u;
    }
    else if ( (v19 & 1) != 0 )
    {
      *((_DWORD *)v14 + 106) |= 1u;
    }
    else if ( (v19 & 4) != 0 )
    {
      *((_DWORD *)v14 + 106) |= 8u;
    }
    v20 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 368);
    DXGFASTMUTEX::Acquire(v20);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v7);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v20);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        *((_QWORD *)v14 + 8),
        &EventCreateDxgProcessVm,
        v21,
        v14,
        *(_QWORD *)(*((_QWORD *)v14 + 8) + 80LL),
        *((_DWORD *)v14 + 126),
        *((_DWORD *)v14 + 106),
        *(_QWORD *)(*((_QWORD *)v14 + 8) + 88LL),
        *((_QWORD *)v14 + 77),
        *(_QWORD *)(*((_QWORD *)v14 + 76) + 608LL),
        v3 + 40);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 248));
    if ( v17 < *(_DWORD *)(v7 + 296)
      && ((v5 >> 25) & 0x60) == (*(_BYTE *)(*v16 + 16LL * v17 + 8) & 0x60)
      && (*(_DWORD *)(*v16 + 16LL * v17 + 8) & 0x1F) != 0 )
    {
      if ( (*(_DWORD *)(*v16 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 217LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          217LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*v16 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
    }
    *(_QWORD *)(v7 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    v1 = v27;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v25 >= 0 )
  {
    v23 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)v1 + 16);
    v25 = v5;
    VmBusCompletePacket(v23, &v25, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v7 + 608));
  return 0;
}
