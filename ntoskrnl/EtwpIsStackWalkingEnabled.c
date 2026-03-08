/*
 * XREFs of EtwpIsStackWalkingEnabled @ 0x14080E2D8
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14080DC50 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpIsStackWalkingEnabled(__int64 a1, __int16 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
    return (*(char *)(((unsigned __int64)(a2 & 0x1FFF) >> 3) + *(_QWORD *)(a1 + 1000)) >> (a2 & 7)) & 1;
  return v2;
}
