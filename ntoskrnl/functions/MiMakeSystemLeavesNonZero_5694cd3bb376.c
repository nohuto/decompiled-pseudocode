char __fastcall MiMakeSystemLeavesNonZero(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rdi
  int i; // ebp
  unsigned __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // r8
  bool v16; // zf

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = a2 << 25 >> 16;
  if ( a3 > 0 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v5 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
  }
  v8 = (_QWORD *)v6;
  v9 = v6 + 4088;
  if ( v4 >= v6 )
    v8 = (_QWORD *)v4;
  if ( v5 < v6 + 4096 )
    v9 = v5;
  CurrentThread = (struct _KTHREAD *)MiSwizzleInvalidPte(768LL);
  v11 = (unsigned __int64)CurrentThread;
  for ( i = ((__int64)(v9 - (_QWORD)v8) >> 3) + 1; i; --i )
  {
    v13 = v11;
    v14 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v8);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v16 = (v11 & 1) == 0;
          goto LABEL_19;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v16 = (v11 & 1) == 0;
LABEL_19:
          if ( !v16 )
            v13 = v11 | 0x8000000000000000uLL;
        }
      }
    }
    *v8 = v13;
    if ( v14 )
      LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v8, v13, v15);
    ++v8;
  }
  return (char)CurrentThread;
}
