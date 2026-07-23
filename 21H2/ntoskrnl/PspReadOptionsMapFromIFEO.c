/*
 * XREFs of PspReadOptionsMapFromIFEO @ 0x1406B0B78
 * Callers:
 *     PspReadIFEOMitigationOptions @ 0x1406B0A94 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406B0B1C (PspReadIFEOMitigationAuditOptions.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall PspReadOptionsMapFromIFEO(__int64 a1, const WCHAR *a2, ULONG *a3)
{
  void *v4; // rcx
  NTSTATUS ImageFileKeyOption; // ebx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v7) = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(void **)(a1 + 192);
  if ( !v4 )
    return 3221225485LL;
  ImageFileKeyOption = RtlQueryImageFileKeyOption(v4, a2, 0, a3, 0x18u, (ULONG *)&v7);
  if ( ImageFileKeyOption == -2147483643 )
    ImageFileKeyOption = -1073741820;
  if ( ImageFileKeyOption >= 0 )
    memset((char *)a3 + (unsigned int)v7, 0, (unsigned int)(24 - v7));
  return (unsigned int)ImageFileKeyOption;
}
