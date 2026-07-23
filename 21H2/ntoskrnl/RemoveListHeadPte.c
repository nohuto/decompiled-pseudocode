/*
 * XREFs of RemoveListHeadPte @ 0x14031D144
 * Callers:
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall RemoveListHeadPte(__int64 *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rdi
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // rax
  __int64 PteLink; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // ebp
  bool v16; // zf

  v1 = a1[2];
  v3 = (_QWORD *)(v1 + 8 * MiGetPteLink(*a1));
  v4 = MI_READ_PTE_LOCK_FREE(v3);
  if ( (v4 & 0x3E0) != 0 || (v4 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3800uLL, (ULONG_PTR)v3, v4, 0LL);
  v5 = MI_READ_PTE_LOCK_FREE(v3 + 1);
  if ( (v5 & 0x3E0) != 0 || (v5 & 1) != 0 )
    KeBugCheckEx(0x1Au, 0x3801uLL, (ULONG_PTR)v3, v5, 0LL);
  PteLink = MiGetPteLink(*v3);
  v7 = MiSwizzleInvalidPte(PteLink << 28);
  *a1 = v7;
  v8 = (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v1 - 0x98000000000LL) >> 3;
  if ( v9 == v8 )
  {
    a1[1] = v7;
    return v3;
  }
  v10 = MiSwizzleInvalidPte(v8 << 28);
  v12 = v1 + 8 * v11;
  v13 = v10;
  v14 = 0;
  if ( (unsigned int)MiPteInShadowRange(v12 + 8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v16 = (v13 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_5;
      v16 = (v13 & 1) == 0;
    }
    if ( !v16 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)(v12 + 8) = v13;
  if ( v14 )
    MiWritePteShadow(v12 + 8, v13);
  return v3;
}
