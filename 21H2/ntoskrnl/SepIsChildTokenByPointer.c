/*
 * XREFs of SepIsChildTokenByPointer @ 0x14069532C
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 */

__int64 __fastcall SepIsChildTokenByPointer(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rbx

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
  if ( !v6 )
    return 3221225473LL;
  v7 = *(_QWORD *)(v6 + 16);
  ObFastDereferenceObject((signed __int64 *)(Process + 1208), v6, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 32) == v7 )
    *a2 = 1;
  return 0LL;
}
