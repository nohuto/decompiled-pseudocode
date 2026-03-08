/*
 * XREFs of ApiSetpSearchForApiSet @ 0x1402F3974
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x1402F3630 (ApiSetQuerySchemaInfo.c)
 *     ApiSetResolveToHost @ 0x1402F3878 (ApiSetResolveToHost.c)
 *     ApiSetValidateSchemaFormat @ 0x14061231C (ApiSetValidateSchemaFormat.c)
 *     ApiSetComposeSchema @ 0x1406125BC (ApiSetComposeSchema.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140684CA0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  SIZE_T v3; // r11
  unsigned int v6; // edi
  const WCHAR *v7; // r8
  int v8; // ebx
  __int64 v9; // r10
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r10

  v3 = a3;
  v6 = 0;
  v7 = a2;
  if ( (_WORD)v3 )
  {
    v8 = a1[6];
    v9 = (unsigned int)v3;
    do
    {
      v10 = *v7++;
      v11 = v10 + 32;
      if ( (unsigned __int16)(v10 - 65) > 0x19u )
        v11 = v10;
      v6 = v11 + v8 * v6;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0LL;
  v13 = a1[3] - 1;
  v14 = 0;
  if ( v13 < 0 )
    return v12;
  while ( 1 )
  {
    v15 = (v14 + v13) >> 1;
    v16 = (unsigned int)a1[5] + 8LL * v15;
    if ( v6 < *(_DWORD *)((char *)a1 + v16) )
    {
      v13 = v15 - 1;
      goto LABEL_10;
    }
    if ( v6 <= *(_DWORD *)((char *)a1 + v16) )
      break;
    v14 = v15 + 1;
LABEL_10:
    if ( v14 > v13 )
      return v12;
  }
  v12 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v16 + 4)] + (unsigned int)a1[4];
  if ( !v12
    || !RtlCompareUnicodeStrings(
          a2,
          v3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v12 + 4)),
          *(_DWORD *)(v12 + 12) >> 1,
          1u) )
  {
    return v12;
  }
  return 0LL;
}
