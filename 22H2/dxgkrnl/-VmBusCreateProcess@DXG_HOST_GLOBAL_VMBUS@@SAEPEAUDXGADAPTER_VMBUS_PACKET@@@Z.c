/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B700
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C000859C (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_425239864__private_IsEnabledDeviceUsage @ 0x1C0026CD4 (Feature_425239864__private_IsEnabledDeviceUsage.c)
 *     Feature_809279800__private_IsEnabledDeviceUsage @ 0x1C0026D28 (Feature_809279800__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0056A34 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B8F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C01AA014 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C0344F1C (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C0346384 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rdi
  __int64 v2; // r15
  unsigned int v3; // r12d
  bool v4; // si
  __int64 v5; // rbx
  const wchar_t *v6; // r9
  char v7; // cl
  __int64 v8; // r14
  unsigned int v9; // eax
  bool v10; // bl
  int v11; // eax
  DXGPROCESSVM *v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // r13
  unsigned int v15; // esi
  int v16; // edx
  char v17; // al
  DXGFASTMUTEX *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rbx
  struct VMBPACKETCOMPLETION__ *v21; // rcx
  int v23; // [rsp+6Ch] [rbp-35h] BYREF
  DXGPROCESSVM *v24; // [rsp+70h] [rbp-31h] BYREF
  struct DXGADAPTER_VMBUS_PACKET *v25; // [rsp+78h] [rbp-29h]
  _BYTE v26[24]; // [rsp+80h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-9h] BYREF

  v1 = a1;
  v25 = a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  if ( !v2 )
    return 0;
  v24 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( (unsigned int)Feature_425239864__private_IsEnabledDeviceUsage() && (*(_BYTE *)(v2 + 562) & 0x10) != 0 )
  {
    v5 = 7178LL;
    WdLogSingleEntry1(2LL, 7178LL);
    v6 = L"Invalid process flag, bWslProcess is not supported";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v5, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  v7 = *(_BYTE *)(v2 + 562);
  if ( (v7 & 3) == 3 || v7 & 1 | ((v7 & 2) != 0) && (v7 & 4) != 0 )
  {
    v5 = 7186LL;
    WdLogSingleEntry1(2LL, 7186LL);
    v6 = L"Invalid process flags";
    goto LABEL_51;
  }
  v8 = *((_QWORD *)v1 + 12);
  v9 = *(_DWORD *)(*(_QWORD *)(v8 + 608) + 392LL);
  if ( v9 < 0x1F )
  {
    v10 = 0;
    if ( v9 < 0x1B )
      goto LABEL_15;
  }
  else
  {
    v10 = (v7 & 0x10) != 0;
  }
  v4 = (v7 & 8) != 0;
  if ( ((v7 & 8) != 0 || v10) && (v7 & 7) != 0 )
  {
    v5 = 7205LL;
    WdLogSingleEntry1(2LL, 7205LL);
    v6 = L"Invalid process Linux/WSL flags";
    goto LABEL_51;
  }
LABEL_15:
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v8 + 608)) < 0 )
  {
    v5 = 7213LL;
    WdLogSingleEntry1(2LL, 7213LL);
    v6 = L"To  many VM processes created";
    goto LABEL_51;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v8 + 56), &ApcState);
  v11 = DXGPROCESS::CreateDxgProcess(&v24, (struct DXGPROCESS *)v8, *(struct DXGPROCESS **)(v2 + 24), 0, 0LL);
  v23 = v11;
  if ( v11 < 0 )
  {
    v20 = v11;
    WdLogSingleEntry1(2LL, v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VM process: 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v12 = v24;
    if ( v4 )
      *((_DWORD *)v24 + 106) |= 0x20u;
    if ( v10 )
    {
      v13 = *((_QWORD *)v12 + 8);
      *((_DWORD *)v12 + 106) |= 0x10u;
      *(_BYTE *)(v13 + 136) = 1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v26,
      (struct DXGPROCESS *)v8);
    v14 = (_QWORD *)(v8 + 280);
    v3 = HMGRTABLE::AllocHandle((unsigned int *)(v8 + 280), (__int64)v12, 12, 0, 0);
    if ( !v3 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
      WdLogSingleEntry1(2LL, 7242LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate process handle: 0x%I64x",
        7242LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESS::DestroyDxgProcess(v12);
      _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 608));
      if ( (unsigned int)Feature_809279800__private_IsEnabledDeviceUsage() )
        KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
      return 0;
    }
    v15 = (v3 >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v8 + 296) )
    {
      v16 = *(_DWORD *)(*v14 + 16LL * v15 + 8);
      if ( ((v3 >> 25) & 0x60) == (*(_BYTE *)(*v14 + 16LL * v15 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
        *(_DWORD *)(*v14 + 16 * (((unsigned __int64)v3 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
    *((_DWORD *)v12 + 163) = v3;
    DXGPROCESSVM::SetVmProcessName(v12, (unsigned __int16 *)(v2 + 40));
    *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL) = *(_QWORD *)(v2 + 32);
    v17 = *(_BYTE *)(v2 + 562);
    if ( (v17 & 2) != 0 )
    {
      *((_DWORD *)v12 + 106) |= 4u;
    }
    else if ( (v17 & 1) != 0 )
    {
      *((_DWORD *)v12 + 106) |= 1u;
    }
    else if ( (v17 & 4) != 0 )
    {
      *((_DWORD *)v12 + 106) |= 8u;
    }
    v18 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 368);
    DXGFASTMUTEX::Acquire(v18);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v8);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v18);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        *((_QWORD *)v12 + 8),
        &EventCreateDxgProcessVm,
        v19,
        v12,
        *(_QWORD *)(*((_QWORD *)v12 + 8) + 80LL),
        *((_DWORD *)v12 + 126),
        *((_DWORD *)v12 + 106),
        *(_QWORD *)(*((_QWORD *)v12 + 8) + 88LL),
        *((_QWORD *)v12 + 77),
        *(_QWORD *)(*((_QWORD *)v12 + 76) + 608LL),
        v2 + 40);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 248));
    if ( v15 < *(_DWORD *)(v8 + 296)
      && ((v3 >> 25) & 0x60) == (*(_BYTE *)(*v14 + 16LL * v15 + 8) & 0x60)
      && (*(_DWORD *)(*v14 + 16LL * v15 + 8) & 0x1F) != 0 )
    {
      if ( (*(_DWORD *)(*v14 + 16LL * ((v3 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry1(1LL, 222LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          222LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*v14 + 16LL * ((v3 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
    }
    *(_QWORD *)(v8 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 248, 0LL);
    KeLeaveCriticalRegion();
    v1 = v25;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v23 >= 0 )
  {
    v21 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)v1 + 16);
    v23 = v3;
    VmBusCompletePacket(v21, &v23, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 608));
  return 0;
}
