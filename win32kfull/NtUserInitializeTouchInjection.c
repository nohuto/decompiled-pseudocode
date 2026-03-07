__int64 __fastcall NtUserInitializeTouchInjection(unsigned int a1, unsigned int a2)
{
  int v3; // ebx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rbp
  int v8; // ecx
  char v10; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v10);
  InputExtensibilityCalloutGuard();
  v6 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        19,
        2,
        20,
        19,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v8 = 5;
    goto LABEL_14;
  }
  if ( a1 - 1 > 0xFF || a2 - 1 > 2 )
  {
    v8 = 87;
LABEL_14:
    UserSetLastError(v8);
    goto LABEL_15;
  }
  CheckCurrentInjectionConfiguration();
  v3 = InitializeTouchInjectionWorker(a1, a2, v7);
LABEL_15:
  LeaveCrit();
  return v3;
}
