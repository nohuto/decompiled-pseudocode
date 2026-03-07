__int64 __fastcall CGlobalMit::ResetMmcss(wil::details **this, void *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_BYTE *)this + 32) || !this[2] )
    return (unsigned int)-2147467260;
  else
    wil::details::SetEvent(this[17], a2);
  return v2;
}
