/*
 * XREFs of RtlStringCbCopyA @ 0x1402D6260
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     ObpRegisterObject @ 0x1408DEDCC (ObpRegisterObject.c)
 *     EtwpLogRefSetAutoMark @ 0x14093DE54 (EtwpLogRefSetAutoMark.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 *     IopStoreArcInformation @ 0x140A5D274 (IopStoreArcInformation.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1402D62A4 (RtlStringCopyWorkerA.c)
 */

NTSTATUS __stdcall RtlStringCbCopyA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA(pszDest, cbDest, 0LL, pszSrc, v5);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
