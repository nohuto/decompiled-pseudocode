/*
 * XREFs of RaCopyPaddedString @ 0x1C0074BEC
 * Callers:
 *     StorGetIdentityVendorId @ 0x1C001B10C (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001B13C (StorGetIdentityProductId.c)
 * Callees:
 *     <none>
 */

void __fastcall RaCopyPaddedString(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // eax
  __int64 v6; // r8
  _BYTE *v7; // rdx
  __int64 v8; // r9
  char v9; // al

  if ( a2 > a4 )
  {
    v4 = 0;
    *(_BYTE *)(a4 + a1) = 0;
    v5 = a4 - 1;
    if ( a4 != 0LL )
    {
      v6 = a3 - a1;
      v7 = (_BYTE *)((int)v5 + a1);
      v8 = (int)v5 + 1LL;
      do
      {
        v9 = v7[v6];
        if ( v9 == 32 )
          v9 = v4 != 0 ? 0x20 : 0;
        else
          v4 = 1;
        *v7-- = v9;
        --v8;
      }
      while ( v8 );
    }
  }
}
