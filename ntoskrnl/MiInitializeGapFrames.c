/*
 * XREFs of MiInitializeGapFrames @ 0x140B36EE8
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r14
  __int64 *v5; // r12
  unsigned int v6; // esi
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 ValidPte; // rdi
  BOOL v13; // eax
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rdi
  int v17; // r8d
  unsigned __int64 v18; // rax
  bool v20; // zf

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C69378;
  }
  else
  {
    v4 = qword_140C69390;
  }
  v5 = (__int64 *)MiReservePtes((__int64)&qword_140C695C0, 3u);
  if ( v5 && (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
  {
    v6 = 0;
    v7 = a2;
    while ( !v6 )
    {
LABEL_17:
      *v7 = v4;
      ++v6;
      ++v7;
      if ( v6 >= 4 )
      {
        MiReleasePtes((__int64)&qword_140C695C0, v5, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)MiSystemPartition, v6, 0x208u);
    v4 = Page;
    if ( Page == -1 )
      return 0LL;
    v9 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    v10 = *(_QWORD *)(v9 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 24) = v10 | 1;
    v11 = (__int64)&v5[v6 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v5[v6], v4, -1610612732);
    v13 = MiPteInShadowRange(v11);
    v15 = 0LL;
    if ( !v13 )
    {
LABEL_9:
      *(_QWORD *)v11 = ValidPte;
      if ( v2 )
        MiWritePteShadow(v11, ValidPte, v14);
      v16 = v11 << 25 >> 16;
      v17 = 536870913;
      if ( v6 != 1 )
      {
        v11 = v15;
        v17 = -1476395004;
      }
      v18 = MiMakeValidPte(v11, a2[v6 - 1], v17);
      if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << (v6 - 1)) & (unsigned __int8)byte_140C6570F) != 0 )
        v18 &= ~0x20uLL;
      v2 = 0;
      memset64((void *)v16, v18, 0x200uLL);
      goto LABEL_17;
    }
    if ( MiPteHasShadow() )
    {
      v2 = 1;
      if ( HIBYTE(word_140C6697C) != (_BYTE)v15 )
        goto LABEL_9;
      v20 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v20 = (ValidPte & 1) == 0;
    }
    if ( !v20 )
      ValidPte |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  return 0LL;
}
