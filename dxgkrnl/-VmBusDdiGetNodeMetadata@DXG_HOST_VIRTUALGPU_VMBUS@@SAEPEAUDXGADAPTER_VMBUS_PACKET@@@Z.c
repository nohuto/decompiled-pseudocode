/*
 * XREFs of ?VmBusDdiGetNodeMetadata@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0377790
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetNodeMetadata(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // r14
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+60h] [rbp-A0h]
  _OWORD v17[5]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[144]; // [rsp+C0h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v16 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = *((_QWORD *)a1 + 17);
    memset(v17, 0, sizeof(v17));
    v5 = *(_QWORD *)(v2 + 16);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v5, 0LL);
    HIDWORD(v17[4]) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
    if ( v17[4] >= 0 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      v7 = (unsigned __int16)v6;
      v8 = HIWORD(v6);
      if ( *(int *)(v5 + 2552) < 0x2000 )
        v9 = 1;
      else
        v9 = *(_DWORD *)(v5 + 288);
      if ( v8 < v9 )
      {
        v10 = (unsigned __int16 *)(*(_QWORD *)(v5 + 2808) + 344LL * v8);
        if ( (unsigned int)v7 < *v10 )
        {
          v11 = *((_QWORD *)v10 + 4);
          v12 = 74 * v7;
          v17[0] = *(_OWORD *)(v12 + v11);
          v17[1] = *(_OWORD *)(v12 + v11 + 16);
          v17[2] = *(_OWORD *)(v12 + v11 + 32);
          v17[3] = *(_OWORD *)(v12 + v11 + 48);
          *(_QWORD *)&v17[4] = *(_QWORD *)(v12 + v11 + 64);
          WORD4(v17[4]) = *(_WORD *)(v12 + v11 + 72);
          goto LABEL_13;
        }
        WdLogSingleEntry1(3LL, 4762LL);
      }
      else
      {
        WdLogSingleEntry1(3LL, 4754LL);
      }
      HIDWORD(v17[4]) = -1073741811;
    }
LABEL_13:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v17, 0x50u);
    v3 = 1;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
    goto LABEL_14;
  }
  WdLogSingleEntry1(2LL, 4741LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4741LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
