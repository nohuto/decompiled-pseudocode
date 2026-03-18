/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1C0117B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 EditionUnloadCursorsAndIcons()
{
  PDEVICE_OBJECT v0; // rcx
  bool v1; // dl
  __int64 *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbp

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
      (__int64)&WPP_e6b8afda6952385f49d9543783496765_Traceguids);
  v2 = (__int64 *)&unk_1C032C038;
  v3 = 7LL;
  v4 = (char *)&unk_1C032C038;
  do
  {
    if ( *v2 )
    {
      v5 = *v2;
      *(_QWORD *)(v5 + 24) = PsGetCurrentProcessWin32Process(v0);
      HMAssignmentUnlock(v4);
    }
    v4 += 552;
    v2 += 69;
    --v3;
  }
  while ( v3 );
  v6 = 0LL;
  v7 = 0LL;
  v8 = 19LL;
  do
  {
    result = gasyscur[0];
    v10 = *(_QWORD *)(v6 + gasyscur[0] + 8);
    if ( v10 )
    {
      *(_QWORD *)(v10 + 24) = PsGetCurrentProcessWin32Process(v0);
      result = HMAssignmentUnlock(&gasyscur[v7 + 1]);
    }
    v7 += 69LL;
    v6 += 552LL;
    --v8;
  }
  while ( v8 );
  if ( gpCursorSizes )
    result = Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
  return result;
}
