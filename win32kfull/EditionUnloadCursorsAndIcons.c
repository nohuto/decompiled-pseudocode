void EditionUnloadCursorsAndIcons()
{
  PDEVICE_OBJECT v0; // rcx
  bool v1; // dl
  __int64 *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax

  v0 = WPP_GLOBAL_Control;
  v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      10,
      4,
      9,
      10,
      (__int64)&WPP_e4b9095c06a535c7213ed4184ebce5d5_Traceguids);
  v2 = (__int64 *)&unk_1C035C228;
  v3 = 7LL;
  v4 = (char *)&unk_1C035C228;
  do
  {
    v5 = *v2;
    if ( *v2 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v0);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      *(_QWORD *)(v5 + 24) = CurrentProcessWin32Process;
      HMAssignmentUnlock(v4);
    }
    v4 += 552;
    v2 += 69;
    --v3;
  }
  while ( v3 );
  v7 = 0LL;
  v8 = 0LL;
  v9 = 19LL;
  do
  {
    v10 = *(_QWORD *)(v7 + gasyscur[0] + 8);
    if ( v10 )
    {
      v11 = PsGetCurrentProcessWin32Process(v0);
      if ( v11 )
        v11 &= -(__int64)(*(_QWORD *)v11 != 0LL);
      *(_QWORD *)(v10 + 24) = v11;
      HMAssignmentUnlock(&gasyscur[v8 + 1]);
    }
    v8 += 69LL;
    v7 += 552LL;
    --v9;
  }
  while ( v9 );
  if ( gpCursorSizes )
    Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
}
