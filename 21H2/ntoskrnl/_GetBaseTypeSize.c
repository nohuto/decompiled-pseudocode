/*
 * XREFs of _GetBaseTypeSize @ 0x140253334
 * Callers:
 *     _PnpValidatePropertyData @ 0x14062F0CC (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseTypeSize(__int16 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  v1 = a1 & 0xFFF;
  result = 1LL;
  if ( v1 <= 0xF )
  {
    if ( v1 == 15 )
      return 8LL;
    if ( v1 > 0xA )
    {
      v6 = v1 - 11;
      if ( !v6 )
        return 8LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 16LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 16LL;
      if ( v8 == 1 )
        return 8LL;
    }
    else
    {
      if ( v1 == 10 )
        return 4LL;
      if ( v1 > 5 )
      {
        if ( v1 > 7 )
          return 8LL;
        return 4LL;
      }
      if ( v1 >= 4 )
        return 2LL;
      if ( v1 > 1 )
        return result;
    }
    return 0LL;
  }
  if ( v1 > 0x15 )
  {
    v9 = v1 - 22;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
          goto LABEL_26;
      }
    }
    return 4LL;
  }
  if ( v1 == 21 )
    return 20LL;
  v3 = v1 - 16;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 1;
  if ( !v4 )
    return result;
  v5 = v4 - 1;
  if ( !v5 )
    return 2LL;
  v11 = v5 - 1;
  if ( v11 )
  {
LABEL_26:
    if ( v11 != 1 )
      return 0LL;
    return 2LL;
  }
  return result;
}
