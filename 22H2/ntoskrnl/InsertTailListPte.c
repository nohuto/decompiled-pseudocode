/*
 * XREFs of InsertTailListPte @ 0x140292920
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14029037C (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x14030A67C (MiExpandSystemCache.c)
 * Callees:
 *     MiGetPteLink @ 0x140293260 (MiGetPteLink.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(struct _KTHREAD **a1, unsigned __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 PteLink; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rdx
  __int64 v21; // rbp
  struct _KTHREAD *result; // rax
  __int64 v23; // rdx
  unsigned __int64 *v24; // rsi
  struct _KTHREAD *v25; // rbx
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9

  v4 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  v5 = MiSwizzleInvalidPte((v4 - (__int64)a1[2] - 0x98000000000LL) >> 3 << 28);
  v6 = v5;
  if ( !(unsigned int)MiPteInShadowRange(v7, v7) )
  {
LABEL_2:
    *a2 = v6;
    goto LABEL_3;
  }
  if ( !(unsigned int)MiPteHasShadow(v9, v8, v10, v11) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v5 & 1) != 0 )
      v6 = v5 | 0x8000000000000000uLL;
    goto LABEL_2;
  }
  if ( !HIBYTE(word_140C4E008) && (v5 & 1) != 0 )
    v6 = v5 | 0x8000000000000000uLL;
  *a2 = v6;
  MiWritePteShadow(a2, v6);
LABEL_3:
  PteLink = MiGetPteLink(a1[1]);
  v13 = PteLink;
  if ( qword_140C4DF40 )
  {
    if ( (v5 & 0x10) != 0 )
      LODWORD(v5) = v5 & 0xFFFFFFEF;
    else
      LODWORD(v5) = ~(_DWORD)qword_140C4DF40 & v5;
  }
  v14 = MiSwizzleInvalidPte(v5 & 0xFFFFFFF | (PteLink << 28));
  if ( !(unsigned int)MiPteInShadowRange(a2 + 1, v15) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v17, v16, v18, v19) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_7:
    a2[1] = v14;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140C4E008) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  a2[1] = v14;
  MiWritePteShadow(a2 + 1, v14);
LABEL_8:
  v20 = a1[2];
  v21 = (v4 - (__int64)v20 - 0x98000000000LL) >> 3;
  result = (struct _KTHREAD *)MiSwizzleInvalidPte(((char *)a2 - (char *)v20) >> 3 << 28);
  if ( v13 != v21 )
  {
    v24 = (unsigned __int64 *)(v23 + 8 * v13);
    v25 = result;
    v26 = (unsigned __int64)result;
    result = (struct _KTHREAD *)MiPteInShadowRange(v24, v23);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)MiPteHasShadow(v28, v27, v29, v30) )
      {
        if ( !HIBYTE(word_140C4E008) && ((unsigned __int8)v25 & 1) != 0 )
          v26 |= 0x8000000000000000uLL;
        *v24 = v26;
        result = (struct _KTHREAD *)MiWritePteShadow(v24, v26);
        goto LABEL_11;
      }
      result = KeGetCurrentThread();
      if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && ((unsigned __int8)v25 & 1) != 0 )
      {
        v26 |= 0x8000000000000000uLL;
      }
    }
    *v24 = v26;
LABEL_11:
    a1[1] = v25;
    return result;
  }
  *a1 = result;
  a1[1] = result;
  return result;
}
