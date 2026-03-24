/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C0001C90
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001D00 (Isoch_MapTransfers.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 */

__int64 __fastcall Isoch_EP_StartMapping(__int64 a1)
{
  char v2; // di
  __int64 result; // rax

  v2 = 0;
  result = KeGetCurrentIrql();
  if ( (_BYTE)result != 2 )
  {
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v2 = result;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 328), 0);
  *(_DWORD *)(a1 + 376) = 0;
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 108), 3) )
    result = Isoch_MapTransfers(a1);
  if ( v2 )
  {
    result = KeGetCurrentIrql();
    if ( (_BYTE)result == 2 )
      return Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
  }
  return result;
}
