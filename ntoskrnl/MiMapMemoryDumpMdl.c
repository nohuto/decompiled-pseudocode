/*
 * XREFs of MiMapMemoryDumpMdl @ 0x14062D938
 * Callers:
 *     MmMapMemoryDumpMdl @ 0x14062E230 (MmMapMemoryDumpMdl.c)
 *     MmMapMemoryDumpMdlEx @ 0x14062E270 (MmMapMemoryDumpMdlEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x14062E298 (MmMapMemoryDumpMdlEx2.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall MiMapMemoryDumpMdl(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rdi
  BOOL HasShadow; // edi
  __int64 v12; // r8
  unsigned __int64 *v13; // r14
  __int64 v14; // rdx
  unsigned int v15; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r12
  __int64 v18; // r15
  int ProtectionPfnCompatible; // eax
  __int64 *v20; // r9
  unsigned __int64 ValidPte; // rdi
  int v22; // ebp
  __int64 v23; // r8
  bool v24; // zf
  _QWORD v28[24]; // [rsp+40h] [rbp-F8h] BYREF

  memset(v28, 0, 0xB8uLL);
  v6 = *(unsigned int *)(a3 + 44);
  v7 = ((unsigned int)(v6 + *(_DWORD *)(a3 + 40)) >> 12) + ((((_DWORD)v6 + *(_DWORD *)(a3 + 40)) & 0xFFF) != 0);
  LODWORD(v28[1]) = 20;
  *(_QWORD *)(a3 + 24) = a1 + v6;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  BYTE4(v28[0]) = 3;
  v28[3] = 0LL;
  v9 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
    if ( (v10 & 1) != 0 )
      MiInsertTbFlushEntry((__int64)v28, v8, 1LL, 0);
    if ( v10 )
    {
      HasShadow = 0;
      if ( MiPteInShadowRange((unsigned __int64)v9) )
        HasShadow = MiPteHasShadow();
      *v9 = 0LL;
      if ( HasShadow )
        MiWritePteShadow((__int64)v9, 0LL, v12);
    }
    ++v9;
    v8 += 4096LL;
    --v7;
  }
  while ( v7 );
  v13 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( HIDWORD(v28[1]) )
    MiFlushTbList((int *)v28);
  v14 = *(unsigned int *)(a3 + 44);
  v15 = v14 + *(_DWORD *)(a3 + 40);
  LODWORD(CurrentThread) = (v15 & 0xFFF) != 0;
  *(_QWORD *)(a3 + 24) = a1 + v14;
  v17 = (v15 >> 12) + (unsigned int)CurrentThread;
  if ( (a4 & 2) != 0 )
  {
    *(_WORD *)(a3 + 10) &= 0xFFDEu;
    return (char)CurrentThread;
  }
  v18 = a3 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000030LL;
  do
  {
    ProtectionPfnCompatible = 4;
    if ( (a4 & 1) != 0 )
      v20 = (__int64 *)((char *)v13 + v18);
    else
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(
                                  4,
                                  48 * *(unsigned __int64 *)((char *)v13 + v18) - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v13, *v20, ProtectionPfnCompatible | 0xA0000000);
    v22 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v13);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_25;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v22 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_25;
      v24 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_25;
      v24 = (ValidPte & 1) == 0;
    }
    if ( !v24 )
      ValidPte |= 0x8000000000000000uLL;
LABEL_25:
    *v13 = ValidPte;
    if ( v22 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v13, ValidPte, v23);
    ++v13;
    --v17;
  }
  while ( v17 );
  *(_WORD *)(a3 + 10) |= 0x11u;
  return (char)CurrentThread;
}
