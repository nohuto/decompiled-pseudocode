int *__fastcall std::vector<KernelTap>::emplace_back<float,float &,float &>(__int64 *a1, int *a2, int *a3, int *a4)
{
  int *result; // rax
  int v5; // xmm1_4
  int v6; // edx

  result = (int *)a1[1];
  if ( result == (int *)a1[2] )
    return std::vector<KernelTap>::_Emplace_reallocate<float,float &,float &>(a1, (__int64)result, a2, a3, a4);
  v5 = *a4;
  v6 = *a2;
  result[1] = *a3;
  result[2] = v5;
  a1[1] = (__int64)(result + 3);
  *result = v6;
  return result;
}
