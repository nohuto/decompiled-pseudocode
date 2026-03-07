bool __fastcall DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 127) )
    return *((_BYTE *)this + 2866) != 0;
  return result;
}
