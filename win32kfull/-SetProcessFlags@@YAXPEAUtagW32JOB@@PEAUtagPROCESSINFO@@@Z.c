/*
 * XREFs of ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D948C
 * Callers:
 *     ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C00D4F70 (-UpdateJob@@YAXPEAUtagW32JOB@@@Z.c)
 *     ?JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C00D938C (-JobCalloutAddProcessWorker@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqD @ 0x1C00D95FC (WPP_RECORDER_AND_TRACE_SF_qqD.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00D975C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall SetProcessFlags(struct tagW32JOB *a1, struct tagW32JOB **a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  _DWORD *v7; // rdi
  unsigned int v8; // edx
  struct tagW32JOB *v9; // rdx
  char v10[8]; // [rsp+60h] [rbp-98h] BYREF
  struct tagW32JOB *v11; // [rsp+68h] [rbp-90h]
  struct tagW32JOB **v12; // [rsp+88h] [rbp-70h]
  _DWORD *v13; // [rsp+90h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-50h] BYREF

  v12 = a2;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (_DWORD *)((char *)a1 + 24);
  }
  else
  {
    v7 = (_DWORD *)((char *)a1 + 24);
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, v4, v5, v6);
  }
  v13 = v7;
  if ( a2[95] != a1 )
  {
    LODWORD(v11) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 364LL);
  }
  v8 = *((_DWORD *)a2 + 3) & 0xFDFFFFFF;
  if ( *v7 )
    v8 = *((_DWORD *)a2 + 3) | 0x2000000;
  *((_DWORD *)a2 + 3) = v8;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*a2, &ApcState);
  v9 = a2[40];
  v11 = v9;
  if ( *v7 )
  {
    while ( v9 )
    {
      *(_DWORD *)(*((_QWORD *)v9 + 60) + 28LL) |= 0x20000000u;
      *((_DWORD *)v9 + 122) |= 0x20000000u;
      v9 = (struct tagW32JOB *)*((_QWORD *)v9 + 83);
      v11 = v9;
    }
    if ( (*v7 & 0x100) != 0 )
      UserDisableImeForProcess((struct tagPROCESSINFO *)a2);
  }
  else
  {
    while ( v9 )
    {
      *(_DWORD *)(*((_QWORD *)v9 + 60) + 28LL) &= ~0x20000000u;
      *((_DWORD *)v9 + 122) &= ~0x20000000u;
      v9 = (struct tagW32JOB *)*((_QWORD *)v9 + 83);
      v11 = v9;
    }
  }
  KeUnstackDetachProcess(&ApcState);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
}
