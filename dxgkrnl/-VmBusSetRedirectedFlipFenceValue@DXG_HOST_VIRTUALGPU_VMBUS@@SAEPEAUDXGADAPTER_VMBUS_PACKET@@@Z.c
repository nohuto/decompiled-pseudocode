/*
 * XREFs of ?VmBusSetRedirectedFlipFenceValue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038DD30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C03713B8 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetRedirectedFlipFenceValue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  PERESOURCE *Global; // rax
  _BYTE v17[8]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v18; // [rsp+60h] [rbp-1h]
  char v19; // [rsp+68h] [rbp+7h]
  _BYTE v20[8]; // [rsp+70h] [rbp+Fh] BYREF
  DXGPUSHLOCK *v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+1Fh]
  _BYTE v23[32]; // [rsp+88h] [rbp+27h] BYREF
  int v24; // [rsp+C8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v22 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3695LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3695LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_18;
  }
  v24 = 0;
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_4;
  v5 = *((_QWORD *)a1 + 10);
  v19 = 0;
  v18 = *(_QWORD *)(v5 + 16);
  v6 = v18;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
  if ( *(_DWORD *)(v6 + 200) == 1 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v23,
      *((struct DXGPROCESS **)a1 + 12));
    v8 = *((_QWORD *)a1 + 12);
    v9 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
    if ( v9 < *(_DWORD *)(v8 + 296) )
    {
      v10 = *(_QWORD *)(v8 + 280);
      if ( ((*(_DWORD *)(v4 + 24) >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
        if ( v11 )
        {
          if ( v11 == 13 )
          {
            v13 = *(_QWORD *)(v10 + 16LL * v9);
            if ( v13 && (*(_DWORD *)v13 == 11 || *(_DWORD *)v13 == 8) )
            {
              v14 = *(_QWORD *)(v13 + 8);
              if ( !v14 )
              {
                WdLogSingleEntry1(1LL, 3720LL);
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSyncObject", 3720LL, 0LL, 0LL, 0LL, 0LL);
              }
              _InterlockedAdd((volatile signed __int32 *)(v14 + 24), 1u);
              DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
              v15 = *(_QWORD *)(v14 + 120);
              if ( v15 <= *(_QWORD *)(v4 + 32) )
                v15 = *(_QWORD *)(v4 + 32);
              *(_QWORD *)(v14 + 120) = v15;
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, (struct DXGSYNCOBJECT *)v14, 0);
LABEL_14:
              v7 = v24;
              if ( v24 >= 0 )
                goto LABEL_16;
              goto LABEL_15;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object handle: 0x%I64x",
      *(unsigned int *)(v4 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
    v24 = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    goto LABEL_14;
  }
  v7 = -1073741130;
  v24 = -1073741130;
LABEL_15:
  HandleAsyncCommandError((__int64 *)a1, v7, 0, 3);
LABEL_16:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v24, 4u);
  if ( v19 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v3;
}
