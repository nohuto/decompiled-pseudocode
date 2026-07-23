/*
 * XREFs of MiInitializeDecayPfns @ 0x140A68188
 * Callers:
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  if ( ((unsigned __int8)&stru_140C4E9B0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  stru_140C4E9B0 = 0LL;
  v0 = 48 * qword_140C4E9A0 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&stru_140C4E9B0, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}
