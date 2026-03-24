/*
 * XREFs of MiSlowRotateCopy @ 0x140539C3C
 * Callers:
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeCopyPage @ 0x1404024D0 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x1405399EC (MiInitializeSlowPte.c)
 *     MiGetPteMappingPair @ 0x14056353C (MiGetPteMappingPair.c)
 *     MiReturnPteMappingPair @ 0x140563600 (MiReturnPteMappingPair.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rsi
  int v6; // edx
  bool v7; // cl
  char result; // al
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  int v17; // edi
  BOOL v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  bool v21; // zf
  __int128 v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v23; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v22 = 0LL;
  v23 = 0LL;
  v6 = *(_DWORD *)(a3 + 48) & 0xC00;
  v7 = (*(_DWORD *)(a3 + 48) & 0x380) != 0;
  result = v6 == 3072;
  v9 = 0LL;
  if ( v7 && v6 == 3072 )
    v10 = 2;
  else
    v10 = v6 != 1024;
  if ( v4 )
  {
    v11 = a1 - (_QWORD)v3;
    while ( 1 )
    {
      MiGetPteMappingPair(1LL, &v22, v9);
      v12 = (unsigned __int64)v23;
      v13 = (__int64)(v23 + 1);
      MiInitializeSlowPte(v23, *v3, v10);
      MiInitializeSlowPte((unsigned __int64 *)v13, *(unsigned __int64 *)((char *)v3 + v11 + 48), v10);
      KeCopyPage(v13 << 25 >> 16, (__int64)(v12 << 25) >> 16);
      v14 = ZeroPte;
      if ( !MiPteInShadowRange(v12) )
        goto LABEL_16;
      if ( !(unsigned int)MiPteHasShadow() )
        break;
      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
        v14 = ZeroPte | 0x8000000000000000uLL;
      *(_QWORD *)v12 = v14;
      MiWritePteShadow(v12, v14, v15);
LABEL_17:
      v16 = ZeroPte;
      v17 = 0;
      v18 = MiPteInShadowRange(v13);
      v20 = 0LL;
      if ( v18 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v17 = v20 + 1;
          if ( HIBYTE(word_140C4E008) == (_BYTE)v20 )
          {
            v21 = ((unsigned __int8)ZeroPte & (unsigned __int8)v17) == 0;
            goto LABEL_23;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v21 = (ZeroPte & 1) == 0;
LABEL_23:
          if ( !v21 )
            v16 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v13 = v16;
      if ( v17 )
        MiWritePteShadow(v13, v16, v19);
      result = MiReturnPteMappingPair(&v22, v20);
      ++v3;
      if ( !--v4 )
        return result;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      *v23 = ZeroPte;
      goto LABEL_17;
    }
    v12 = (unsigned __int64)v23;
    if ( (ZeroPte & 1) != 0 )
      v14 = ZeroPte | 0x8000000000000000uLL;
LABEL_16:
    *(_QWORD *)v12 = v14;
    goto LABEL_17;
  }
  return result;
}
