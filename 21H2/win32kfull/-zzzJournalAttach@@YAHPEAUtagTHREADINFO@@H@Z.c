/*
 * XREFs of ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E694C
 * Callers:
 *     zzzUnhookWindowsHookEx @ 0x1C001FAF4 (zzzUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C001FCE8 (zzzSetWindowsHookEx.c)
 *     zzzRegisterSystemThread @ 0x1C0162180 (zzzRegisterSystemThread.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 */

__int64 __fastcall zzzJournalAttach(struct tagTHREADINFO *a1, int a2)
{
  __int64 result; // rax
  _QWORD **v5; // rcx
  _QWORD *i; // rdx

  if ( a2 )
  {
    result = AllocQueue(a1, 0LL);
    if ( !result )
      return result;
    v5 = (_QWORD **)(*((_QWORD *)a1 + 57) + 168LL);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 32) & 0x81) == 0 )
      {
        *(i - 11) = result;
        ++*(_DWORD *)(result + 392);
      }
    }
  }
  zzzReattachThreads(a2 != 0, 0LL, 0LL);
  return 1LL;
}
