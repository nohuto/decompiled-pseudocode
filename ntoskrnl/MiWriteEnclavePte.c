/*
 * XREFs of MiWriteEnclavePte @ 0x1406465DC
 * Callers:
 *     MiAddPagesToEnclave @ 0x14064445C (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MiUpdateAwePageTable @ 0x140649AB0 (MiUpdateAwePageTable.c)
 */

char __fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  char result; // al
  __int64 v13; // rdi
  int v14; // r15d
  BOOL v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8

  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v10 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x7F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( a4 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter1, a2);
LABEL_21:
    LODWORD(v17) = 0;
    goto LABEL_22;
  }
  v13 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
  v14 = 0;
  v15 = MiPteInShadowRange(BugCheckParameter1);
  v17 = 0LL;
  v18 = 1LL;
  if ( v15 )
  {
    if ( MiPteHasShadow() )
    {
      v14 = v18;
      if ( HIBYTE(word_140C6697C) != (_BYTE)v17 )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( ((unsigned __int8)a2 & (unsigned __int8)v18) != 0 )
      a2 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *(_QWORD *)BugCheckParameter1 = a2;
  if ( v14 )
  {
    MiWritePteShadow(BugCheckParameter1, a2, v16);
    v17 = 0LL;
  }
  v19 = (unsigned int)v17;
  if ( v13 )
  {
    if ( (v13 & 0xC00) == 0x800 )
      v18 = v17;
  }
  else
  {
    v19 = (unsigned int)v18;
  }
  result = v18 | v19;
  if ( v18 | (unsigned int)v19 )
  {
    result = MiUpdateAwePageTable(v10, v18, v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
