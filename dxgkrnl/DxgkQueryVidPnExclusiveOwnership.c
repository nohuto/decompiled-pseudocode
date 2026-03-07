__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  _OWORD *v9; // rax
  void *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  struct DXGGLOBAL *Global; // rax
  int v16; // eax
  _QWORD *v17; // rdx
  _DWORD *v18; // rdx
  _DWORD *v19; // rdx
  int v20; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-F0h]
  char v22; // [rsp+60h] [rbp-E8h]
  struct DXGPROCESS *Process; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-D8h]
  int v25; // [rsp+78h] [rbp-D0h]
  __int64 v26; // [rsp+7Ch] [rbp-CCh]
  int v27; // [rsp+84h] [rbp-C4h]
  _BYTE v28[24]; // [rsp+88h] [rbp-C0h] BYREF
  void *v29[2]; // [rsp+A0h] [rbp-A8h]
  __int128 v30; // [rsp+B0h] [rbp-98h]
  __int128 v31; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v32[80]; // [rsp+D0h] [rbp-78h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2126);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v29 = *v9;
    v30 = v9[1];
    v24 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v25 = -1;
    v10 = v29[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32, v29[0], 4096);
    LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
    if ( (_DWORD)v11 == -1073741790 )
    {
      DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission((DXGPROCESSMUTEXBYHANDLE *)v32);
      LODWORD(v11) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v32, 1);
    }
    if ( (int)v11 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v32);
      v14 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v28, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v28, 1u);
      v31 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v14 + 360))(v29[1], &v31) )
      {
        LODWORD(v24) = (DWORD2(v31) + (int)v31) / 2;
        HIDWORD(v24) = (DWORD1(v31) + HIDWORD(v31)) / 2;
        Global = DXGGLOBAL::GetGlobal();
        v16 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)&Process,
                4);
        v11 = v16;
        if ( v16 < 0 )
        {
          if ( (*((_DWORD *)DXGGLOBAL::GetGlobal() + 420) & 2) != 0 )
            WdLogSingleEntry5(0LL, 275LL, 33LL, v11, 0LL, 0LL);
        }
        else
        {
          v17 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v17 = (_QWORD *)MmUserProbeAddress;
          *v17 = v26;
          v18 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v18 = (_DWORD *)MmUserProbeAddress;
          *v18 = v25;
          v19 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v19 = (_DWORD *)MmUserProbeAddress;
          *v19 = v27;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 10540LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
          10540LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v28);
    }
    else
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find DxgProcess for process handle 0x%I64x",
        (__int64)v10,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v20);
    return (unsigned int)v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10496LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 10496LL, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v20);
    }
    return 3221225485LL;
  }
}
