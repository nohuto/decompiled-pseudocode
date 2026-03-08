/*
 * XREFs of RtlpHpEnvAllocVA @ 0x140330480
 * Callers:
 *     RtlpHpVaMgrAllocAligned @ 0x140304644 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140306EB8 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpAllocVA @ 0x140330920 (RtlpHpAllocVA.c)
 *     RtlCSparseBitmapStart @ 0x1403A57A4 (RtlCSparseBitmapStart.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020DD14 (RtlpHpEnvFreeVA.c)
 *     MmAllocatePoolMemory @ 0x140330628 (MmAllocatePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // esi
  int PoolMemory; // r8d
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // [rsp+60h] [rbp+30h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+40h] BYREF

  v11 = 1LL;
  if ( a3 )
    v11 = a3;
  v12 = *a2;
  v13 = 3;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  if ( (a4 & 0x2000) != 0 )
  {
    v12 = v12 - ((v12 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v22 = v12;
    if ( v11 > 0x200000 )
      v22 = v11 + v12;
  }
  else
  {
    v22 = *a2;
  }
  v14 = v13 != 0 ? 512 : 1;
  if ( (a5 & 0x60) != 0 && v13 )
    v14 = 0;
  v23 = *a1;
  v15 = v14 | 0x80000000;
  v16 = a4 & ((a4 & 0x40000) != 0 ? -1310721 : -1048577);
  if ( (a4 & 0x40000) == 0 )
    v15 = v14;
  PoolMemory = MmAllocatePoolMemory((unsigned int)&v23, (unsigned int)&v22, v16, a5, v15, a9 + 1);
  if ( PoolMemory >= 0 && (v16 & 0x2000) != 0 )
  {
    a8 = v23;
    v19 = -(__int64)v11 & (v11 + v23 - 1);
    v20 = v19 - v23;
    v23 = v19 - v23;
    if ( v23 )
    {
      v21 = RtlpHpEnvFreeVA(&a8, &v23, 0x8000);
      v20 = v23;
      PoolMemory = v21;
    }
    a8 = v19 + v12;
    v23 = v22 - v20 - v12;
    if ( v22 - v20 != v12 )
      PoolMemory = RtlpHpEnvFreeVA(&a8, &v23, 0x8000);
    *a1 = v19;
    *a2 = v12;
  }
  return (unsigned int)PoolMemory;
}
