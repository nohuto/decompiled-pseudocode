/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140AA9E60
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 */

char __fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r14d
  _QWORD *PteAddress; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // r8
  bool v10; // zf
  unsigned __int64 *v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  int v14; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r8
  bool v17; // zf

  v3 = a1;
  v4 = 0;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = ZeroPte;
      v8 = 0;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      {
        if ( MiPteHasShadow() )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v10 = (ZeroPte & 1) == 0;
            goto LABEL_8;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v10 = (ZeroPte & 1) == 0;
LABEL_8:
          if ( !v10 )
            v7 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *PteAddress = v7;
      if ( v8 )
        MiWritePteShadow((__int64)PteAddress, v7, v9);
      ++v4;
      ++PteAddress;
      if ( v4 >= a2 )
      {
        do
        {
          KeFlushSingleCurrentTb(v3, 0);
          v3 += 4096LL;
          --a2;
        }
        while ( a2 );
        break;
      }
    }
  }
  v11 = (unsigned __int64 *)qword_140C67B30;
  v12 = 32LL;
  do
  {
    v13 = ZeroPte;
    v14 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v11);
    if ( !(_DWORD)CurrentThread )
      goto LABEL_23;
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v14 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_23;
      v17 = (ZeroPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v17 = (ZeroPte & 1) == 0;
    }
    if ( !v17 )
      v13 = ZeroPte | 0x8000000000000000uLL;
LABEL_23:
    *v11 = v13;
    if ( v14 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v11, v13, v16);
    ++v11;
    --v12;
  }
  while ( v12 );
  return (char)CurrentThread;
}
