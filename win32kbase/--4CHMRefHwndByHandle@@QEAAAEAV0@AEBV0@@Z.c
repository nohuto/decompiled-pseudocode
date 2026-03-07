_OWORD *__fastcall CHMRefHwndByHandle::operator=(_OWORD *a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = *a2;
  return result;
}
