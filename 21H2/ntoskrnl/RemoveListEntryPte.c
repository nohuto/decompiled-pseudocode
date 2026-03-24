/*
 * XREFs of RemoveListEntryPte @ 0x1402BDFF8
 * Callers:
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetPteLink @ 0x140312BE0 (MiGetPteLink.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall RemoveListEntryPte(__int64 *a1, __int64 *a2)
{
  __int64 PteLink; // rax
  __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r8
  bool v17; // zf
  bool v18; // zf

  PteLink = MiGetPteLink(a2[1]);
  v5 = a1[2];
  v6 = a1;
  v7 = (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3;
  if ( PteLink != v7 )
    v6 = (__int64 *)(v5 + 8 * PteLink);
  v8 = *a2;
  v9 = 0;
  if ( (unsigned int)MiPteInShadowRange(v6, v7) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_4;
      v17 = (v8 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v17 = (v8 & 1) == 0;
    }
    if ( !v17 )
      v8 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v6 = v8;
  if ( v9 )
    MiWritePteShadow((__int64)v6, v8, v10);
  v11 = MiGetPteLink(*a2);
  v12 = a1[2];
  if ( v11 != (__int64)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - v12 - 0x98000000000LL) >> 3 )
    a1 = (__int64 *)(v12 + 8 * v11);
  v13 = a2[1];
  v14 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 1, v12);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_9;
      v18 = (v13 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v18 = (v13 & 1) == 0;
    }
    if ( !v18 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_9:
  a1[1] = v13;
  if ( v14 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)(a1 + 1), v13, v16);
  return (char)CurrentThread;
}
