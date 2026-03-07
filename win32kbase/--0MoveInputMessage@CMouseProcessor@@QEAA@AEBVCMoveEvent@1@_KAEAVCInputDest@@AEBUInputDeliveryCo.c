CMouseProcessor::MoveInputMessage *__fastcall CMouseProcessor::MoveInputMessage::MoveInputMessage(
        CMouseProcessor::MoveInputMessage *this,
        const struct CMouseProcessor::CMoveEvent *a2,
        __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 44) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMoveEvent::`vftable';
  *((_QWORD *)this + 44) = (char *)this + 176;
  return this;
}
