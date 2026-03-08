/*
 * XREFs of ExpPoolFlagsToPoolType @ 0x140AAB010
 * Callers:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14034C1AC (ExAllocatePoolMm.c)
 *     VerifierExAllocatePool2 @ 0x140ACD9E0 (VerifierExAllocatePool2.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPoolFlagsToPoolType(__int64 a1, int a2, int *a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r10d
  __int64 v7; // rax
  int v8; // r8d
  int v10; // edx

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( (a1 & 0xFFFFF800) != 0 || (a1 & 0x10) != 0 && !a2 )
    return 3221225485LL;
  v7 = a1 & 0x1C0;
  if ( v7 == 64 )
  {
    v5 = 512;
  }
  else if ( v7 != 128 )
  {
    if ( v7 != 256 )
      return 3221225485LL;
    v5 = -2147483647;
    if ( (a1 & 0x10) == 0 )
      v5 = 1;
  }
  if ( (a1 & 4) != 0 )
    v5 |= 0x20u;
  v8 = v5 | 0x400;
  if ( (a1 & 2) != 0 )
    v8 = v5;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v10 = v8 | 4;
    if ( (a1 & 8) == 0 )
      v10 = v8;
    v8 = v10;
    if ( (a1 & 0x200) != 0 )
      v8 = v10 | 0x80;
    if ( (a1 & 0x400) != 0 )
      v8 |= 0x40u;
    if ( (a1 & 1) != 0 )
    {
      *a4 = 1;
      if ( (a1 & 0x20) == 0 )
        v8 |= 8u;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v8 |= 0x10u;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      *a5 = 1;
  }
  *a3 = v8;
  return 0LL;
}
