/*
 * XREFs of ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C0248430
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0248B64 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::GetPreviousInputReport(
        InteractiveControlDevice *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY **a3)
{
  struct _LIST_ENTRY *v3; // rcx

  v3 = (struct _LIST_ENTRY *)((char *)this + 16);
  if ( v3->Flink == v3 )
    return 0LL;
  if ( !a2 )
    a2 = v3;
  *a3 = a2->Flink;
  return 1LL;
}
