void __fastcall MmUnmapProtectedKernelPageRange(unsigned __int64 a1, __int64 a2)
{
  __int64 PteAddress; // rdi
  unsigned __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // r8
  bool v8; // zf
  int v9[48]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v9, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  MiInitializeTbFlushList((__int64)v9, 0, 20);
  if ( a2 )
  {
    while ( (MI_READ_PTE_LOCK_FREE(PteAddress) & 1) == 0 )
    {
LABEL_13:
      PteAddress += 8LL;
      if ( !--a2 )
        goto LABEL_14;
    }
    MiInsertTbFlushEntry((__int64)v9, PteAddress << 25 >> 16, 1LL, 0);
    v5 = ZeroPte;
    v6 = 0;
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( MiPteHasShadow() )
      {
        v6 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v8 = (ZeroPte & 1) == 0;
          goto LABEL_9;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v8 = (ZeroPte & 1) == 0;
LABEL_9:
        if ( !v8 )
          v5 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)PteAddress = v5;
    if ( v6 )
      MiWritePteShadow(PteAddress, v5, v7);
    goto LABEL_13;
  }
LABEL_14:
  MiFlushTbList(v9);
}
