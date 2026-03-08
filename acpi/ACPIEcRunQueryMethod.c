/*
 * XREFs of ACPIEcRunQueryMethod @ 0x1C0025AC4
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C0025958 (ACPIEcDispatchQueries.c)
 * Callees:
 *     ACPIEcCompleteQueryMethod @ 0x1C00258E0 (ACPIEcCompleteQueryMethod.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIEcRunQueryMethod(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx

  v3 = AMLIGetNamedChild(
         *(_QWORD *)(a1 + 56),
         (((unsigned __int8)HexDigit[(unsigned __int64)a2 >> 4] | ((unsigned __int8)HexDigit[a2 & 0xF] << 8)) << 16) | 0x515Fu);
  if ( !v3 )
  {
    v4 = -1073741772;
LABEL_5:
    ACPIEcCompleteQueryMethod(0LL, v4, 0LL, a1);
    return v4;
  }
  v4 = AMLIAsyncEvalObject(v3, 0, 0, 0, (__int64)ACPIEcCompleteQueryMethod, a1);
  AMLIDereferenceHandleEx(v3);
  if ( v4 != 259 )
    goto LABEL_5;
  return v4;
}
