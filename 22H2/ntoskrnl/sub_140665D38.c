/*
 * XREFs of sub_140665D38 @ 0x140665D38
 * Callers:
 *     ExpDeleteSiloState @ 0x1405B2B2C (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x140665A90 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x140665C80 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_140665D84 @ 0x140665D84 (sub_140665D84.c)
 */

__int64 __fastcall sub_140665D38(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140665D84(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
