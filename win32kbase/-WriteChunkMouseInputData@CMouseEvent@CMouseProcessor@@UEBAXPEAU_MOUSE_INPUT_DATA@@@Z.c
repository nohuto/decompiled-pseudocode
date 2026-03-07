void __fastcall CMouseProcessor::CMouseEvent::WriteChunkMouseInputData(
        CMouseProcessor::CMouseEvent *this,
        struct _MOUSE_INPUT_DATA *a2)
{
  a2->UnitId = *(_WORD *)(*((_QWORD *)this + 1) + 24LL);
  a2->Flags = *(_WORD *)(*((_QWORD *)this + 1) + 36LL);
  a2->RawButtons = *(_DWORD *)(*((_QWORD *)this + 1) + 32LL);
  a2->ExtraInformation = *(_DWORD *)(*((_QWORD *)this + 1) + 40LL);
}
