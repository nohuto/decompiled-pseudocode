char *__fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *result; // rax

  if ( a2 > 0x38E38E38E38E38ELL )
    std::_Xlength_error("vector too long");
  v3 = 72 * a2;
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(72 * a2);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[v3];
  a1[2] = result;
  return result;
}
