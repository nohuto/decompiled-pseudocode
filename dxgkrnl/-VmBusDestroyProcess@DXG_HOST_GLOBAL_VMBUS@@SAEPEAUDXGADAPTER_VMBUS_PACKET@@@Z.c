/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000748C (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x1C0041998 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AD34 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // edx
  int v14; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v16[48]; // [rsp+70h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp+7h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 12);
  v14 = -1073741823;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, (struct DXGPROCESS *)v4);
  v5 = (*(_DWORD *)(v3 + 8) >> 6) & 0xFFFFFF;
  if ( v5 < *(_DWORD *)(v4 + 296) )
  {
    v6 = *(_QWORD *)(v4 + 280);
    if ( ((*(_DWORD *)(v3 + 8) >> 25) & 0x60) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60)
      && (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) == 0 )
    {
      v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
      if ( v7 )
      {
        if ( v7 == 12 )
        {
          v8 = *(struct _EX_RUNDOWN_REF **)(v6 + 16LL * v5);
          if ( v8 )
          {
            v9 = *(_DWORD *)(v3 + 8);
            v10 = (v9 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v10 < *(_DWORD *)(v4 + 296) )
            {
              v11 = *(_QWORD *)(v4 + 280);
              v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
              if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
                && (v12 & 0x2000) == 0
                && (v12 & 0x1F) != 0 )
              {
                *(_DWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
          }
          goto LABEL_9;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v8 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  if ( v8 )
  {
    ExWaitForRundownProtectionRelease(v8 + 30);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v16, (struct DXGPROCESS *)v8, 1u);
    DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v8);
    v14 = 0;
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v16);
  }
  else
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 8));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get process by handle: 0x%I64x",
      *(unsigned int *)(v3 + 8),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v14, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
