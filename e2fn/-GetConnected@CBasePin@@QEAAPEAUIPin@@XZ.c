struct IPin *__fastcall CBasePin::GetConnected(CBasePin *this)
{
  return (struct IPin *)*((_QWORD *)this + 6);
}
