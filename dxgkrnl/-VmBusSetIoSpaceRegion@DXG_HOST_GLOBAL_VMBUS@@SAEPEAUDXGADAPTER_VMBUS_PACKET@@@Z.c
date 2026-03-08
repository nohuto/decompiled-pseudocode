/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1C0341638 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v5 = *(_QWORD *)(v3 + 32);
    if ( v5 == *((_QWORD *)Global + 220) )
    {
      v6 = *(_DWORD *)(v3 + 40);
      if ( v6 )
      {
        v7 = DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 12) + 608LL), v6);
        v12 = v7;
      }
      else
      {
        v7 = v12;
      }
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(v3 + 24);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v3 + 32);
          if ( v9 )
          {
            v10 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL);
            if ( !*(_QWORD *)(v10 + 256) )
            {
              *(_QWORD *)(v10 + 256) = v8;
              *(_QWORD *)(v10 + 264) = v9;
            }
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The VM has incorrect MMIO region size: 0x%I64x",
        *(_QWORD *)(v3 + 32),
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v12, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
