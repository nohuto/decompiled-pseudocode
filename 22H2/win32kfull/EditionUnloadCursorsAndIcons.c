/*
 * XREFs of EditionUnloadCursorsAndIcons @ 0x1C012C140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 */

void __fastcall EditionUnloadCursorsAndIcons(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rsi
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a1, 4, 9, 10, (__int64)&WPP_fa2cb857af273f1c9fc7df7b6f9bea47_Traceguids);
  v1 = (__int64 *)&unk_1C032FD08;
  v2 = 7LL;
  v3 = (char *)&unk_1C032FD08;
  do
  {
    if ( *v1 )
    {
      v4 = *v1;
      *(_QWORD *)(v4 + 24) = PsGetCurrentProcessWin32Process(a1);
      HMAssignmentUnlock(v3);
    }
    v3 += 552;
    v1 += 69;
    --v2;
  }
  while ( v2 );
  v5 = 0LL;
  v6 = 0LL;
  v7 = 19LL;
  do
  {
    v8 = *(_QWORD *)(v5 + gasyscur[0] + 8);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 24) = PsGetCurrentProcessWin32Process(a1);
      HMAssignmentUnlock(&gasyscur[v6 + 1]);
    }
    v6 += 69LL;
    v5 += 552LL;
    --v7;
  }
  while ( v7 );
  if ( gpCursorSizes )
    Win32FreePool(gpCursorSizes);
  gpCursorSizes = 0LL;
}
