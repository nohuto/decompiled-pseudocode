/*
 * XREFs of CmpCopySyncTree @ 0x140A214A8
 * Callers:
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     CmpSaveBootControlSet @ 0x140A0A5C8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A0C3E0 (CmpLoadHiveVolatile.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     CmpAllocatePool @ 0x14022CF0C (CmpAllocatePool.c)
 *     CmpCopySyncTree2 @ 0x140A21558 (CmpCopySyncTree2.c)
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
