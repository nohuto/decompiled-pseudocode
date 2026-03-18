/*
 * XREFs of RtlStringCbCopyA @ 0x140347B88
 * Callers:
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x14097D464 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EF124 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140B733D8 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x140347BB4 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v4);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}
