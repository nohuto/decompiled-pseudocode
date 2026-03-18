/*
 * XREFs of sub_1408513B0 @ 0x1408513B0
 * Callers:
 *     ExpSetKernelDataProtection @ 0x1407AEDE0 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1408513FC @ 0x1408513FC (sub_1408513FC.c)
 */

__int64 __fastcall sub_1408513B0(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1408513FC(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
