__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // esi
  struct _EJOB *v3; // r12
  struct tagPROCESSINFO *v4; // r14
  __int64 v5; // rbp
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  struct tagW32JOB *i; // rbx
  PDEVICE_OBJECT v11; // rcx
  void *v12; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  struct tagPROCESSINFO *ProcessWin32Process; // rax
  void *v16; // rdx
  void *v17; // rdx
  void *v18; // rdx
  void *v19; // rdx
  char v20; // [rsp+90h] [rbp+8h] BYREF
  char v21; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(struct _EJOB **)a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  if ( v1 == 1 )
  {
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
    v4 = ProcessWin32Process;
    if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
      return 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v21);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v3; i = *(struct tagW32JOB **)i )
    ;
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      if ( v1 == 2 )
      {
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = &WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids;
          LOBYTE(v12) = v6;
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v12,
            v8,
            (_DWORD)gFullLog,
            4,
            13,
            13,
            (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
            (char)v3,
            (char)i);
        }
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = &WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids;
          LOBYTE(v17) = v6;
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v17, v8, v9);
        }
        v2 = -1073741822;
      }
      goto LABEL_20;
    }
    if ( i )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = &WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids;
        LOBYTE(v16) = v6;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v16,
          v8,
          (_DWORD)gFullLog,
          4,
          13,
          12,
          (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
          (char)v3,
          (char)i,
          v5);
      }
      JobCalloutAddProcess(i, v4);
      goto LABEL_20;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = &WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids;
      LOBYTE(v18) = v6;
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v18,
        v8,
        v9,
        4,
        13,
        11,
        (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
        (char)v3);
    }
    goto LABEL_54;
  }
  if ( i )
  {
    if ( (_DWORD)v5 == *((_DWORD *)i + 6) )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = &WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids;
        LOBYTE(v19) = v6;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v19,
          v8,
          v9,
          4,
          13,
          10,
          (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids);
      }
      goto LABEL_20;
    }
  }
  else
  {
    i = CreateW32Job(v3, v7, v8, v9);
    if ( !i )
    {
LABEL_54:
      v2 = -1073741823;
      goto LABEL_20;
    }
  }
  *((_DWORD *)i + 6) = v5;
  UpdateJob(i);
LABEL_20:
  if ( v20 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11);
    --*(_DWORD *)(CurrentThreadWin32Thread + 48);
  }
  if ( !v21 )
    UserSessionSwitchLeaveCrit(v11);
  return v2;
}
