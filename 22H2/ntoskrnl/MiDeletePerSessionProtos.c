/*
 * XREFs of MiDeletePerSessionProtos @ 0x1403285B0
 * Callers:
 *     MiFreeSubsectionProtos @ 0x14069FA50 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140779528 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402788E0 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *P)
{
  __int64 *v1; // r9
  __int64 v2; // r12
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v20[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v21 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v20[0] = v10;
  v11 = *(_QWORD *)(qword_140C4E648 + 8 * v9);
  v22 = v4 + 8 * v8;
  if ( v4 < v22 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
          MiUnlockProtoPoolPage(v2, v3);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, (__int64)&v21);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4, 0, 0LL);
        }
        v3 = v21;
      }
      v12 = MiLockLeafPage(v4, 0LL);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12);
          KeSetPagePrivilege((v12 + 0x58000000000LL) / 48, v20, 16LL);
          MiClearPfnImageVerified(v12, 4LL, v16, v17);
          v10 = v20[0];
        }
        LOBYTE(v14) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12, v14, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          v18 = MiSwizzleInvalidPte(768LL);
          if ( v19 != v18 )
            MiReleasePageFileSpace(v11, v19, 1LL);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v20[0] = v10;
    }
    while ( v4 < v22 );
    if ( v3 != 17 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit(v11, v8);
  MiUpdateSystemProtoPtesTree(P + 3, 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
