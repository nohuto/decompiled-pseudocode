/*
 * XREFs of RtlpGetCodePageData @ 0x14075A7E4
 * Callers:
 *     RtlUnicodeToOemN @ 0x1407592A0 (RtlUnicodeToOemN.c)
 *     RtlMultiByteToUnicodeN @ 0x14075A6A0 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x1407F9C40 (RtlOemToUnicodeN.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

struct _CPTABLEINFO *RtlpGetCodePageData()
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return &Utf8TableInfo;
  _InterlockedOr(v1, 0);
  return (struct _CPTABLEINFO *)((char *)PsGetCurrentServerSiloGlobals() + 1064);
}
