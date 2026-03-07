bool __fastcall DXGADAPTER::IsFullWDDMAdapter(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 366) )
    return *((_QWORD *)this + 365) != 0LL;
  return result;
}
