/*
 * XREFs of ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x1C004E9C4
 * Callers:
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C02C3E40 (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C004EB3C (RtlStringCopyWorkerA.c)
 *     RtlStringLengthWorkerA @ 0x1C004EBA8 (RtlStringLengthWorkerA.c)
 */

__int64 __fastcall RtlStringCbCatA(STRSAFE_PCNZCH psz, size_t cchMax, STRSAFE_PCNZCH pszSrc)
{
  NTSTATUS v3; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  pcchLength = 0LL;
  if ( cchMax - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = RtlStringLengthWorkerA(psz, cchMax, &pcchLength);
    if ( v3 >= 0 )
      return (unsigned int)RtlStringCopyWorkerA((NTSTRSAFE_PSTR)(pcchLength + v6), v5 - pcchLength, 0LL, pszSrc, v8);
  }
  return (unsigned int)v3;
}
