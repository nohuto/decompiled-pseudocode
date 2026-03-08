/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140580610
 * Callers:
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x140727C90 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
