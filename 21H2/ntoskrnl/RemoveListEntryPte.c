/*
 * XREFs of RemoveListEntryPte @ 0x14023C638
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x14031D930 (MiGetPteLink.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall RemoveListEntryPte(__int64 *a1, __int64 *a2)
{
  __int64 PteLink; // rax
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v14; // zf
  bool v15; // zf

  PteLink = MiGetPteLink(a2[1]);
  v5 = a1[2];
  v6 = a1;
  if ( PteLink != (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = (__int64 *)(v5 + 8 * PteLink);
  v7 = *a2;
  v8 = 0;
  if ( (unsigned int)MiPteInShadowRange(v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_4;
      v14 = (v7 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v14 = (v7 & 1) == 0;
    }
    if ( !v14 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v6 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)v6, v7);
  v9 = MiGetPteLink(*a2);
  v10 = a1[2];
  if ( v9 != (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v10 - 0x98000000000LL) >> 3 )
    a1 = (__int64 *)(v10 + 8 * v9);
  v11 = a2[1];
  v12 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_9;
      v15 = (v11 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v15 = (v11 & 1) == 0;
    }
    if ( !v15 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_9:
  a1[1] = v11;
  if ( v12 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)(a1 + 1), v11);
  return (char)CurrentThread;
}
