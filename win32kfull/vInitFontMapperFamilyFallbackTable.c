/*
 * XREFs of vInitFontMapperFamilyFallbackTable @ 0x1C03B7FC0
 * Callers:
 *     <none>
 * Callees:
 *     PREALLOCMEM2 @ 0x1C00F02EC (PREALLOCMEM2.c)
 */

int __fastcall vInitFontMapperFamilyFallbackTable(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rax
  unsigned int v3; // edx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+68h] [rbp+1Fh]
  int v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  Context = 0;
  QueryTable.Flags = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontMapperFamilyFallbackListRoutine;
  memset(&QueryTable.Name, 0, 20);
  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  LODWORD(v2) = RtlQueryRegistryValues(3u, L"FontMapperFamilyFallbackDeprecated", &QueryTable, &Context, 0LL);
  v3 = *(_DWORD *)(v1 + 19492);
  if ( Context > v3 )
  {
    v2 = PREALLOCMEM2(*(void **)(v1 + 19480), v3 << 7, v3 << 7, 1179012423LL);
    if ( v2 )
      *(_QWORD *)(v1 + 19480) = v2;
  }
  return (int)v2;
}
