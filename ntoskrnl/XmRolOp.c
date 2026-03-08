/*
 * XREFs of XmRolOp @ 0x140394F40
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmRolOp(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebx
  unsigned int v3; // r9d
  int v4; // r11d
  int v5; // r10d
  unsigned int v6; // eax

  v1 = a1[30];
  v2 = 8 * v1 + 7;
  v3 = a1[26];
  v4 = ((1 << (8 * v1 + 7)) - 1) | (1 << (8 * v1 + 7));
  v5 = v2 & a1[27];
  if ( v5 )
  {
    if ( v5 == 1 )
      a1[4] ^= (a1[4] ^ (((v3 >> (8 * v1 + 7)) ^ (v3 >> (8 * v1 + 6))) << 11)) & 0x800;
    do
    {
      v6 = v3 >> v2;
      v3 = (v3 >> v2) | v4 & (2 * v3);
      --v5;
    }
    while ( v5 );
    a1[4] ^= (a1[4] ^ v6) & 1;
  }
  return XmStoreResult(a1, v3);
}
