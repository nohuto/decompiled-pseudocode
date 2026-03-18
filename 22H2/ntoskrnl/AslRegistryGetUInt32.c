/*
 * XREFs of AslRegistryGetUInt32 @ 0x140A544F0
 * Callers:
 *     SdbpGetMergeSdbsDisabled @ 0x14066DD64 (SdbpGetMergeSdbsDisabled.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x14084F24C (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6E0 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x140A54570 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v7);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
