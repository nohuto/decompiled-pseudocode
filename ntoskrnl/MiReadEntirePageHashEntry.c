/*
 * XREFs of MiReadEntirePageHashEntry @ 0x140664630
 * Callers:
 *     MiObtainPagefileHashes @ 0x140466CF4 (MiObtainPagefileHashes.c)
 *     MiLateWritePageHash @ 0x140663AE8 (MiLateWritePageHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadEntirePageHashEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  result = 0LL;
  if ( dword_140C692D0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    result = *(unsigned int *)(a1 + 4);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
