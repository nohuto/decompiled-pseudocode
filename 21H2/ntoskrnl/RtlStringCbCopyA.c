/*
 * XREFs of RtlStringCbCopyA @ 0x1402A1054
 * Callers:
 *     PfpPrivSourceEnum @ 0x140711614 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x140986424 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EA6C0 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140B2CF90 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1402A1080 (RtlStringCopyWorkerA.c)
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
