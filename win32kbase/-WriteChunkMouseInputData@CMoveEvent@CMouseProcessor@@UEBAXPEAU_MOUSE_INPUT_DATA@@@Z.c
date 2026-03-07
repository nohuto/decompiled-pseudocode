void __fastcall CMouseProcessor::CMoveEvent::WriteChunkMouseInputData(
        CMouseProcessor::CMoveEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->LastX = *(_DWORD *)(*((_QWORD *)this + 1) + 44LL);
  a2->LastY = *(_DWORD *)(*((_QWORD *)this + 1) + 48LL);
}
