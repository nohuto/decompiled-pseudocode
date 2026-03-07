CMouseProcessor::ButtonInputMessage *__fastcall CMouseProcessor::ButtonInputMessage::ButtonInputMessage(
        CMouseProcessor::ButtonInputMessage *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        unsigned __int64 a3,
        struct CInputDest *a4,
        const struct CMouseProcessor::InputDeliveryContext *a5)
{
  CMouseProcessor::MouseInputMessage::MouseInputMessage(this, a3, a2, a4, a5);
  *((_QWORD *)this + 43) = &CMouseProcessor::CMouseEvent::`vftable';
  *((_QWORD *)this + 44) = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 90) = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 43) = &CMouseProcessor::CButtonEvent::`vftable';
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 9);
  *((_QWORD *)this + 48) = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 44) = (char *)this + 176;
  return this;
}
