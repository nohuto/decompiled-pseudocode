/*
 * XREFs of ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0186F04
 * Callers:
 *     ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C01D4210 (-DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D200 (-VmBusNotifyProcessFreeze@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0009F40 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C01D5E80 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C01D8978 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 */

void __fastcall DXGPROCESS::NotifyProcessFreeze(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  DXGDEVICE *Current; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  ADAPTER_RENDER *v10; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2087;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2087);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2087);
  *((_BYTE *)this + 588) = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  v4 = (_QWORD *)((char *)this + 320);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 40);
  v14[0] = (char *)this + 320;
  while ( 1 )
  {
    v14[1] = v5;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    if ( !Current )
      break;
    DXGDEVICE::NotifyProcessFreeze(Current);
    v5 = (_QWORD *)*v5;
  }
  v7 = 0LL;
  v15[0] = (char *)this + 320;
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    v15[1] = v4;
    v8 = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v15);
    if ( !v8 )
      break;
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
    if ( v9 != v7 )
    {
      if ( !*(_BYTE *)(v9 + 209) )
      {
        v10 = *(ADAPTER_RENDER **)(v9 + 2928);
        if ( v10 )
        {
          ADAPTER_RENDER::NotifyProcessFreeze(v10, this);
          if ( *(_QWORD *)(v9 + 3032) )
            DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)v9);
        }
      }
      v7 = v9;
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifyProcessFreezeCoreDripsBlockerTracking(
        Global,
        *(_QWORD *)(v9 + 232),
        *((struct _EPROCESS **)this + 7),
        1);
    }
  }
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v16);
}
