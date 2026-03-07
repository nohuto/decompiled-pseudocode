void __fastcall CMouseProcessor::CButtonEvent::WriteChunkMouseInputData(
        CMouseProcessor::CButtonEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->ButtonFlags |= *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xF3FF;
  a2->Buttons = *(_DWORD *)(*((_QWORD *)this + 1) + 28LL);
  a2->ButtonData = *(_WORD *)(*((_QWORD *)this + 1) + 30LL);
}
