/*
 * XREFs of sub_1405E51D8 @ 0x1405E51D8
 * Callers:
 *     ExpDeleteSiloState @ 0x1405B2E1C (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1405E4F30 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405E5120 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1405E5224 @ 0x1405E5224 (sub_1405E5224.c)
 */

__int64 __fastcall sub_1405E51D8(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1405E5224(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
