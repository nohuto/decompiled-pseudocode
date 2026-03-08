/*
 * XREFs of _lambda_6205c396a1390c774bd95fcbb0cc7414_::operator() @ 0x1C00C45A4
 * Callers:
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00C434C (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(_QWORD **a1, unsigned int a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // ecx
  bool result; // al

  result = 0;
  if ( a2 >= 0xC )
  {
    v2 = (_DWORD *)**a1;
    v3 = v2[6];
    v4 = v3 + a2;
    if ( v3 + a2 >= v3 && v4 + 20 >= v4 && v4 + 20 <= *v2 )
      return 1;
  }
  return result;
}
