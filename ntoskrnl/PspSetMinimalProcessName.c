/*
 * XREFs of PspSetMinimalProcessName @ 0x140817F50
 * Callers:
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PspSetProcessShortName @ 0x1407069F8 (PspSetProcessShortName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rdi
  void *v6; // rcx

  Pool2 = ExAllocatePool2(64LL, *(unsigned __int16 *)a2 + 16LL, 1850307408LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
  *(_WORD *)Pool2 = *(_WORD *)a2;
  *(_WORD *)(Pool2 + 2) = *(_WORD *)a2;
  memmove((void *)(Pool2 + 16), a2[1], *(unsigned __int16 *)a2);
  v6 = *(void **)(a1 + 1472);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *(_QWORD *)(a1 + 1472) = v5;
  PspSetProcessShortName(a1, (unsigned __int16 *)a2);
  return 0LL;
}
