/*
 * XREFs of KiUpdateTimer2Collections @ 0x1403A0204
 * Callers:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateTimer2Collections(_BYTE *a1)
{
  char *v1; // rdx
  char v2; // r8
  __int64 v3; // r9
  char result; // al

  v1 = byte_14001B511;
  v2 = a1[129] & 0x1E;
  v3 = 6LL;
  do
  {
    if ( *(v1 - 1) == v2 )
    {
      a1[130] = *v1;
      result = v1[1];
      a1[131] = result;
    }
    v1 += 3;
    --v3;
  }
  while ( v3 );
  return result;
}
