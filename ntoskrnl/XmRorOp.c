/*
 * XREFs of XmRorOp @ 0x1403957A0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmRorOp(_DWORD *a1)
{
  int v2; // r10d
  int v3; // ecx
  unsigned int v4; // r9d
  int v5; // r10d
  int v6; // r11d

  v2 = a1[27];
  v3 = 8 * a1[30] + 7;
  v4 = a1[26];
  v5 = v3 & v2;
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= (a1[4] ^ ((v4 ^ (v4 >> v3)) << 11)) & 0x800;
    do
    {
      v6 = v4 & 1;
      v4 = (v4 >> 1) | (v6 << v3);
      --v5;
    }
    while ( v5 );
    a1[4] = v6 | a1[4] & 0xFFFFFFFE;
  }
  return XmStoreResult(a1, v4);
}
