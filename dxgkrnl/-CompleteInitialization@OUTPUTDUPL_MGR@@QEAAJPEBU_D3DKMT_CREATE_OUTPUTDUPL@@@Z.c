__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  struct DXGFASTMUTEX *v3; // rbx
  __int64 v4; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v15[2]; // [rsp+60h] [rbp-28h] BYREF

  v3 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v3, CurrentProcess, 0LL);
  if ( ContextForProcess )
  {
    *((_DWORD *)*ContextForProcess + 79) = 1;
    if ( *((_DWORD *)v3 + 16) >= *((_DWORD *)this + 2) )
    {
      WdLogSingleEntry1(1LL, 1604LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pContextList->cActiveContexts < m_MaxActiveOutputDuplApps",
        1604LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ++*((_DWORD *)v3 + 16);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[0]) = 15;
    SMgrGdiCallout(v15, CurrentProcessSessionId, 0LL, 0LL, 0LL, 0LL);
    v12 = 0;
  }
  else
  {
    v12 = -1073741275;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v12;
}
