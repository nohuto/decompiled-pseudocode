/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F480
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008660 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     Feature_1279041848__private_IsEnabledDeviceUsage @ 0x1C00266EC (Feature_1279041848__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00406FC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0125434 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C0285AB0 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C0286978 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // r14d
  bool v7; // di
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  DXGPROCESSVM *v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  DXGFASTMUTEX *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  struct VMBPACKETCOMPLETION__ *v32; // rcx
  int v34; // [rsp+38h] [rbp-29h] BYREF
  DXGPROCESSVM *v35; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v36[24]; // [rsp+48h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-1h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v4) = *(_BYTE *)(v2 + 562);
  v6 = 0;
  v35 = 0LL;
  v7 = 0;
  if ( (v4 & 3) == 3 || v4 & 1 | ((v4 & 2) != 0) && (v4 & 4) != 0 )
  {
    v9 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v9 + 24) = 6126LL;
    goto LABEL_41;
  }
  v8 = *((_QWORD *)a1 + 7);
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 496) + 352LL) >= 0x1Bu )
  {
    v7 = (v4 & 8) != 0;
    if ( (v4 & 8) != 0 && (v4 & 7) != 0 )
    {
      v9 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v9 + 24) = 6136LL;
LABEL_41:
      WdLogEvent5_WdError(v9);
      return 0;
    }
  }
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v8 + 496)) < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v9 + 24) = 6145LL;
    goto LABEL_41;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v8 + 56), &ApcState);
  v12 = DXGPROCESS::CreateDxgProcess(
          &v35,
          (struct DXGPROCESS *)v8,
          *(struct DXGPROCESS **)(v5 + 24),
          0LL,
          0LL,
          *(void **)(v5 + 32));
  v15 = v12;
  v34 = v12;
  if ( v12 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v31 + 24) = v15;
    WdLogEvent5_WdError(v31);
  }
  else
  {
    v16 = v35;
    if ( v7 )
      *((_BYTE *)v35 + 347) |= 4u;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36, (struct _KTHREAD **)v8);
    v17 = (__int64 *)(v8 + 240);
    v6 = HMGRTABLE::AllocHandle((unsigned int *)(v8 + 240), (__int64)v16, 12, 0, 0);
    if ( !v6 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = 6170LL;
      WdLogEvent5_WdError(v20);
      DXGPROCESS::DestroyDxgProcess(v16);
      _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 496));
      if ( (unsigned int)Feature_1279041848__private_IsEnabledDeviceUsage() )
        KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
      return 0;
    }
    v21 = (v6 >> 6) & 0xFFFFFF;
    if ( v21 < *(_DWORD *)(v8 + 256) )
    {
      v22 = *(_DWORD *)(*v17 + 16LL * v21 + 8);
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v17 + 16LL * v21 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
        *(_DWORD *)(*v17 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    *((_DWORD *)v16 + 135) = v6;
    DXGPROCESSVM::SetVmProcessName(v16, (unsigned __int16 *)(v5 + 40));
    v25 = *(_BYTE *)(v5 + 562);
    if ( (v25 & 2) != 0 )
    {
      *((_BYTE *)v16 + 346) = 1;
    }
    else if ( (v25 & 1) != 0 )
    {
      *((_BYTE *)v16 + 344) = 1;
    }
    else if ( (v25 & 4) != 0 )
    {
      *((_BYTE *)v16 + 347) |= 1u;
    }
    v26 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v24, v23) + 320);
    DXGFASTMUTEX::Acquire(v26);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v8, v27);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v26, v28);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 208));
    if ( v21 < *(_DWORD *)(v8 + 256) )
    {
      v29 = *v17;
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v17 + 16LL * v21 + 8) & 0x60)
        && (*(_DWORD *)(*v17 + 16LL * v21 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v29 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v30 = WdLogNewEntry5_WdAssertion((v6 >> 25) & 0x60, v29);
          *(_QWORD *)(v30 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v30);
          v29 = *v17;
        }
        *(_DWORD *)(v29 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v8 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v15) = v34;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v15 >= 0 )
  {
    v32 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v34 = v6;
    VmBusCompletePacket(v32, &v34, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 496));
  return 0;
}
