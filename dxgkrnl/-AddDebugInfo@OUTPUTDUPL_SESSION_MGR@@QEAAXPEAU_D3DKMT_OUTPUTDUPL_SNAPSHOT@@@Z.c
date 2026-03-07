void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = **((_QWORD **)this + 7);
  if ( !v6 )
  {
    WdLogSingleEntry1(1LL, 4125LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcesses", 4125LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = *((_DWORD *)this + 1);
  if ( v7 )
  {
    v8 = v7;
    do
    {
      if ( *(_QWORD *)(v6 + 8) && *(_DWORD *)v6 )
      {
        ++v4;
        v5 += *(_DWORD *)v6;
      }
      v6 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  v9 = v10[8] == 0;
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  if ( !v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
