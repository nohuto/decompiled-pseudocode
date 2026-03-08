/*
 * XREFs of FsRtlGetIoAtEof @ 0x1402CD7A0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 */

__int64 __fastcall FsRtlGetIoAtEof(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
    *a6 = 1;
    return 0LL;
  }
  v7 = a3 + a4;
  if ( a3 < 0 )
    v7 = a3;
  if ( !*(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
    *a6 = 1;
    return 0LL;
  }
  if ( !a5 )
    return 3221225556LL;
  *a6 = FsRtlpWaitForIoAtEof(a1, a2, v7);
  return 0LL;
}
