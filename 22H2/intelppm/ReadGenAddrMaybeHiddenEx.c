/*
 * XREFs of ReadGenAddrMaybeHiddenEx @ 0x1C0008820
 * Callers:
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002EA88 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002ED44 (CpcHighestNotifyWorker.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x1C0008734 (ReadGenAddrEx.c)
 *     ReadGenAddrHiddenEx @ 0x1C00087F0 (ReadGenAddrHiddenEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrMaybeHiddenEx(__int64 a1, _BYTE *a2)
{
  if ( *(_DWORD *)(a1 + 80) )
    return ReadGenAddrHiddenEx(*(unsigned int *)(a1 + 84), a2);
  else
    return ReadGenAddrEx(a2);
}
