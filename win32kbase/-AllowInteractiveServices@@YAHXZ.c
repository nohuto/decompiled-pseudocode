/*
 * XREFs of ?AllowInteractiveServices@@YAHXZ @ 0x1C00DA000
 * Callers:
 *     IsIMMEnabledSystem @ 0x1C002D790 (IsIMMEnabledSystem.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 AllowInteractiveServices(void)
{
  unsigned int v0; // ebx
  bool v1; // cc
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+B0h] [rbp+67h] BYREF

  v0 = 1;
  v1 = dword_1C02D2C34 <= 0;
  if ( !dword_1C02D2C34 )
  {
    v4 = 0;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].DefaultType = 4;
    QueryTable[0].Name = L"NoInteractiveServices";
    QueryTable[0].DefaultLength = 4;
    QueryTable[0].EntryContext = &v4;
    QueryTable[0].Flags = 32;
    QueryTable[0].DefaultData = &v4;
    RtlQueryRegistryValues(2u, L"Windows", QueryTable, 0LL, 0LL);
    if ( !v4 )
    {
      dword_1C02D2C34 = 1;
      return v0;
    }
    dword_1C02D2C34 = -1;
    v1 = 1;
  }
  if ( v1 )
    return 0;
  return v0;
}
