/*
 * XREFs of UserJobCallout @ 0x1C0101E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C010206C (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C010212C (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C01022A4 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1C01025B0 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C021ADE4 (WPP_RECORDER_AND_TRACE_SF_Dq.c)
 */

__int64 __fastcall UserJobCallout(__int64 a1)
{
  int v1; // r14d
  unsigned int v2; // esi
  struct _EJOB *v3; // r12
  struct tagPROCESSINFO *v4; // r15
  __int64 v5; // rbp
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  struct tagW32JOB *i; // rbx
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  void *v14; // rdx
  void *v15; // rdx
  void *v16; // rdx
  char v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  v3 = *(struct _EJOB **)a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  if ( v1 == 1 )
  {
    result = PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
    v4 = (struct tagPROCESSINFO *)result;
    if ( !result )
      return result;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v18);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  for ( i = (struct tagW32JOB *)gpJobsList; i && *((struct _EJOB **)i + 1) != v3; i = *(struct tagW32JOB **)i )
    ;
  if ( v1 )
  {
    if ( v1 != 1 )
    {
      if ( v1 == 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = &WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids;
          LOBYTE(v11) = v6;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v11,
            v8,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            13,
            13,
            (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
            (char)v3,
            i);
        }
        if ( i )
          JobCalloutTerminate(i);
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = &WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids;
          LOBYTE(v14) = v6;
          WPP_RECORDER_AND_TRACE_SF_Dq(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)v14, v8, v9);
        }
        v2 = -1073741822;
      }
      goto LABEL_15;
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
        WPP_RECORDER_AND_TRACE_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          0xDu,
          0xCu,
          (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
          v3,
          i,
          v5);
      JobCalloutAddProcess(i, v4);
      goto LABEL_15;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = &WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids;
      LOBYTE(v15) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v15,
        v8,
        v9,
        4,
        13,
        11,
        (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids,
        (char)v3);
    }
    goto LABEL_50;
  }
  if ( i )
  {
    if ( (_DWORD)v5 == *((_DWORD *)i + 6) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = &WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids;
        LOBYTE(v16) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v16,
          v8,
          v9,
          4,
          13,
          10,
          (__int64)&WPP_0742a17b01c83834b82bef7f0a5be2d9_Traceguids);
      }
      goto LABEL_15;
    }
  }
  else
  {
    i = CreateW32Job(v3);
    if ( !i )
    {
LABEL_50:
      v2 = -1073741823;
      goto LABEL_15;
    }
  }
  *((_DWORD *)i + 6) = v5;
  UpdateJob(i);
LABEL_15:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v7, v8);
  if ( !v18 )
    UserSessionSwitchLeaveCrit(v12);
  return v2;
}
