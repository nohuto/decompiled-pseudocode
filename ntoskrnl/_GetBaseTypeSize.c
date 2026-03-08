/*
 * XREFs of _GetBaseTypeSize @ 0x140202A50
 * Callers:
 *     _PnpValidatePropertyData @ 0x140686FC8 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseTypeSize(__int16 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  __int64 result; // rax
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx

  v1 = a1 & 0xFFF;
  if ( v1 <= 0xD )
  {
    if ( v1 == 13 )
      return 16LL;
    if ( v1 > 6 )
    {
      v2 = v1 - 7;
      if ( !v2 )
        return 4LL;
      v12 = v2 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v18 = v13 - 1;
          if ( !v18 )
            return 4LL;
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              return 16LL;
            return 0LL;
          }
        }
      }
      return 8LL;
    }
    if ( v1 == 6 )
      return 4LL;
    if ( !v1 )
      return 0LL;
    v9 = v1 - 1;
    if ( !v9 )
      return 0LL;
    v10 = v9 - 1;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 1;
    if ( !v11 )
      return 1LL;
    v14 = v11 - 1;
    if ( v14 )
      goto LABEL_25;
    return 2LL;
  }
  result = 20LL;
  if ( v1 <= 0x14 )
  {
    if ( v1 != 20 )
    {
      v4 = v1 - 14;
      if ( !v4 )
        return 8LL;
      v5 = v4 - 1;
      if ( !v5 )
        return 8LL;
      v6 = v5 - 1;
      if ( !v6 )
        return 8LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 1LL;
      v8 = v7 - 1;
      if ( v8 )
        return v8 == 1;
    }
    return 2LL;
  }
  v15 = v1 - 21;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return 4LL;
    v17 = v16 - 1;
    if ( !v17 )
      return 4LL;
    v14 = v17 - 1;
    if ( !v14 )
      return 4LL;
LABEL_25:
    if ( v14 != 1 )
      return 0LL;
    return 2LL;
  }
  return result;
}
