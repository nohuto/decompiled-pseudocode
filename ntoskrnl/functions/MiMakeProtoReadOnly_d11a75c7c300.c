char __fastcall MiMakeProtoReadOnly(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8

  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v5 = *(_BYTE *)(a2 + 34) >> 6;
  v6 = 1LL;
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      if ( v5 == 2 )
        v6 = 25LL;
    }
    else
    {
      v6 = 9LL;
    }
  }
  v7 = v4 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v6);
  v8 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_13;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
    }
    if ( (v7 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v7 |= 0x8000000000000000uLL;
    }
  }
LABEL_13:
  *a1 = v7;
  if ( v8 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v7, v10);
  return (char)CurrentThread;
}
