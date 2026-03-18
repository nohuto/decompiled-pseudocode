/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C016B0F4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01DCFDC (SetMiPPromotion.c)
 * Callees:
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  SetWakeBit((__int64)a1, (**((_DWORD **)a1 + 164) & 0x20) != 0 ? 4 : 2);
}
