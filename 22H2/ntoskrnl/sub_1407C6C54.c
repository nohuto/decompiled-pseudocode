/*
 * XREFs of sub_1407C6C54 @ 0x1407C6C54
 * Callers:
 *     ExpSetKernelDataProtection @ 0x140665A90 (ExpSetKernelDataProtection.c)
 * Callees:
 *     sub_1407C6CA0 @ 0x1407C6CA0 (sub_1407C6CA0.c)
 */

__int64 __fastcall sub_1407C6C54(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407C6CA0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
