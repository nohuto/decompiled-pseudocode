/*
 * XREFs of XmRclOp @ 0x1404E5FC0
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

_WORD *__fastcall XmRclOp(_DWORD *a1)
{
  int v1; // edx
  char v2; // bl
  unsigned int v3; // r8d
  unsigned int v4; // edx
  int v5; // r10d
  unsigned int v6; // r11d
  unsigned int v7; // eax
  _WORD *result; // rax
  __int64 v9; // r9
  unsigned __int8 v10; // r10

  v1 = a1[30];
  v2 = 8 * v1 + 7;
  v3 = a1[26];
  v4 = (a1[27] & 0x1Fu) % (8 * v1 + 9);
  v5 = a1[4] & 1;
  v6 = v4;
  if ( v4 )
  {
    if ( v4 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)(v3 >> v2) ^ (unsigned __int16)(v3 >> (v2 - 1))) << 11)) & 0x800;
    do
    {
      v7 = v3 >> v2;
      v3 = v5 | (((1 << v2) - 1) | (1 << v2)) & (2 * v3);
      v5 = v7;
      --v6;
    }
    while ( v6 );
  }
  result = XmStoreResult((__int64)a1, v3);
  *(_DWORD *)(v9 + 16) ^= (v10 ^ (unsigned __int8)*(_DWORD *)(v9 + 16)) & 1;
  return result;
}
