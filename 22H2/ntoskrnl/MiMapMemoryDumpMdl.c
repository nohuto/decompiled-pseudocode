/*
 * XREFs of MiMapMemoryDumpMdl @ 0x140383AF4
 * Callers:
 *     MmMapMemoryDumpMdlEx @ 0x140383670 (MmMapMemoryDumpMdlEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x140383AC0 (MmMapMemoryDumpMdlEx2.c)
 *     MmMapMemoryDumpMdl @ 0x140538A90 (MmMapMemoryDumpMdl.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14023B32C (MiMakeProtectionPfnCompatible.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

char __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r10
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  _KPROCESS *v10; // rdx
  __int64 v11; // rdi
  BOOL v12; // edi
  __int64 v13; // r8
  unsigned __int64 *v14; // r14
  __int64 v15; // rdx
  unsigned int v16; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r9
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rdi
  int v23; // ebp
  __int64 v24; // r8
  bool v25; // zf
  _QWORD v29[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v29, 0, 0xB8uLL);
  v6 = *(unsigned int *)(a3 + 44);
  v7 = ((unsigned int)(v6 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v6 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  LODWORD(v29[1]) = 20;
  *(_QWORD *)(a3 + 24) = a1 + v6;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  BYTE4(v29[0]) = 3;
  v29[3] = 0LL;
  v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (v11 & 1) != 0 )
      MiInsertTbFlushEntry((__int64)v29, v8, 1LL, 0);
    if ( v11 )
    {
      v12 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        v12 = MiPteHasShadow() != 0;
      *v9 = 0LL;
      if ( v12 )
        MiWritePteShadow((__int64)v9, 0LL, v13);
    }
    ++v9;
    v8 += 4096LL;
    --v7;
  }
  while ( v7 );
  v14 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( HIDWORD(v29[1]) )
    MiFlushTbList((__int64)v29, v10);
  v15 = *(unsigned int *)(a3 + 44);
  v16 = v15 + *(_DWORD *)(a3 + 40);
  LODWORD(CurrentThread) = (v16 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v15;
  v18 = (v16 >> 12) + (unsigned int)CurrentThread;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
    return (char)CurrentThread;
  }
  v19 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v20 = *(unsigned __int64 *)((char *)v14 + v19 + 48);
    ProtectionPfnCompatible = 4;
    if ( (a4 & 1) == 0 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * v20 - 0x58000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v14, v20, ProtectionPfnCompatible | 0xA0000000, v20);
    v23 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v14);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v23 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_17;
        v25 = (ValidPte & 1) == 0;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_17;
        v25 = (ValidPte & 1) == 0;
      }
      if ( !v25 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_17:
    *v14 = ValidPte;
    if ( v23 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v14, ValidPte, v24);
    ++v14;
    --v18;
  }
  while ( v18 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  return (char)CurrentThread;
}
