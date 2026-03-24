/*
 * XREFs of MiWriteEnclavePte @ 0x14054B4DC
 * Callers:
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x14054AA70 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x14028EA10 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUpdateAwePageTable @ 0x14054DF74 (MiUpdateAwePageTable.c)
 */

struct _KTHREAD *__fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  int v5; // edi
  __int64 v7; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  struct _KTHREAD *result; // rax
  __int64 v13; // rdi
  int v14; // r15d
  BOOL v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8

  v5 = (int)a4;
  v7 = a2;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v10 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9, a2, a3, a4);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x3F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( v5 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter1, v7);
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
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = v18;
      if ( HIBYTE(word_140C4E008) != (_BYTE)v17 )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( ((unsigned __int8)v7 & (unsigned __int8)v18) != 0 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *(_QWORD *)BugCheckParameter1 = v7;
  if ( v14 )
  {
    MiWritePteShadow(BugCheckParameter1, v7, v16);
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
  result = (struct _KTHREAD *)(v18 | (unsigned int)v19);
  if ( result )
  {
    result = (struct _KTHREAD *)MiUpdateAwePageTable(v10, v18, v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return (struct _KTHREAD *)MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
