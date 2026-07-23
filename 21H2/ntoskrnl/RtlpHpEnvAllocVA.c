/*
 * XREFs of RtlpHpEnvAllocVA @ 0x140315C7C
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x140221EB4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1402220DC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     RtlCSparseBitmapStart @ 0x14039DAA0 (RtlCSparseBitmapStart.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x140305554 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140315E28 (MmAllocatePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        int a9)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  int v13; // r8d
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // eax
  int PoolMemory; // r8d
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  v9 = *a2;
  v10 = 1LL;
  if ( a3 )
    v10 = a3;
  v13 = 2;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  if ( (a9 + 1) & 0x2000 | a4 & 0x2000 )
  {
    v9 = v9 - ((v9 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v22 = v9;
    if ( v10 > 0x200000 )
      v22 = v10 + v9;
  }
  else
  {
    v22 = *a2;
  }
  if ( v13 )
  {
    v14 = 512;
  }
  else
  {
    v14 = 33;
    if ( a6 == 1 )
      v14 = 1;
  }
  if ( (a5 & 0x60) != 0 && v14 == 512 )
    v14 = 0;
  v23 = *a1;
  v15 = (a9 + 1) & 0xFFFBFFFF | a4 & 0xFFEBFFFF;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v15 = (a9 + 1) | a4 & 0xFFEFFFFF;
  v16 = v14 | 0x80000000;
  if ( !((a9 + 1) & 0x40000 | a4 & 0x40000) )
    v16 = v14;
  PoolMemory = MmAllocatePoolMemory((unsigned int)&v23, (unsigned int)&v22, v15, a5, v16);
  if ( PoolMemory >= 0 && (v15 & 0x2000) != 0 )
  {
    a8 = v23;
    v19 = -(__int64)v10 & (v10 + v23 - 1);
    v20 = v19 - v23;
    v23 = v19 - v23;
    if ( v23 )
    {
      v21 = RtlpHpEnvFreeVA(&a8, &v23, 0x8000LL);
      v20 = v23;
      PoolMemory = v21;
    }
    a8 = v19 + v9;
    v23 = v22 - v20 - v9;
    if ( v22 - v20 != v9 )
      PoolMemory = RtlpHpEnvFreeVA(&a8, &v23, 0x8000LL);
    *a1 = v19;
    *a2 = v9;
  }
  return (unsigned int)PoolMemory;
}
