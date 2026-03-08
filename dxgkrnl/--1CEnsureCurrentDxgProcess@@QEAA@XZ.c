/*
 * XREFs of ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000748C
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C018C4B0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C03410E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0347060 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0378D80 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C037996C (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x1C0051458 (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 */

void __fastcall CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess(CEnsureCurrentDxgProcess *this)
{
  __int64 v2; // rcx
  DXGGLOBAL *Global; // rax
  ReferenceCounted *v4; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    *(_QWORD *)(v2 + 24) = *(_QWORD *)this;
  if ( *((_QWORD *)this + 5) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::RemoveThreadToDxgThreadList(Global, (CEnsureCurrentDxgProcess *)((char *)this + 16));
    v4 = (ReferenceCounted *)*((_QWORD *)this + 1);
    if ( v4 )
      ReferenceCounted::Release(v4);
  }
}
