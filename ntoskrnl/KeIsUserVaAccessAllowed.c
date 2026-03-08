/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140256450
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x140347088 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  _BYTE v2[3]; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    return (*(_DWORD *)(a1 + 376) & 0x40000) != 0;
  return (*(_DWORD *)v2 & 0x40000) != 0;
}
