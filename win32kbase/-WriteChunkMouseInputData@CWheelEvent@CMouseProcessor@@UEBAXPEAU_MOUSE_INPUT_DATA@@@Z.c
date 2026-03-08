/*
 * XREFs of ?WriteChunkMouseInputData@CWheelEvent@CMouseProcessor@@UEBAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00D6150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::CWheelEvent::WriteChunkMouseInputData(
        CMouseProcessor::CWheelEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->ButtonFlags |= *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
  a2->ButtonData = *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
}
