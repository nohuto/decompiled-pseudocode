char __fastcall xxxShowWindowViaMinMax(const struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int8 v5; // di
  unsigned int v6; // ebp
  struct tagWND *v7; // rdx
  BOOL v8; // r8d
  char result; // al
  __int64 v10; // rcx
  __int128 v11; // [rsp+50h] [rbp-58h] BYREF
  __int64 v12; // [rsp+60h] [rbp-48h]
  unsigned int v13; // [rsp+68h] [rbp-40h]
  char v14; // [rsp+6Ch] [rbp-3Ch]
  __int128 v15; // [rsp+70h] [rbp-38h] BYREF

  v3 = a3;
  v5 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && IsSemiMaximized(a1);
  v6 = *(unsigned __int8 *)(a2 + 4);
  v12 = 0LL;
  v13 = -1;
  v11 = 0LL;
  v14 = 0;
  v15 = 0LL;
  xxxMinMaximizeEx(a1, v6, a3, &v11);
  if ( (v3 & 0x20) != 0 )
  {
    LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v7,
        v8,
        (_DWORD)gFullLog,
        4,
        22,
        15,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        (char)a1,
        v6);
    LOBYTE(v7) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v7, v8);
  }
  if ( v14 )
    ShellWindowPos::NotifyPosAndStateApplied(a1, 2LL, &v15, v13);
  result = IsSemiMaximized(a1);
  if ( v5 != result )
    return NotifyShell::ArrangementCompleted(v10, v13, (unsigned int)v5 + 1);
  return result;
}
