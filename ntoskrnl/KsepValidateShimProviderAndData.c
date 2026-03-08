/*
 * XREFs of KsepValidateShimProviderAndData @ 0x1408011B0
 * Callers:
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 * Callees:
 *     KsepGetModuleInfoByAddress @ 0x140801264 (KsepGetModuleInfoByAddress.c)
 */

__int64 __fastcall KsepValidateShimProviderAndData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v8; // r11
  __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0;
  if ( !a1 )
    return 0LL;
  if ( !a3 )
    return 0LL;
  if ( (int)KsepGetModuleInfoByAddress(a1, a2, &v13, &v12) < 0 )
    return 0LL;
  v4 = *(_QWORD *)(a3 + 48);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  LODWORD(v6) = 0;
  do
  {
    if ( *(_DWORD *)v5 == 4 )
      break;
    v8 = *(_QWORD *)(v5 + 16);
    v9 = v8;
    if ( !v8 )
      return 0LL;
    v10 = 0;
    do
    {
      if ( *(_DWORD *)v9 == 2 )
        break;
      v11 = *(_QWORD *)(v9 + 16);
      if ( !v11 || v11 < v13 && v11 >= v13 + v12 )
        return 0LL;
      v9 = v8 + 32LL * (unsigned int)++v10;
    }
    while ( v9 );
    v6 = (unsigned int)(v6 + 1);
    v5 = v4 + 24 * v6;
  }
  while ( v5 );
  return 1LL;
}
