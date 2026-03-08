/*
 * XREFs of MmMapProtectedKernelPage @ 0x140A414B4
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

char __fastcall MmMapProtectedKernelPage(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rdi
  __int64 v2; // rdx
  unsigned __int64 ValidPte; // rbx
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  bool v7; // zf

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  ValidPte = MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913);
  v4 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)PteAddress);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v4 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v7 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v7 = (ValidPte & 1) == 0;
    }
    if ( !v7 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *PteAddress = ValidPte;
  if ( v4 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)PteAddress, ValidPte, v6);
  return (char)CurrentThread;
}
