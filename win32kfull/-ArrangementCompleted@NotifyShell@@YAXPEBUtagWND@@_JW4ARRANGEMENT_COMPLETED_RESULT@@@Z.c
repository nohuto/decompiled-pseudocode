__int64 __fastcall NotifyShell::ArrangementCompleted(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebp
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  const char *v8; // rax
  unsigned __int16 WindowTrackState; // si
  int v10; // ebx
  __int64 v11; // rcx

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v3 == 1 )
    {
      v8 = "ACR_ARRANGED";
    }
    else
    {
      v8 = "ACR_DISARRANGED";
      if ( v3 != 2 )
        v8 = "ACR_NONE";
    }
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      a3,
      (__int64)gFullLog,
      4u,
      1u,
      0x13u,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      *a1,
      v8);
  }
  WindowTrackState = 0;
  if ( (_WORD)v3 == 2 )
  {
    LOBYTE(a2) = 1;
    WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2, a3);
  }
  v10 = 0;
  if ( *((_QWORD *)PtiCurrentShared((__int64)v6) + 84) )
    v10 = *((_DWORD *)PtiCurrentShared(v11) + 322) & 0x1F;
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           2,
           (unsigned __int16)v3 | ((WindowTrackState | (unsigned int)(16 * v10)) << 16),
           v4,
           0);
}
