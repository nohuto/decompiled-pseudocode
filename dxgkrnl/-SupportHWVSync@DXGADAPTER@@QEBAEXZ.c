bool __fastcall DXGADAPTER::SupportHWVSync(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 365) )
    return *((_QWORD *)this + 86) != 0LL;
  return result;
}
