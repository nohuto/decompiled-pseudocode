/*
 * XREFs of XmRcrOp @ 0x1404E6090
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

_WORD *__fastcall XmRcrOp(_DWORD *a1)
{
  int v2; // r8d
  int v3; // eax
  unsigned int v4; // r11d
  char v5; // cl
  unsigned int v6; // edx
  int v7; // r10d
  int v8; // r8d
  _WORD *result; // rax
  __int64 v10; // r9
  int v11; // r10d

  v2 = 8 * a1[30];
  v3 = a1[27];
  v4 = a1[26];
  v5 = v2 + 7;
  v6 = (v3 & 0x1Fu) % (v2 + 9);
  v7 = a1[4] & 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)v7 ^ (unsigned __int16)(v4 >> v5)) << 11)) & 0x800;
    do
    {
      v8 = v4 & 1;
      v4 = (v4 >> 1) | (v7 << v5);
      v7 = v8;
      --v6;
    }
    while ( v6 );
  }
  result = XmStoreResult((__int64)a1, v4);
  *(_DWORD *)(v10 + 16) = v11 | *(_DWORD *)(v10 + 16) & 0xFFFFFFFE;
  return result;
}
