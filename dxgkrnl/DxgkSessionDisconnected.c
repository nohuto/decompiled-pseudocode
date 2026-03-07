void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v8; // rbx
  int v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  char v11; // [rsp+30h] [rbp-20h]
  _BYTE v12[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+48h] [rbp-8h]
  union _LARGE_INTEGER v15; // [rsp+68h] [rbp+18h] BYREF

  v9 = -1;
  v3 = a1;
  v10 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2198);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v15.QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, &v15, 0x81u);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_,
      0LL,
      0);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v8 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v13);
      *((_DWORD *)v8 + 18) = 0;
      v14 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v8);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v9);
  }
}
