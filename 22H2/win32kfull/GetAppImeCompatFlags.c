/*
 * XREFs of GetAppImeCompatFlags @ 0x1C00A3C7C
 * Callers:
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00A398C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01AACF4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionGetAppImeCompatFlags @ 0x1C01E7740 (EditionGetAppImeCompatFlags.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetAppImeCompatFlags(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrentShared();
  return *(unsigned int *)(*((_QWORD *)a1 + 53) + 768LL);
}
