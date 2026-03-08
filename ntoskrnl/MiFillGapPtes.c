/*
 * XREFs of MiFillGapPtes @ 0x140B5F3B0
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

_BOOL8 __fastcall MiFillGapPtes(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rbp
  char v6; // al
  unsigned __int64 v7; // rcx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // r8
  bool v13; // zf

  v4 = a3;
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  if ( (v6 & 1) == 0 )
  {
    v7 = (unsigned __int64)a2;
    if ( (_DWORD)v4 )
      v7 = 0LL;
    ValidPte = MiMakeValidPte(
                 v7,
                 *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v4),
                 (_DWORD)v4 != 0 ? -1476395004 : 536870913);
    v9 = ValidPte;
    if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << v4) & (unsigned __int8)byte_140C6570F) != 0 )
      v9 = ValidPte & 0xFFFFFFFFFFFFFFDFuLL;
    v10 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_8;
    if ( MiPteHasShadow() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
        v13 = (v9 & 1) == 0;
        goto LABEL_19;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v13 = (v9 & 1) == 0;
LABEL_19:
      if ( !v13 )
        v9 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *a2 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)a2, v9, v11);
    return 0LL;
  }
  return (_DWORD)v4 && v6 < 0;
}
