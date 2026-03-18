/*
 * XREFs of Win32kBaseUserInitialize @ 0x1C013FAD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     InitializeGreCSRSS @ 0x1C00A9010 (InitializeGreCSRSS.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     InitializePowerRequestList @ 0x1C02DD1F0 (InitializePowerRequestList.c)
 */

__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  PDEVICE_OBJECT v5; // rcx
  char v6; // di
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // ebx
  int v18; // r8d

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      29,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(v5, a2, a3);
  if ( qword_1C0295E58 && (int)qword_1C0295E58() >= 0 && (!qword_1C0295E60 || !(unsigned __int8)qword_1C0295E60()) )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result < 0 )
    return result;
  if ( qword_1C0295E68 && (int)qword_1C0295E68() >= 0 )
  {
    if ( !qword_1C0295E70 )
      return 3221225659LL;
    result = qword_1C0295E70(v3);
    if ( (int)result < 0 )
      return result;
  }
  *(_BYTE *)(SGDGetUserSessionState(v10, v9, v11, v12) + 788) = 0;
  if ( !(unsigned int)InitializeGreCSRSS() )
    return 3221225473LL;
  ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
  if ( ProcessWin32Process )
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v14 = PsGetProcessWin32Process(gpepCSRSS);
  if ( v14 )
    v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
  *(_DWORD *)(v14 + 816) |= 0x400000u;
  v15 = PsGetProcessWin32Process(gpepCSRSS);
  if ( v15 )
    v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
  *(_DWORD *)(v15 + 280) = 18;
  v17 = UserInitialize();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = v6;
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v18,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      30,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  }
  return v17;
}
