/*
 * XREFs of Xp10ScatteredNextBuffer @ 0x1409C5514
 * Callers:
 *     Xp10ExecuteHuffmanDecode @ 0x1409C2EF0 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ScatteredCopy @ 0x1409C5208 (Xp10ScatteredCopy.c)
 *     Xp10ScatteredCopyBits @ 0x1409C52B8 (Xp10ScatteredCopyBits.c)
 *     Xp10ScatteredReadBytes @ 0x1409C5568 (Xp10ScatteredReadBytes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ScatteredNextBuffer(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx

  if ( *a1 == a1[1] )
  {
    v2 = a1[3];
    v3 = v2 + 1;
    if ( (unsigned __int64)(v2 + 1) >= a1[5] )
      return 0LL;
    v5 = a1[4];
    a1[2] += *(_QWORD *)(v5 + 16 * v2 + 8);
    a1[3] = v3;
    v6 = 2 * v3;
    v7 = *(_QWORD *)(v5 + 8 * v6);
    *a1 = v7;
    a1[1] = *(_QWORD *)(v5 + 8 * v6 + 8) + v7;
  }
  return 1LL;
}
