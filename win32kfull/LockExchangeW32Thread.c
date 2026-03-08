/*
 * XREFs of LockExchangeW32Thread @ 0x1C001660C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C00A1ECC (ExchangeW32ThreadLock.c)
 */

__int64 __fastcall LockExchangeW32Thread(__int64 a1, __int64 a2)
{
  if ( a1 )
    ReferenceW32Thread();
  return ExchangeW32ThreadLock(a1, a2);
}
