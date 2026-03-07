void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  char *v5; // rdi
  struct DXGPROCESS **v6; // rcx
  struct DXGPROCESS **v7; // rax
  struct _KTHREAD **v8; // rdi
  struct DXGVAILOBJECT *v9; // rsi
  __int64 v10; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v12; // rdi
  struct _KTHREAD **v13; // rdi
  DXGVIRTUALMACHINE *v14; // rcx
  DXGFASTMUTEX *v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+38h] [rbp-C8h]
  _BYTE v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v18; // [rsp+48h] [rbp-B8h]
  DXGFASTMUTEX *v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v27[10]; // [rsp+C0h] [rbp-40h] BYREF

  if ( this )
  {
    memset(v27, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v27[1]);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
    v27[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v27[3]) = 36;
    LOBYTE(v27[6]) = -1;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v2, &ApcState);
    if ( (*((_DWORD *)this + 106) & 0x80) != 0 )
    {
      v8 = (struct _KTHREAD **)*((_QWORD *)this + 76);
      if ( v8 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, v8 + 8, 0);
        DXGPUSHLOCK::AcquireExclusive(v24);
        v25 = 2;
        v9 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v8);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
        if ( v9 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v21);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
          v10 = *((_QWORD *)v9 + 12);
          if ( v10 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v9 + 12)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v10);
              v12 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x800) == 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v17,
                    (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
                  DXGPROCESS::SetVailObject(v12, 0LL);
                  if ( v18 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v9);
          if ( v22 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
        }
      }
    }
    else if ( *((_QWORD *)this + 74) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGPROCESS *)((char *)this + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v13 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject(this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      if ( v18 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      if ( v13 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v13 + 5), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
        DXGVAILOBJECT::DisableVmBusChannel(v13);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v13);
        if ( v22 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v13);
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v15, (struct DXGPROCESS *)((char *)this + 104), 0);
    if ( v16 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v15, 0LL, 0LL);
    DXGFASTMUTEX::Acquire(v15);
    v16 = 1;
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27, 0);
    if ( !v16 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v15, 0LL, 0LL);
    v16 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v15);
    KeUnstackDetachProcess(&ApcState);
    Global = DXGGLOBAL::GetGlobal();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v19, (struct DXGGLOBAL *)((char *)Global + 368), 0);
    if ( (*((_DWORD *)this + 106) & 0x100) == 0 )
    {
      if ( v20 )
        WdLogSingleEntry5(0LL, 275LL, 4LL, &v19, 0LL, 0LL);
      DXGFASTMUTEX::Acquire(v19);
      v4 = *((_QWORD *)this + 7);
      v20 = 1;
      PsSetProcessDxgProcess(v4, 0LL);
    }
    v5 = (char *)DXGGLOBAL::GetGlobal() + 432;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v6 = (struct DXGPROCESS **)*((_QWORD *)this + 1);
    if ( v6[1] != (struct DXGPROCESS *)((char *)this + 8)
      || (v7 = (struct DXGPROCESS **)*((_QWORD *)this + 2), *v7 != (struct DXGPROCESS *)((char *)this + 8)) )
    {
      __fastfail(3u);
    }
    *v7 = (struct DXGPROCESS *)v6;
    v6[1] = (struct DXGPROCESS *)v7;
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    if ( (*((_DWORD *)this + 106) & 0x80) != 0 )
    {
      v14 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
      if ( v14 )
      {
        DXGVIRTUALMACHINE::OnVmwpDestruction(v14);
        *((_QWORD *)this + 76) = 0LL;
      }
    }
    DXGPROCESS::ReleaseReference(this);
    if ( v20 )
    {
      v20 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v19);
    }
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v15);
  }
}
