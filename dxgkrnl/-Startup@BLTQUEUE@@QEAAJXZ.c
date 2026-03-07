__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 v3; // rbx
  _DWORD *v4; // rax
  __int64 Timer; // rax
  __int64 v6; // rax
  NTSTATUS v7; // eax
  const wchar_t *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  LODWORD(v3) = 0;
  v4 = StartContext + 136;
  if ( v2 )
  {
    if ( *v4 != 1 || (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 109) & 0x100) == 0 )
    {
LABEL_3:
      Timer = ExAllocateTimer(0LL, 0LL, 0LL);
      *((_QWORD *)StartContext + 19) = Timer;
      if ( Timer )
      {
        v6 = ExAllocateTimer(0LL, 0LL, 4LL);
        *((_QWORD *)StartContext + 18) = v6;
        if ( v6 )
        {
          BLTQUEUE::RecreateVsyncSource(StartContext, 0LL, 12LL);
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v7 = PsCreateSystemThread(
                 (PHANDLE)StartContext + 76,
                 0x1FFFFFu,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 BLTQUEUE::BltQueueWorkerThread,
                 StartContext);
          v3 = v7;
          if ( v7 < 0 )
          {
            WdLogSingleEntry2(2LL, StartContext, v7);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"BLTQUEUE 0x%I64x : PsCreateSystemThread() failed with Status = 0x%I64x",
              (__int64)StartContext,
              v3,
              0LL,
              0LL,
              0LL);
            v11 = *((_QWORD *)StartContext + 18);
            LODWORD(v3) = -1073741801;
            if ( v11 )
            {
              LOBYTE(v10) = 1;
              ExDeleteTimer(v11, v10, 0LL, 0LL);
              *((_QWORD *)StartContext + 18) = 0LL;
            }
            v12 = *((_QWORD *)StartContext + 19);
            if ( v12 )
            {
              LOBYTE(v10) = 1;
              ExDeleteTimer(v12, v10, 0LL, 0LL);
              *((_QWORD *)StartContext + 19) = 0LL;
            }
          }
          else
          {
            KeWaitForSingleObject(StartContext + 496, Executive, 0, 0, 0LL);
          }
          return (unsigned int)v3;
        }
        WdLogSingleEntry1(6LL, StartContext);
        v9 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for normal res timer.";
      }
      else
      {
        WdLogSingleEntry1(6LL, StartContext);
        v9 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for high res timer.";
      }
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v9, (__int64)StartContext, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v3;
    }
    WdLogSingleEntry1(1LL, 868LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Indirect displays cannot currently support HW VSync",
      868LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  else
  {
    if ( *v4 != 1 )
      goto LABEL_3;
    WdLogSingleEntry1(2LL, 862LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"A BLTQUEUE must have a pointer to the DoDPresent if HW Vsync is used",
      862LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
