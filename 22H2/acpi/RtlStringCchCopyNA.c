/*
 * XREFs of RtlStringCchCopyNA @ 0x1C002BAFC
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C002A14C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C002ABF0 (ACPIGetProcessorIDWide.c)
 *     LoadDDB @ 0x1C004FA60 (LoadDDB.c)
 *     DumpObject @ 0x1C0051EB8 (DumpObject.c)
 *     ProcessLoadTable @ 0x1C0058630 (ProcessLoadTable.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseNameTail @ 0x1C005BA28 (ParseNameTail.c)
 *     AMLILoadDDB @ 0x1C00AB134 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  NTSTATUS result; // eax
  size_t v5; // r9
  signed __int64 v6; // r8
  char v7; // al
  NTSTRSAFE_PSTR v8; // rax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
    goto LABEL_12;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
LABEL_12:
    *pszDest = 0;
    return result;
  }
  v5 = cchToCopy - cchDest;
  v6 = pszSrc - pszDest;
  do
  {
    if ( !(v5 + cchDest) )
      break;
    v7 = pszDest[v6];
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --cchDest;
  }
  while ( cchDest );
  v8 = pszDest - 1;
  if ( cchDest )
    v8 = pszDest;
  *v8 = 0;
  return cchDest == 0 ? 0x80000005 : 0;
}
