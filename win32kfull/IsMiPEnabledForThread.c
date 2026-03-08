/*
 * XREFs of IsMiPEnabledForThread @ 0x1C00D7F08
 * Callers:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IsMiPActive @ 0x1C00D7EB8 (IsMiPActive.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0147140 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01D9B30 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMiPEnabledForThread(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1272) & 0x6000000) != 0;
}
