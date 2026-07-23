/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x140221EB4
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x140221288 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x140221B88 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140221C2C (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x140221C70 (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x140222010 (RtlpCSparseBitmapLock.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14022208C (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlpHpEnvAllocVA @ 0x140315C7C (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140595A40 (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, int *a3, __int128 *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // ecx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+28h] [rbp-58h]
  int v15; // [rsp+30h] [rbp-50h]
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v19 = 4096LL;
    v16[0] = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(
           (unsigned int)v16,
           (unsigned int)&v19,
           0,
           1073745920,
           4,
           *(unsigned __int8 *)(a1 + 49),
           *(unsigned __int8 *)(a1 + 50));
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v20;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v18, a1);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(a1 + 32, &v20, v12, a1, v13, v14);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v11 = *(unsigned __int8 *)(a1 + 49);
    v16[0] = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v15 = *(unsigned __int8 *)(a1 + 50);
    v19 = 4096LL;
    v9 = RtlpHpEnvAllocVA((unsigned int)v16, (unsigned int)&v19, 0, 1073745920, 4, v11, v15);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v17 = *a4;
      RtlCSparseBitmapLeaveLockingRegion((unsigned __int8 *)&v17);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
