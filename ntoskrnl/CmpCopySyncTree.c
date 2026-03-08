/*
 * XREFs of CmpCopySyncTree @ 0x140A1E748
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140A078D8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 */

__int64 __fastcall CmpCopySyncTree(__int64 a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 Pool; // rax
  struct _PRIVILEGE_SET *v11; // rbx
  unsigned int v12; // edi

  Pool = CmpAllocatePool(256LL, 10240LL, 538987843LL);
  v11 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 8) = 0;
    *(_DWORD *)(Pool + 12) &= 0xFFFFFFF8;
    *(_BYTE *)(Pool + 16) &= 0xFCu;
    *(_DWORD *)Pool = a2;
    *(_DWORD *)(Pool + 4) = a4;
    v12 = CmpCopySyncTree2(Pool, 512LL, 0LL, a1, a3, a5, a6);
    CmSiFreeMemory(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
