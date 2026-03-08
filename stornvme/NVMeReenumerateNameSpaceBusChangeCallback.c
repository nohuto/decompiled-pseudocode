/*
 * XREFs of NVMeReenumerateNameSpaceBusChangeCallback @ 0x1C0021910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NVMeReenumerateNameSpaceBusChangeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( !a5 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 4028), 3u);
}
