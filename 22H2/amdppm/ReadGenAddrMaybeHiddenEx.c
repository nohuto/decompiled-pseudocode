/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0002E48
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002188C (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C0021B34 (CpcHighestNotifyWorker.c)
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0002D5C (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C0002E18 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}
