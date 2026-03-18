/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01509EA
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B6970 (PostMousePointerLeaveAndCleanup.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  if ( a1 )
    InternalSetProp((__int64)a1, gatomMiPFlags, a2, 5u);
}
