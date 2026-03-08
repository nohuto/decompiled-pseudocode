/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C01D4210
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0014DD8 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0186F04 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0386C24 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  unsigned int *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  struct DXGGLOBAL *Global; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v3 = (unsigned int *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x800) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( v3[126] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessFreeze(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 214), v3[126]);
    }
    DXGPROCESS::NotifyProcessFreeze((DXGPROCESS *)v3, v4, v5);
    KeUnstackDetachProcess(&ApcState);
    if ( v8[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
