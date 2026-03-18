/*
 * XREFs of sub_1407AF088 @ 0x1407AF088
 * Callers:
 *     ExpDeleteSiloState @ 0x140608FF0 (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1407AEDE0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1407AEFD0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1407AF0D4 @ 0x1407AF0D4 (sub_1407AF0D4.c)
 */

__int64 __fastcall sub_1407AF088(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407AF0D4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
