/*
 * XREFs of CatError @ 0x1C004D748
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x1C004A2C8 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     RtlStringCchCatA @ 0x1C003BDB4 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x1C0047280 (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x1C004D650 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004D7D8 (ConPrintf.c)
 */

__int64 CatError(const char *a1, ...)
{
  __int64 v1; // rax
  __int64 result; // rax
  va_list argList; // [rsp+58h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(pszDest, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( pszDest[v1] );
  RtlStringCchVPrintfA(&pszDest[v1], 256 - v1, a1, argList);
  ConPrintf(pszDest);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
