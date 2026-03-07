void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGSESSIONMGR *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbx
  int v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h]
  char v22; // [rsp+68h] [rbp-11h]
  _QWORD v23[10]; // [rsp+70h] [rbp-9h] BYREF

  v20 = -1;
  v21 = 0LL;
  v4 = (unsigned __int8)a1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2199);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2199);
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    LOBYTE(v6) = 1;
    DXGSESSIONMGR::SetConsoleSession(*((CTTMDEVICE ***)Global + 118), v6, v7, v8);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) )
    {
      memset(v23, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v23[1]);
      v23[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v23[3]) = 63;
      LOBYTE(v23[6]) = -1;
      v18 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23, 0x200000000uLL);
      if ( v18 < 0 )
      {
        v19 = v18;
        WdLogSingleEntry1(2LL, v18);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v19,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) = 0;
    }
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v11 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v12, v13);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
  }
}
