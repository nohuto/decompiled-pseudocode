/*
 * XREFs of vInitFontMapperFamilyFallbackTable @ 0x1C0394F00
 * Callers:
 *     <none>
 * Callees:
 *     PREALLOCMEM2 @ 0x1C0132890 (PREALLOCMEM2.c)
 */

int vInitFontMapperFamilyFallbackTable()
{
  char *v0; // rax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  __int64 v5; // [rsp+78h] [rbp+2Fh]
  unsigned int Context; // [rsp+B0h] [rbp+67h] BYREF

  Context = 0;
  QueryTable.Flags = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontMapperFamilyFallbackListRoutine;
  memset(&QueryTable.Name, 0, 20);
  LODWORD(v0) = RtlQueryRegistryValues(3u, L"FontMapperFamilyFallbackDeprecated", &QueryTable, &Context, 0LL);
  if ( Context > gcfmffTable )
  {
    v0 = PREALLOCMEM2(gpfmffTable, gcfmffTable << 7, gcfmffTable << 7, 0x46464D47u);
    if ( v0 )
      gpfmffTable = v0;
  }
  return (int)v0;
}
