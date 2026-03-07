struct REGION *__fastcall XDCOBJ::prgnEffRao(DC **this)
{
  DC *v1; // rdx

  v1 = *this;
  if ( *((_QWORD *)*this + 146) && (*((_DWORD *)v1 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(*this)
    || *((_QWORD *)v1 + 144) )
  {
    return DC::prgnRao(v1);
  }
  else
  {
    return DC::prgnVisSnap(v1);
  }
}
