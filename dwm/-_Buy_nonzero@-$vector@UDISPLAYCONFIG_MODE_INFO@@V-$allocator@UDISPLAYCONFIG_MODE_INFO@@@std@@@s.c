char *__fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v3 = a2 << 6;
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(a2 << 6);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[v3];
  a1[2] = result;
  return result;
}
