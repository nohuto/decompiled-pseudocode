bool __fastcall CFlipToken::AllowEarlyTokenSync(CFlipToken *this)
{
  bool result; // al

  result = 0;
  if ( !*((_DWORD *)this + 28) && (!*((_BYTE *)this + 560) || *((_BYTE *)this + 564)) )
    return CompositionSurfaceObject::GetEarlyTokenSync(*((CompositionSurfaceObject **)this + 4), *((_QWORD *)this + 5));
  return result;
}
