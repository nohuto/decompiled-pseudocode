void __fastcall MiInitializeShadowPageTable(unsigned __int64 a1, _DWORD *a2, int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  int v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // edx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  int v13; // edx
  unsigned __int64 PteAddress; // rax
  int v15; // edx
  ULONG_PTR v16; // [rsp+58h] [rbp+20h] BYREF

  if ( !a3 )
  {
    v5 = (__int64)(a1 << 25) >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
    {
      PteAddress = a1;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v15 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfnEx(v5);
    }
    else
    {
      v16 = MI_READ_PTE_LOCK_FREE(a1);
      v6 = v16;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
    }
    v8 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v8 = (v6 & 0x800) != 0 ? 4 : 1;
    goto LABEL_6;
  }
  *(_QWORD *)a2 = 0LL;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x88000000000LL) >> 4);
  MiSetPfnOldestWsleLeafCount(a2, 0);
  v8 = v13 + 6;
  if ( a3 != 3 )
  {
LABEL_6:
    v9 = MiGetPteAddress(a1);
    v16 = MiReadWriteAnyLevelShadowPte(v9, v10, 0, ZeroPte);
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_7;
  }
  v11 = -1LL;
LABEL_7:
  v12 = MiMakeValidPte(a1, v7, v8 | (a3 != 0 ? -1744830464 : -1879048192)) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v11 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v7, a1, v11, 2560);
  }
  MiReadWriteAnyLevelShadowPte(a1, a3, 1, v12);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(a1);
    MiReplicatePteChange(a1, v12, 0);
  }
}
