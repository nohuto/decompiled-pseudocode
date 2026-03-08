/*
 * XREFs of MiUnmapLockedPagesInUserSpace @ 0x140797184
 * Callers:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiLocateOldestSecure @ 0x1402FE90C (MiLocateOldestSecure.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiDeleteVirtualAddresses @ 0x140332E60 (MiDeleteVirtualAddresses.c)
 *     MiRemoveSecureEntry @ 0x14034D404 (MiRemoveSecureEntry.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 */

void __fastcall MiUnmapLockedPagesInUserSpace(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 PteAddress; // rbp
  _KPROCESS *Process; // r13
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *OldestSecure; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  _OWORD v20[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+B8h] [rbp+20h] BYREF

  PteAddress = MiGetPteAddress(BugCheckParameter2);
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = MiObtainReferencedVadEx(BugCheckParameter2, 1, &v22);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0x10 )
      goto LABEL_20;
    v8 = *(unsigned __int8 *)(v6 + 33);
    v9 = *(unsigned __int8 *)(v6 + 32);
    v10 = *(unsigned int *)(v6 + 24);
    v11 = *(unsigned int *)(v6 + 28);
    v12 = ((v11 | (v8 << 32)) << 12) | 0xFFF;
    v13 = (v10 | (v9 << 32)) << 12;
    v14 = v11 | (v8 << 32);
    v15 = v9 << 32;
    if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != v13 || a2 != v14 - (v15 | (unsigned int)v10) + 1 )
    {
      if ( v13 + 4096 != (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL)
        || a2 != v14 - (v15 | v10) - 1
        || (PteAddress & 0xFFF) != 0 && MI_READ_PTE_LOCK_FREE(PteAddress - 8) )
      {
        goto LABEL_20;
      }
      v17 = MiGetPteAddress(v12);
      if ( (v17 & 0xFFF) != 0 )
      {
        if ( MI_READ_PTE_LOCK_FREE(v17) )
          goto LABEL_20;
      }
    }
    OldestSecure = MiLocateOldestSecure(v7, v14, v15, v10);
    if ( !OldestSecure )
      KeBugCheckEx(0x1Au, 0x1402uLL, BugCheckParameter2, v7, 0LL);
    MiRemoveSecureEntry(v7, OldestSecure);
    if ( (*(_DWORD *)(v7 + 48) & 8) != 0
      && (Process[1].DirectoryTableBase & 0x2000000000LL) == 0
      && (int)MiCheckSecuredVad(
                v7,
                v13,
                ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
               - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
               + 1) << 12,
                0x55u,
                0) < 0 )
    {
      v18 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
      v21 = 0LL;
      v19 = ((*(unsigned int *)(v7 + 28) | v18) << 12) | 0xFFF;
      memset(v20, 0, sizeof(v20));
      MiDeleteVirtualAddresses(0LL, v13, v19, 64, v20);
LABEL_20:
      MiUnlockAndDereferenceVad((PVOID)v7);
      return;
    }
    MiDeleteVad((PVOID)v7);
  }
}
