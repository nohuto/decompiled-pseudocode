_MOCKDRIVERSTATE_PER_PLANE *__fastcall _MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE(
        _MOCKDRIVERSTATE_PER_PLANE *this)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  return this;
}
