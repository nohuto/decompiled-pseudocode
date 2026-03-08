/*
 * XREFs of MiInitializePoolCommitPacket @ 0x140330760
 * Callers:
 *     MmAllocatePoolMemory @ 0x140330628 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14063F4FC (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x1402D89F8 (MiReturnPoolCharges.c)
 *     MiGetLargePageChain @ 0x1402E98A8 (MiGetLargePageChain.c)
 *     MiObtainPoolCharges @ 0x1402EDAA0 (MiObtainPoolCharges.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiGetPoolPages @ 0x14036413C (MiGetPoolPages.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  unsigned int ProtectionMask; // r8d
  unsigned int v11; // r9d
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // r11
  int v14; // eax
  __int16 v15; // r8
  unsigned __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  __int64 result; // rax
  __int64 LargePageChain; // rax
  __int64 PoolPages; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-30h]
  unsigned __int64 v26; // [rsp+50h] [rbp-28h]
  __int128 v27; // [rsp+58h] [rbp-20h]

  v8 = *a1;
  *(_WORD *)(a8 + 78) = 0;
  *(_QWORD *)a8 = v8;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask > 0x18 || (v14 = 16777298, !_bittest(&v14, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v12, v13, v11);
  v15 = 8 * (ProtectionMask & 0x1F);
  *(_WORD *)(a8 + 78) = v15;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 48) = &unk_140C69CC0;
  *(_QWORD *)(a8 + 40) = 5LL;
  *(_QWORD *)(a8 + 56) = (((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((__int64)((((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (a5 & 1) != 0 )
  {
    v17 = (unsigned __int16)word_140C699AE;
    *(_QWORD *)(a8 + 48) = &unk_140C69900;
    v18 = qword_140C67048;
    *(_WORD *)(a8 + 78) = v15 | 2;
    *(_DWORD *)(a8 + 40) = 6;
    v19 = (unsigned int)MiChargeCommit(*(_QWORD *)(v18 + 8 * v17), v16, 1uLL) == 0;
  }
  else
  {
    if ( (a3 & 0x20000000) != 0 )
    {
      if ( (unsigned int)MiObtainPoolCharges(v16, 0) )
      {
        LargePageChain = MiGetLargePageChain(a6, v16);
        *(_QWORD *)(a8 + 16) = LargePageChain;
        if ( LargePageChain )
        {
          *(_WORD *)(a8 + 78) |= 4u;
          goto LABEL_6;
        }
        v25 = 0LL;
        v26 = v16;
        v23 = v16;
        v24 = 0LL;
        v27 = 0LL;
        MiReturnPoolCharges(&v23, 0, 0LL);
      }
      return 3221225626LL;
    }
    if ( a7 )
    {
      *(_QWORD *)(a8 + 16) = a7;
      *(_DWORD *)(a8 + 40) = 15;
      *(_WORD *)(a8 + 78) = v15 | 0x100;
      goto LABEL_6;
    }
    PoolPages = MiGetPoolPages(a3, a6, v16);
    *(_QWORD *)(a8 + 16) = PoolPages;
    v19 = PoolPages == 0;
  }
  if ( v19 )
    return 3221225626LL;
LABEL_6:
  *(_QWORD *)(a8 + 24) = 0LL;
  result = 0LL;
  *(_QWORD *)(a8 + 8) = v16;
  *(_DWORD *)(a8 + 72) = a6;
  *(_QWORD *)(a8 + 64) = 0LL;
  *(_QWORD *)(a8 + 32) = 0LL;
  return result;
}
