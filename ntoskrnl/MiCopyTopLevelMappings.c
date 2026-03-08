/*
 * XREFs of MiCopyTopLevelMappings @ 0x1402A5C20
 * Callers:
 *     MiCreateNewProcessTopLevelMappings @ 0x1402A604C (MiCreateNewProcessTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x1406170F0 (MiUpdateSystemPdes.c)
 * Callees:
 *     MiShadowTopLevelPxes @ 0x1402A5D94 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

struct _KTHREAD *__fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  BOOL v12; // edi
  struct _KTHREAD *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((((unsigned __int64)qword_140C6A1D8 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  memmove(
    (void *)(a2 + 8 * ((((unsigned __int64)qword_140C66CF0 >> 39) & 0x1FF) + 1)),
    (const void *)(8 * ((((unsigned __int64)qword_140C66CF0 >> 39) & 0x1FF) + 1) - 0x90482413000LL),
    8 * (511 - (((unsigned __int64)qword_140C66CF0 >> 39) & 0x1FF)));
  v4 = (_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140C65668 >> 39) & 0x1FF));
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0
    || (v6 = *(_QWORD *)(a1 + 1368)) == 0
    || (v5 = MI_READ_PTE_LOCK_FREE(v6 + 744), (v5 & 1) == 0) )
  {
    v12 = 0;
    result = (struct _KTHREAD *)MiPteInShadowRange(v4);
    if ( (_DWORD)result )
    {
      result = (struct _KTHREAD *)MiPteHasShadow(v18, v17, v19);
      v12 = (_DWORD)result != 0;
    }
    goto LABEL_9;
  }
  if ( (MI_READ_PTE_LOCK_FREE(v4) & 1) != 0 )
  {
    v7 = ZeroPte;
    v8 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v4) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow(v10, v9, v11) )
    {
      v8 = 1;
      if ( !HIBYTE(word_140C6697C) )
      {
LABEL_17:
        if ( (ZeroPte & 1) != 0 )
          v7 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_17;
    }
LABEL_6:
    *v4 = v7;
    if ( v8 )
      MiWritePteShadow(v4, v7);
  }
  v12 = 0;
  result = (struct _KTHREAD *)MiPteInShadowRange(v4);
  if ( !(_DWORD)result )
    goto LABEL_9;
  result = (struct _KTHREAD *)MiPteHasShadow(v15, v14, v16);
  if ( (_DWORD)result )
  {
    v12 = 1;
    if ( HIBYTE(word_140C6697C) )
      goto LABEL_9;
  }
  else
  {
    result = KeGetCurrentThread();
    if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_9;
  }
  v5 |= 0x8000000000000000uLL;
LABEL_9:
  *v4 = v5;
  if ( v12 )
    return (struct _KTHREAD *)MiWritePteShadow(v4, v5);
  return result;
}
