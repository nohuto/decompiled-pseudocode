void __fastcall DxgSetPowerComponentActiveNoWaitForceAsyncCB(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  DXGADAPTER *v5; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rbx
  struct _KPROCESS *ThreadProcess; // rax
  char v10; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v10 = 0;
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 421) )
      {
        Global = DXGGLOBAL::GetGlobal();
        SessionData = DXGGLOBAL::GetSessionData(Global);
        if ( SessionData )
        {
          v8 = *((_QWORD *)SessionData + 2340);
          if ( v8 == PsGetCurrentProcess() )
          {
            ThreadProcess = PsGetThreadProcess(KeGetCurrentThread());
            if ( ThreadProcess )
            {
              KeStackAttachProcess(ThreadProcess, &ApcState);
              v10 = 1;
            }
          }
        }
      }
    }
  }
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
    {
      v5 = *(DXGADAPTER **)(v4 + 3912);
      goto LABEL_7;
    }
    WdLogSingleEntry1(2LL, a1);
  }
  else
  {
    WdLogSingleEntry0(2LL);
  }
  v5 = 0LL;
LABEL_7:
  if ( a2 >= *((_DWORD *)v5 + 792) )
    WdLogSingleEntry5(0LL, 275LL, 23LL, v5, 0LL, 0LL);
  DXGADAPTER::SetPowerComponentActiveCBWorker(v5, a2, 0, 2u);
  if ( v10 )
    KeUnstackDetachProcess(&ApcState);
}
