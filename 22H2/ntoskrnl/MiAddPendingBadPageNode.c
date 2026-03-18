/*
 * XREFs of MiAddPendingBadPageNode @ 0x140629758
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    *(_QWORD *)(a2 + 24) = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67410);
  if ( !a2 )
  {
    ++qword_140C67418;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140C67400;
  if ( !qword_140C67400 )
    goto LABEL_11;
  while ( a1 < v5[3] )
  {
    v6 = (_QWORD *)*v5;
    if ( !*v5 )
      goto LABEL_11;
LABEL_9:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[1];
  if ( v6 )
    goto LABEL_9;
  v2 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C67400, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140C67408;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67410);
}
