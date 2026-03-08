/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C018C3C0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct DXGPROCESS **a1)
{
  __int64 v2; // rdi
  struct DXGPROCESS *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  DXGSHAREDVMOBJECT *v8; // rbx
  __int64 v9; // rdx
  struct DXGPROCESS *v10; // rcx
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  int v12; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, a1[12]);
  v4 = a1[12];
  v5 = (*(_DWORD *)(v2 + 24) >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)v4 + 74) )
    goto LABEL_9;
  v6 = *((_QWORD *)v4 + 35);
  if ( ((*(_DWORD *)(v2 + 24) >> 25) & 0x60) != (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
  if ( !v7 )
    goto LABEL_9;
  if ( v7 != 13 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v8 = 0LL;
    goto LABEL_10;
  }
  v8 = *(DXGSHAREDVMOBJECT **)(v6 + 16LL * v5);
LABEL_10:
  v9 = *(unsigned int *)(v2 + 24);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid NT shared object handle: 0x%I64x",
      *(unsigned int *)(v2 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)a1[12] + 280), v9);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  v10 = a1[12];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v10 + 7), &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v8);
  KeUnstackDetachProcess(&ApcState);
  v11 = a1[16];
  v12 = 0;
  VmBusCompletePacket(v11, &v12, 4u);
  return 1;
}
