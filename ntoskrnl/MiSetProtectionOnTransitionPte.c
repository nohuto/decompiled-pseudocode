/*
 * XREFs of MiSetProtectionOnTransitionPte @ 0x1402EC490
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSanitizePfnProtection @ 0x140322D40 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiSetProtectionOnTransitionPte(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v11; // rbx
  char v12; // al
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v19; // r13
  unsigned int v20; // edx
  __int64 v21; // r15
  __int64 v22; // rbp
  unsigned __int64 v23; // r15
  int v24; // r9d
  int v25; // ecx
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned __int64 ValidPte; // rbx
  __int64 v29; // r8
  int v30; // eax
  unsigned int v31; // [rsp+24h] [rbp-44h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v5 = a1;
  v6 = *(unsigned int *)(a1 + 48);
  if ( (v6 & 0xA00000) == 0xA00000 )
  {
    v19 = 16LL;
    v32 = MiVadPageSizes[(v6 >> 19) & 3];
    if ( v32 != 16 )
      v19 = 1LL;
    if ( a3 == 24 )
      return 0LL;
    v20 = 0;
    v21 = 0LL;
    v31 = 0;
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 )
      {
        ++v21;
      }
      else
      {
        v23 = MI_READ_PTE_LOCK_FREE(a2);
        if ( qword_140C657C0 )
        {
          if ( (v23 & 0x10) != 0 )
            v23 &= ~0x10uLL;
          else
            v23 &= ~qword_140C657C0;
        }
        v21 = (v23 >> 12) & 0xFFFFFFFFFFLL;
        v24 = MiSanitizePfnProtection(v5, (*(_QWORD *)(48 * v21 - 0x220000000000LL + 16) >> 5) & 0x1FLL, a3);
        v25 = v24 | 0x4000000;
        *(_QWORD *)(v27 + 16) = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)(32 * v24)) & 0x3E0;
        if ( v32 < 0x200 )
          v25 = v24;
        v20 = v25 | 0x80000000;
        if ( (*(_DWORD *)(v5 + 48) & 0x600000) == 0x600000 )
          v20 = v25;
        v31 = v20;
      }
      ValidPte = MiMakeValidPte((unsigned __int64)a2, v21, v20);
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        if ( MiPteHasShadow() )
        {
          v30 = 1;
          if ( !HIBYTE(word_140C6697C) )
            goto LABEL_26;
        }
        else
        {
          v30 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_26:
            if ( (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
          }
        }
      }
      else
      {
        v30 = 0;
      }
      *a2 = ValidPte;
      if ( v30 )
        MiWritePteShadow((__int64)a2, ValidPte, v29);
      v5 = a1;
      ++a2;
      v20 = v31;
      if ( ++v22 >= v19 )
        return 0LL;
    }
  }
  v9 = 0;
  v10 = MiLockTransitionLeafPageEx((ULONG_PTR)a2, 0LL, 0);
  if ( v10 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a2);
    if ( !a4 && *(_WORD *)(v10 + 32) )
    {
      v9 = 1;
LABEL_7:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v9;
    }
    v12 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v10 + 16) >> 5) & 0x1FLL, a3);
    v13 = 0;
    v14 = 32LL * (v12 & 0x1F);
    v16 = v14 | v11 & 0xFFFFFFFFFFFFFC1FuLL;
    *(_QWORD *)(v10 + 16) = v14 | v15 & 0xFFFFFFFFFFFFFC1FuLL;
    if ( !(unsigned int)MiPteInShadowRange(a2) )
    {
LABEL_5:
      *a2 = v16;
      if ( v13 )
        MiWritePteShadow((__int64)a2, v16, v17);
      goto LABEL_7;
    }
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_5;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_5;
    }
    if ( (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_5;
  }
  return 2LL;
}
