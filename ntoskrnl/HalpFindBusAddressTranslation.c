/*
 * XREFs of HalpFindBusAddressTranslation @ 0x1403B0910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HalpFindBusAddressTranslation(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  char result; // al

  if ( !a4 || *a4 && a5 == 1 )
    return 0;
  *a4 = 1LL;
  result = 1;
  *a3 = a1;
  return result;
}
