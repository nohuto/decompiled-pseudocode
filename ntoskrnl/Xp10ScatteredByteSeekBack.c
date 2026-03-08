/*
 * XREFs of Xp10ScatteredByteSeekBack @ 0x1409C5170
 * Callers:
 *     Xp10ScatteredCopyFromPrevious @ 0x1409C54BC (Xp10ScatteredCopyFromPrevious.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10ScatteredByteSeekBack(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r10
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rcx
  __int64 result; // rax

  v2 = a1[3];
  v4 = a1[4];
  v5 = *a1;
  v6 = a1[1];
  v7 = a1[2];
  for ( i = *(_QWORD *)(v4 + 16 * v2); v5 - i < (unsigned __int64)a2; v5 = v9 + i )
  {
    a2 -= v5 - i;
    if ( !a2 )
      goto LABEL_8;
    if ( !v2 )
      return 0LL;
    --v2;
    v9 = *(_QWORD *)(v4 + 16 * v2 + 8);
    i = *(_QWORD *)(v4 + 16 * v2);
    v7 -= v9;
    v6 = v9 + i;
  }
  v5 -= a2;
LABEL_8:
  *a1 = v5;
  result = 1LL;
  a1[1] = v6;
  a1[3] = v2;
  a1[2] = v7;
  return result;
}
