/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003BBC8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004074C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0123260 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v17; // [rsp+20h] [rbp-29h] BYREF
  __int64 v18; // [rsp+28h] [rbp-21h] BYREF
  __int64 v19; // [rsp+30h] [rbp-19h]
  _BYTE v20[24]; // [rsp+38h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 7);
  v17 = -1073741823;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v20, (struct _KTHREAD **)v4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *(_DWORD *)(v4 + 256) )
  {
    v7 = *(_QWORD *)(v4 + 240);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      v9 = v8 & 0x1F;
      if ( (_BYTE)v9 == 12 )
      {
        v11 = *(struct _EX_RUNDOWN_REF **)(v7 + 16LL * (unsigned int)v6);
        if ( v11 )
          *(_DWORD *)(v7 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        goto LABEL_9;
      }
      v10 = WdLogNewEntry5_WdError(0x2000LL, v9);
      *(_QWORD *)(v10 + 24) = 316LL;
      WdLogEvent5_WdError(v10);
    }
  }
  v11 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  if ( v11 )
  {
    ExWaitForRundownProtectionRelease(v11 + 25);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v18, (struct DXGPROCESS *)v11);
    v15 = v19;
    if ( v19 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v11);
      v17 = 0;
      *(_QWORD *)(v15 + 8) = v18;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = *(unsigned int *)(v3 + 8);
    WdLogEvent5_WdError(v14);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v17, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
