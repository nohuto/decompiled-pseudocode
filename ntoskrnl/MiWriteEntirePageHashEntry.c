/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x14066481C
 * Callers:
 *     MiWritePageFileHash @ 0x1404670A6 (MiWritePageFileHash.c)
 *     MiClearPageFileHash @ 0x1406635B0 (MiClearPageFileHash.c)
 *     MiLateWritePageHash @ 0x140663AE8 (MiLateWritePageHash.c)
 *     MiUpdatePageFileBlockOwner @ 0x1406646BC (MiUpdatePageFileBlockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140C692D0 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
