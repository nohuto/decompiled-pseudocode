/*
 * XREFs of MiGetPteFromCopyList @ 0x1402402F0
 * Callers:
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiAddPagesToEnclave @ 0x140549044 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D21D8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 *__fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rdx
  int v9; // r8d
  __int64 *v10; // rdi
  char v11; // dl
  __int64 ValidPte; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // dl
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  _QWORD v28[24]; // [rsp+20h] [rbp-108h] BYREF

  memset(v28, 0, 0xB8uLL);
  v6 = 2;
  v7 = 1;
  if ( a3 == -1 )
    v6 = 1;
  v8 = *a1;
  if ( (int)v8 + v6 > a1[1] )
  {
    v26 = *a1;
    LODWORD(v28[1]) = 20;
    v27 = *((_QWORD *)a1 + 2) << 25;
    v28[3] = 0LL;
    MiInsertTbFlushEntry(v28, v27 >> 16, v26, 0LL);
    MiFlushTbList(v28);
    v8 = 0LL;
  }
  v9 = 4;
  v10 = (__int64 *)(*((_QWORD *)a1 + 2) + 8 * v8);
  *a1 = v8 + v6;
  v11 = *(_BYTE *)(48 * a2 - 0x57FFFFFFFDELL) >> 6;
  if ( v11 )
  {
    if ( v11 == 2 )
      v9 = 28;
  }
  else
  {
    v9 = 12;
  }
  ValidPte = MiMakeValidPte(v10, a2, v9 | 0xA0000000);
  if ( !(unsigned int)MiPteInShadowRange(v10, v13) )
    goto LABEL_9;
  if ( !(unsigned int)MiPteHasShadow(v15, v14, v16, v17) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ValidPte & 1) != 0 )
    {
      ValidPte |= 0x8000000000000000uLL;
    }
LABEL_9:
    *v10 = ValidPte;
    goto LABEL_10;
  }
  if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
    ValidPte |= 0x8000000000000000uLL;
  *v10 = ValidPte;
  MiWritePteShadow(v10, ValidPte);
LABEL_10:
  if ( a3 != -1 )
  {
    v18 = *(_BYTE *)(48 * a3 - 0x57FFFFFFFDELL) >> 6;
    if ( v18 )
    {
      if ( v18 == 2 )
        v7 = 25;
    }
    else
    {
      v7 = 9;
    }
    v19 = MiMakeValidPte(v10, a3, v7 | 0x20000000u);
    if ( !(unsigned int)MiPteInShadowRange(v10 + 1, v20) )
      goto LABEL_15;
    if ( !(unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v19 & 1) != 0 )
      {
        v19 |= 0x8000000000000000uLL;
      }
LABEL_15:
      v10[1] = v19;
      return v10;
    }
    if ( !HIBYTE(word_140C4E008) && (v19 & 1) != 0 )
      v19 |= 0x8000000000000000uLL;
    v10[1] = v19;
    MiWritePteShadow(v10 + 1, v19);
  }
  return v10;
}
