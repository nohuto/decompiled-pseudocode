/*
 * XREFs of MiInvalidateCollidedIos @ 0x1402C6204
 * Callers:
 *     MiDeleteTransitionPte @ 0x1402833F0 (MiDeleteTransitionPte.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x1402C6460 (MiReleaseInPageRefs.c)
 *     MiUpdateTransitionPteFrame @ 0x1402C6CD0 (MiUpdateTransitionPteFrame.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  _QWORD *v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rdx
  _QWORD *v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // rsi
  __int64 v26; // rax
  __int64 updated; // rdi
  unsigned __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 1;
  if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 )
  {
    v4 = 0LL;
    v5 = a1;
    goto LABEL_3;
  }
  v13 = (_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v14 + 8) != a1 + 16 || (v15 = *(_QWORD **)(a1 + 24), (_QWORD *)*v15 != v13) )
LABEL_38:
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  v16 = *(_QWORD *)(a1 + 320);
  v5 = *(_QWORD *)(a1 + 328);
  v17 = 48 * v16 - 0x220000000000LL;
  if ( v1 < 0 )
  {
    MiReleaseInPageRefs(48 * v16 - 0x220000000000LL);
    result = 0LL;
    v13[1] = v13;
    *v13 = v13;
    return result;
  }
  v18 = v5 + 272;
  v4 = (_QWORD *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
  v2 = 0;
  if ( *(_QWORD *)(v5 + 256) )
    v18 = *(_QWORD *)(v5 + 256);
  v19 = (_QWORD *)(v18 + 48);
  v20 = (((*(_DWORD *)(v18 + 32) + *(_DWORD *)(v18 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v18 + 40)
                                                                   + 4095) >> 12;
  v21 = 6LL * *(_QWORD *)(v18 + 48);
  v22 = v18 + 40 + 8 * v20;
  v23 = *(_QWORD *)(8 * v21 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  if ( (unsigned __int64)v4 < v23
    || (v24 = (__int64)((__int64)v4 - v23) >> 3, v24 >= v20)
    || (v25 = 48LL * v19[v24] - 0x220000000000LL, v4 != (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL)) )
  {
    while ( (unsigned __int64)v19 <= v22 )
    {
      v25 = 48LL * *v19 - 0x220000000000LL;
      if ( (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) == v4 )
        goto LABEL_18;
      ++v19;
    }
    v25 = 48 * v16 - 0x220000000000LL;
    *(_DWORD *)(v5 + 180) = 1;
    goto LABEL_23;
  }
LABEL_18:
  v2 = 1;
  v26 = MI_READ_PTE_LOCK_FREE(v4);
  updated = MiUpdateTransitionPteFrame(v26, v16);
  v28 = updated;
  if ( (unsigned int)MiPteInShadowRange(v4) )
  {
    if ( (unsigned int)MiPteHasShadow(v30, v29, v31) )
    {
      v32 = 1;
      if ( !HIBYTE(word_140C6697C) && (updated & 1) != 0 )
        v28 = updated | 0x8000000000000000uLL;
      goto LABEL_20;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (updated & 1) != 0 )
    {
      v28 = updated | 0x8000000000000000uLL;
    }
  }
  v32 = 0;
LABEL_20:
  *v4 = v28;
  if ( v32 )
    MiWritePteShadow(v4, v28);
  *(_QWORD *)(a1 + 168) = updated;
  *(_QWORD *)(v17 + 16) ^= (*(_DWORD *)(v17 + 16) ^ *(_DWORD *)(v25 + 16)) & 0x3E0;
LABEL_23:
  MiReleaseInPageRefs(v25);
LABEL_3:
  v6 = *(_QWORD **)(v5 + 16);
  while ( v6 != (_QWORD *)(v5 + 16) )
  {
    v8 = v6[38];
    v9 = v6;
    v6 = (_QWORD *)*v6;
    v10 = 48 * v8 - 0x220000000000LL;
    if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 || (_QWORD *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == v4 )
    {
      MiReleaseInPageRefs(v10);
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_38;
      v12 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v12 != v9 )
        goto LABEL_38;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return v2;
}
