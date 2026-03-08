/*
 * XREFs of ?QueryInterface@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0524
 * Callers:
 *     ?QueryInterface@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D4D0 (-QueryInterface@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAJAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<ILegacyRemotingSwapChain>::QueryInterface(__int64 a1, _QWORD *a2, __int64 *a3)
{
  return CMILCOMBaseT<ILegacyRemotingSwapChain>::InternalQueryInterface((_QWORD *)(a1 - 32), a2, a3);
}
