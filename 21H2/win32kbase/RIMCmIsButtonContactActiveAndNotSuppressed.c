/*
 * XREFs of RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01B688C
 * Callers:
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0187540 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimFinalizePointerFlags @ 0x1C01B0BC4 (rimFinalizePointerFlags.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall RIMCmIsButtonContactActiveAndNotSuppressed(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  if ( *(_DWORD *)(a1 + 24) != 7 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 968);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 32) & 2) != 0 )
    return (unsigned int)RIMCmIsContactSuppressed(v1) == 0;
  return v2;
}
