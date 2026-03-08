/*
 * XREFs of DpiFdoPendingCreatePdoCompletion @ 0x1C03961EC
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C01E6E20 (DpiPdoIsChildConnected.c)
 *     DpiPdoAddPdo @ 0x1C0201FA0 (DpiPdoAddPdo.c)
 *     DpiPdoPollingWorkItem @ 0x1C03A50C0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DpiFdoPendingCreatePdoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a2 + 64) = 0;
  if ( (*(_DWORD *)(v2 + 3704))-- == 1 )
    return KeSetEvent((PRKEVENT)(v2 + 3712), 0, 0);
  return result;
}
