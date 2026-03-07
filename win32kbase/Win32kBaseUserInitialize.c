__int64 __fastcall Win32kBaseUserInitialize(HANDLE Handle, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  PDEVICE_OBJECT v5; // rcx
  char v6; // di
  void *v7; // r9
  __int64 BugCheckParameter4; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // ebx
  int v19; // r8d

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v7 = &WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids;
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
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  if ( gpepCSRSS )
    return 3221225473LL;
  BugCheckParameter4 = PsGetCurrentProcess(v5, a2, a3, v7);
  if ( qword_1C02D6FD0 && (int)qword_1C02D6FD0() >= 0 && (!qword_1C02D6FD8 || !(unsigned __int8)qword_1C02D6FD8()) )
    KeBugCheckEx(0x91u, 0LL, 0LL, 0LL, BugCheckParameter4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpepCSRSS, BugCheckParameter4, 0LL) )
    return 3221225473LL;
  ObfReferenceObject(gpepCSRSS);
  result = InitializePowerRequestList(Handle);
  if ( (int)result >= 0 )
  {
    if ( !qword_1C02D6FE0 || (int)qword_1C02D6FE0() < 0 )
      goto LABEL_18;
    if ( !qword_1C02D6FE8 )
      return 3221225659LL;
    result = qword_1C02D6FE8(v3);
    if ( (int)result >= 0 )
    {
LABEL_18:
      *(_BYTE *)(SGDGetUserSessionState(v11, v10, v12, v13) + 788) = 0;
      if ( (unsigned int)InitializeGreCSRSS() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(gpepCSRSS);
        if ( ProcessWin32Process )
          ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
        v15 = PsGetProcessWin32Process(gpepCSRSS);
        if ( v15 )
          v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
        *(_DWORD *)(v15 + 812) |= 0x400000u;
        v16 = PsGetProcessWin32Process(gpepCSRSS);
        if ( v16 )
          v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
        *(_DWORD *)(v16 + 280) = 18;
        v18 = UserInitialize();
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = v6;
          LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v19,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            14,
            30,
            (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
        }
        return v18;
      }
      return 3221225473LL;
    }
  }
  return result;
}
