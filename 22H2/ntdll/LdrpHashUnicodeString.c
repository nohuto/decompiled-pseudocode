/*
 * XREFs of LdrpHashUnicodeString @ 0x180061070
 * Callers:
 *     LdrpLoadKnownDll @ 0x180014398 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x180014620 (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180060E90 (LdrpMapDllFullPath.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B24 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18001CCB0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  RtlHashUnicodeString(a1, 1, 0, (int *)&v2);
  result = v2;
  if ( !v2 )
    return 0x80000000LL;
  return result;
}
