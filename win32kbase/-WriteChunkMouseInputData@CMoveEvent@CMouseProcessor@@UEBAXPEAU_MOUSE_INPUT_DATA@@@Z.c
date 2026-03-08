/*
 * XREFs of ?WriteChunkMouseInputData@CMoveEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00D6130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::CMoveEvent::WriteChunkMouseInputData(
        CMouseProcessor::CMoveEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->LastX = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL);
  a2->LastY = *(_DWORD *)(*((_QWORD *)this + 1) + 48LL);
}
