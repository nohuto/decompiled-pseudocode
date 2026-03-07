FxObject *__fastcall FxObject::_GetObjectFromHandle(unsigned __int64 Handle, unsigned __int16 *ObjectOffset)
{
  unsigned __int16 *v2; // r8
  __int64 v3; // rax

  v2 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v3 = *v2;
    *ObjectOffset = v3;
    return (FxObject *)((char *)v2 - v3);
  }
  return (FxObject *)v2;
}
