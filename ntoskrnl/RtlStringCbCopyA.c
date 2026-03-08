/*
 * XREFs of RtlStringCbCopyA @ 0x14035BCD8
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EC290 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140B6F0F0 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x14035BD04 (RtlStringCopyWorkerA.c)
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
