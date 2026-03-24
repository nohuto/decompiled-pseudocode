/*
 * XREFs of sub_140686078 @ 0x140686078
 * Callers:
 *     ExpDeleteSiloState @ 0x1405B2BEC (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x140685DD0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x140685FC0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1406860C4 @ 0x1406860C4 (sub_1406860C4.c)
 */

__int64 __fastcall sub_140686078(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406860C4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
