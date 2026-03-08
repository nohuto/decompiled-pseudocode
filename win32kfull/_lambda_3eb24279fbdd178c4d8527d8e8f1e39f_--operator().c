/*
 * XREFs of _lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator() @ 0x1C00C45D4
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00C434C (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(unsigned int ***a1, unsigned int a2, int a3)
{
  unsigned int v3; // r8d
  bool result; // al

  result = 0;
  if ( a2 >= 0xC0 )
  {
    v3 = a2 + a3;
    if ( v3 >= a2 && v3 <= ***a1 )
      return 1;
  }
  return result;
}
