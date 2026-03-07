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
