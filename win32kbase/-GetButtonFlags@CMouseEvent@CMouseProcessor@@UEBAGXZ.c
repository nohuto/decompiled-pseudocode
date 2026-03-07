__int64 __fastcall CMouseProcessor::CMouseEvent::GetButtonFlags(CMouseProcessor::CMouseEvent *this)
{
  return *(unsigned __int16 *)(*((_QWORD *)this + 1) + 28LL);
}
