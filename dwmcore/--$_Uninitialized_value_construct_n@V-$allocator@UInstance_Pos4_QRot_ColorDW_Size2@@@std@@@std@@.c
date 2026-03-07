char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Instance_Pos4_QRot_ColorDW_Size2>>(
        char *a1,
        __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 48 * a2;
    memset_0(a1, 0, 48 * a2);
    v2 += v3;
  }
  return v2;
}
