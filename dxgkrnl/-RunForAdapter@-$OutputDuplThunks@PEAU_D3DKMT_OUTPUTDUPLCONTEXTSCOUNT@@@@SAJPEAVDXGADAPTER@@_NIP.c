__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v6; // r14
  int IsRemoteSessionUsingXddmMonitors; // eax
  struct DXGADAPTER *v9; // rdi
  int v10; // r15d
  int OutputDuplManager; // eax
  unsigned int v12; // ebx
  struct OUTPUTDUPL_MGR *v13; // rbx
  char v14; // al
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v17; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v20; // [rsp+70h] [rbp-90h]
  char v21; // [rsp+78h] [rbp-88h]
  unsigned __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  v6 = a3;
  IsRemoteSessionUsingXddmMonitors = DxgIsRemoteSessionUsingXddmMonitors();
  v18 = 0LL;
  v9 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v10 = IsRemoteSessionUsingXddmMonitors;
  v17 = 0LL;
  if ( !a1 || IsRemoteSessionUsingXddmMonitors )
  {
    if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      WdLogSingleEntry1(1LL, 80LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
        80LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v13 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      WdLogSingleEntry1(2LL, 86LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find remote output duplication manager",
        86LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221226021LL;
    }
    goto LABEL_11;
  }
  OutputDuplManager = FindOutputDuplManager(a1, v6, &v18, &v23, &v17, &v22, &RemoteOutputDuplMgr);
  v12 = OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v9 = v17;
    v13 = RemoteOutputDuplMgr;
    if ( v17 )
    {
      v14 = 1;
      goto LABEL_12;
    }
LABEL_11:
    v14 = 0;
LABEL_12:
    v20 = v9;
    v21 = 0;
    if ( v14 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v9, 0LL);
    if ( a1 )
    {
      a1 = 0LL;
      if ( !v10 )
      {
        DXGADAPTER::ReleaseReference(v18);
        DXGADAPTER::ReleaseReference(v9);
        if ( *((_DWORD *)v9 + 50) != 1 )
        {
          v12 = -1073741130;
LABEL_22:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          if ( v21 != (_BYTE)a1 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
          return v12;
        }
        v13 = RemoteOutputDuplMgr;
      }
    }
    if ( (unsigned int)v6 < *((_DWORD *)v13 + 19) )
    {
      v12 = a5(v13, a4);
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid source ID 0x%I64x",
        v6,
        (__int64)a1,
        (__int64)a1,
        (__int64)a1,
        (__int64)a1);
      v12 = -1071774972;
    }
    goto LABEL_22;
  }
  WdLogSingleEntry2(3LL, a1, OutputDuplManager);
  return v12;
}
