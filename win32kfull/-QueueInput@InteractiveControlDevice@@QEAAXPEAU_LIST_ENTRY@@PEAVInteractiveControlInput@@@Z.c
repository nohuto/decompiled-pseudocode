/*
 * XREFs of ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C0248D40
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0248B64 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02492DC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C0247B90 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 */

void __fastcall InteractiveControlDevice::QueueInput(
        InteractiveControlDevice *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Flink; // rax

  if ( !a2 )
    a2 = (struct _LIST_ENTRY *)((char *)this + 16);
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  a3->Flink = Flink;
  a3->Blink = a2;
  Flink->Blink = a3;
  a2->Flink = a3;
  ++*((_DWORD *)this + 8);
  if ( !*((_DWORD *)this + 91) )
    InteractiveControlDevice::CleanQueue(this);
}
