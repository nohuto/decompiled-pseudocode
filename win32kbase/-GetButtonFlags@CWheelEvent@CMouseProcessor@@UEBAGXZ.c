unsigned __int16 __fastcall CMouseProcessor::CWheelEvent::GetButtonFlags(CMouseProcessor::CWheelEvent *this)
{
  return *(_WORD *)(*((_QWORD *)this + 1) + 28LL) & 0xC00;
}
