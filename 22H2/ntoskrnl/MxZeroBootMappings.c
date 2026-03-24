/*
 * XREFs of MxZeroBootMappings @ 0x140A5767C
 * Callers:
 *     MiZeroBootMappings @ 0x140A5661C (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x140A5767C (MxZeroBootMappings.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MxZeroBootMappings @ 0x140A5767C (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x140A577A4 (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // esi
  __int64 v10; // r8
  bool v11; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    while ( 1 )
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v15 = v6;
      v7 = v6;
      if ( v6 )
        break;
LABEL_4:
      v5 += 8LL;
      if ( v5 >= a2 )
        return;
    }
    if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
    {
      if ( a3 > 1 )
        MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
      if ( MiPteInShadowRange((unsigned __int64)&v15)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v15 >> 3) & 0x1FF));
          v14 = v7 | 0x20;
          if ( (v13 & 0x20) == 0 )
            v14 = v7;
          v7 = v14;
          if ( (v13 & 0x42) != 0 )
            v7 = v14;
        }
      }
      MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFLL);
    }
    v8 = ZeroPte;
    v9 = 0;
    if ( !MiPteInShadowRange(v5) )
    {
LABEL_13:
      *(_QWORD *)v5 = v8;
      if ( v9 )
        MiWritePteShadow(v5, v8, v10);
      goto LABEL_4;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_13;
      v11 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
      v11 = (ZeroPte & 1) == 0;
    }
    if ( !v11 )
      v8 = ZeroPte | 0x8000000000000000uLL;
    goto LABEL_13;
  }
}
