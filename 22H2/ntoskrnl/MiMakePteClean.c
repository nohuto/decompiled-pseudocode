/*
 * XREFs of MiMakePteClean @ 0x14028FBEC
 * Callers:
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x1402900EC (MiLockPageAndSetDirty.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiRewritePteWithLockBit @ 0x1403B65B8 (MiRewritePteWithLockBit.c)
 */

__int64 __fastcall MiMakePteClean(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(a1) & 0xFFFFFFFFFFFFFFBDuLL;
  v5 = 0;
  v12 = v4;
  v6 = a1 << 25 >> 16;
  if ( v6 < 0xFFFFF68000000000uLL )
    goto LABEL_2;
  do
  {
    if ( v6 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    ++v5;
    v6 = (__int64)(v6 << 25) >> 16;
  }
  while ( v6 >= 0xFFFFF68000000000uLL );
  if ( v5 )
  {
    v4 = v12;
    MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6], a1, v12);
    MiInsertLargeTbFlushEntry(a2, v5, a1);
  }
  else
  {
LABEL_2:
    MiWriteValidPteNewProtection(a1, v4);
    MiInsertTbFlushEntry(a2, v6, 1LL, 0LL);
  }
  v8 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v12, v7)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v4 |= 0x20uLL;
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        v4 = v8;
      if ( (v11 & 0x42) != 0 )
        v4 |= 0x42uLL;
    }
    else
    {
      v4 = v12;
    }
  }
  return MiLockPageAndSetDirty(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1LL);
}
