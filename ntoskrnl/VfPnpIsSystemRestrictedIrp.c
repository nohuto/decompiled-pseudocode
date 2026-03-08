/*
 * XREFs of VfPnpIsSystemRestrictedIrp @ 0x140AE3D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfPnpIsSystemRestrictedIrp(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  bool v4; // zf
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx

  v1 = *(unsigned __int8 *)(a1 + 1);
  if ( v1 <= 0xC )
  {
    if ( v1 == 12 || v1 <= 6 )
      return 1LL;
    v3 = v1 - 7;
    if ( v3 )
    {
      v5 = v3 - 1;
      v4 = v5 == 0;
LABEL_16:
      if ( v4 )
        return 0LL;
      v11 = v5 == 1;
      return !v11;
    }
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 0LL;
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( !v9 )
          return 0LL;
        goto LABEL_21;
      }
    }
    return 1LL;
  }
  if ( v1 > 0x13 )
    return v1 != 22;
  if ( v1 != 19 )
  {
    v10 = v1 - 13;
    if ( v10 )
    {
      v5 = v10 - 2;
      v4 = v5 == 0;
      goto LABEL_16;
    }
    return 1LL;
  }
  v12 = *(_DWORD *)(a1 + 8);
  if ( !v12 )
    return 0LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 1LL;
  v9 = v13 - 1;
  if ( !v9 )
    return 1LL;
LABEL_21:
  v11 = v9 == 1;
  return !v11;
}
