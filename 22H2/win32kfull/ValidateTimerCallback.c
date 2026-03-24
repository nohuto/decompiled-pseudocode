/*
 * XREFs of ValidateTimerCallback @ 0x1C01E1ED0
 * Callers:
 *     xxxDispatchMessage @ 0x1C006ADB4 (xxxDispatchMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateTimerCallback(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 632) <= 0x501u )
    v1 = *(_DWORD *)(a1 + 648);
  else
    v1 = 0;
  return (v1 & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 488) & 0xC) == 0
      && PsGetProcessId(**(PEPROCESS **)(a1 + 424)) != (HANDLE)gpidLogon;
}
