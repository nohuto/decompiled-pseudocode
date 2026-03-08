/*
 * XREFs of PopPowerRequestTableLookupEntry @ 0x14073B640
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1402BC0D8 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PopPowerRequestTableLookupEntry(int a1)
{
  PVOID v1; // rcx
  __int64 result; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
