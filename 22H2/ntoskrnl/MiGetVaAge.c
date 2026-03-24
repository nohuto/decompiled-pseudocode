/*
 * XREFs of MiGetVaAge @ 0x140289770
 * Callers:
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdateWsleAge @ 0x140317BA8 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPte @ 0x14039B0F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053B9C0 (MiResetAccessBitPteWorker.c)
 *     MiSimpleAgePte @ 0x14053BC00 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14053C4F0 (MiUpdateOldPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  char v13; // r8^7

  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL
      && v2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v12 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v13 = HIBYTE(*(_QWORD *)v2);
        if ( (v12 & 0x20) == 0 )
          v13 = HIBYTE(v3);
        HIBYTE(v3) = v13;
        if ( (v12 & 0x42) != 0 )
          HIBYTE(v3) = v13;
      }
    }
    return HIBYTE(v3) & 0xF;
  }
  else
  {
    v5 = a2 >> 9;
    v6 = (v5 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = *(_QWORD *)v6;
    if ( (unsigned int)MiPteInShadowRange(v6, v5)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v8 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v8 )
      {
        v9 = v7 | 0x20;
        v10 = *((_QWORD *)&v8->Flink + ((v6 >> 3) & 0x1FF));
        if ( (v10 & 0x20) == 0 )
          v9 = v7;
        v7 = v9;
        if ( (v10 & 0x42) != 0 )
          v7 = v9 | 0x42;
      }
    }
    return (*(_BYTE *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) >> 1) & 7;
  }
}
