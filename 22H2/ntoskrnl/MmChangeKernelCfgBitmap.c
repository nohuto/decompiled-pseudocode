/*
 * XREFs of MmChangeKernelCfgBitmap @ 0x1408D79A8
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

char __fastcall MmChangeKernelCfgBitmap(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _QWORD *PteAddress; // rdi
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  char v5; // r8
  unsigned __int64 ValidPte; // rbx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  bool v10; // zf

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v4 = (unsigned __int64)PteAddress;
  if ( v5 )
  {
    ValidPte = MiMakeValidPte((unsigned __int64)PteAddress, v1, 536870913LL, v3);
    v4 = (unsigned __int64)PteAddress;
  }
  else
  {
    ValidPte = ZeroPte;
  }
  v7 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v4);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v7 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_12;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_12;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *PteAddress = ValidPte;
  if ( v7 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, ValidPte, v9);
  return (char)CurrentThread;
}
