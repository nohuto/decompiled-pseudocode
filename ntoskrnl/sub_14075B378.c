/*
 * XREFs of sub_14075B378 @ 0x14075B378
 * Callers:
 *     ExpDeleteSiloState @ 0x140606BA0 (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x14075B0D0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14075B2C0 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_14075B3C4 @ 0x14075B3C4 (sub_14075B3C4.c)
 */

__int64 __fastcall sub_14075B378(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_14075B3C4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
