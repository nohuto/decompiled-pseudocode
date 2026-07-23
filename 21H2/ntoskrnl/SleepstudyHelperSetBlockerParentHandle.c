/*
 * XREFs of SleepstudyHelperSetBlockerParentHandle @ 0x1402502D0
 * Callers:
 *     <none>
 * Callees:
 *     SshpDereferenceBlocker @ 0x140617024 (SshpDereferenceBlocker.c)
 *     SshpReferenceBlocker @ 0x14061FA14 (SshpReferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerParentHandle(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( *(_QWORD *)(a1 + 64) )
      SshpDereferenceBlocker();
    *(_QWORD *)(a1 + 64) = a2;
    SshpReferenceBlocker(a2);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
