/*
 * XREFs of MiWriteUselessChildPte @ 0x14066333C
 * Callers:
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

char __fastcall MiWriteUselessChildPte(__int64 *a1)
{
  __int64 v2; // rbx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  bool v6; // zf

  v2 = MiSwizzleInvalidPte(128LL);
  v3 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v3 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v6 = (v2 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v6 = (v2 & 1) == 0;
    }
    if ( !v6 )
    {
      LOBYTE(CurrentThread) = 0;
      v2 |= 0x8000000000000000uLL;
    }
  }
LABEL_9:
  *a1 = v2;
  if ( v3 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v2, v5);
  return (char)CurrentThread;
}
