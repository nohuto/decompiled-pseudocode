/*
 * XREFs of XmRclOp @ 0x140531220
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

_WORD *__fastcall XmRclOp(_DWORD *a1)
{
  int v1; // edx
  char v2; // bl
  unsigned int v3; // r8d
  int v4; // edi
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // r11d
  unsigned int v8; // eax
  _WORD *result; // rax
  int v10; // r9d
  __int64 v11; // r10

  v1 = 8 * a1[30];
  v2 = v1 + 7;
  v3 = a1[26];
  v4 = ((1 << (v1 + 7)) - 1) | (1 << (v1 + 7));
  v5 = (a1[27] & 0x1Fu) % (v1 + 9);
  v6 = a1[4] & 1;
  v7 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= ((unsigned __int16)a1[4] ^ (unsigned __int16)(((unsigned __int16)(v3 >> v2) ^ (unsigned __int16)(v3 >> (v2 - 1))) << 11)) & 0x800;
    do
    {
      v8 = v3 >> v2;
      v3 = v6 | v4 & (2 * v3);
      v6 = v8;
      --v7;
    }
    while ( v7 );
  }
  result = XmStoreResult((__int64)a1, v3);
  *(_DWORD *)(v11 + 16) ^= (*(_DWORD *)(v11 + 16) ^ v10) & 1;
  return result;
}
