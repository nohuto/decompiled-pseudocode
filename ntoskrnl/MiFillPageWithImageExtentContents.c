/*
 * XREFs of MiFillPageWithImageExtentContents @ 0x14063AC90
 * Callers:
 *     MiCopyImageExtentContents @ 0x14063A258 (MiCopyImageExtentContents.c)
 *     MiCopyFromDirectMapExtent @ 0x140A30C8C (MiCopyFromDirectMapExtent.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReturnPteMappingSet @ 0x14032DFE8 (MiReturnPteMappingSet.c)
 *     MiGetPteMappingSet @ 0x14032E050 (MiGetPteMappingSet.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

unsigned __int64 __fastcall MiFillPageWithImageExtentContents(
        char *BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 *v8; // rsi
  unsigned __int64 ValidPte; // rbx
  int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // rdx
  ULONG_PTR v13; // r10
  int v14; // r9d
  int v15; // edx
  int v16; // r8d
  char *v17; // rbp
  __int64 v18; // r11
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // ebp
  __int64 v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rbp
  unsigned __int64 v30; // rbx
  int v31; // edi
  __int64 v32; // r8
  bool v33; // zf
  __int16 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  __int128 v37; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned int v39; // [rsp+B0h] [rbp+8h]

  BugCheckParameter4 = a4;
  v37 = 0LL;
  v38 = 0LL;
  v35 = a3;
  v39 = (a3 & 0xFFF) + a4;
  MiGetPteMappingSet(0, (v39 > 0x1000) + 2LL, (__int64)&v37);
  v8 = (unsigned __int64 *)v38;
  v36 = (__int64)(v38 << 25) >> 16;
  ValidPte = MiMakeValidPte(v38, a2, -1610612732);
  v10 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( MiPteHasShadow() )
    {
      v10 = 1;
      if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
        ValidPte |= v12;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        ValidPte |= v12;
      }
      v8 = (unsigned __int64 *)v38;
    }
  }
  *v8 = ValidPte;
  if ( v10 )
    MiWritePteShadow((__int64)v8, ValidPte, v11);
  v13 = a3 >> 12;
  v14 = 0;
  v15 = *(_DWORD *)BugCheckParameter3 - 1;
  if ( v15 < 0 )
    goto LABEL_19;
  while ( 1 )
  {
    v16 = (v14 + v15) >> 1;
    v17 = &BugCheckParameter3[48 * v16];
    v18 = *((unsigned int *)v17 + 8);
    if ( (unsigned int)v13 < (unsigned int)v18 )
    {
      if ( !v16 )
        KeBugCheckEx(0x1Au, 0x13000uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v15 = v16 - 1;
      goto LABEL_18;
    }
    if ( (unsigned int)v13 < (int)v18 + *((_DWORD *)v17 + 12) )
      break;
    v14 = v16 + 1;
LABEL_18:
    if ( v15 < v14 )
      goto LABEL_19;
  }
  if ( v15 < v14 )
LABEL_19:
    KeBugCheckEx(0x1Au, 0x13001uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  v19 = (__int64)(v8 + 1);
  v20 = *((_QWORD *)v17 + 5) + (unsigned int)v13 - v18;
  v21 = MiMakeValidPte((unsigned __int64)(v8 + 1), v20, 536870913);
  v22 = v21;
  if ( !MiPteInShadowRange((unsigned __int64)(v8 + 1)) )
  {
LABEL_31:
    v24 = 0;
    goto LABEL_32;
  }
  if ( !MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v21 & 1) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    v8 = (unsigned __int64 *)v38;
    goto LABEL_31;
  }
  v24 = 1;
  if ( !HIBYTE(word_140C6697C) && (v21 & 1) != 0 )
    v22 = v21 | 0x8000000000000000uLL;
LABEL_32:
  *(_QWORD *)v19 = v22;
  if ( v24 )
    MiWritePteShadow(v19, v22, v23);
  if ( v39 > 0x1000 )
  {
    if ( v20 >= *((_QWORD *)v17 + 5) + *((_QWORD *)v17 + 6) - 1LL )
    {
      if ( (unsigned int)((v17 + 56 - BugCheckParameter3 - 8) / 48) == *(_DWORD *)BugCheckParameter3 )
        KeBugCheckEx(0x1Au, 0x13002uLL, a3, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
      v25 = *((_QWORD *)v17 + 11) << 12;
    }
    else
    {
      v25 = (v21 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    v26 = 0;
    v27 = (v21 ^ v25) & 0xFFFFFFFFFF000LL ^ v21;
    if ( MiPteInShadowRange(v19 + 8) )
    {
      if ( MiPteHasShadow() )
      {
        v26 = 1;
        if ( !HIBYTE(word_140C6697C) && (v27 & 1) != 0 )
          v27 |= 0x8000000000000000uLL;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v27 & 1) != 0 )
        {
          v27 |= 0x8000000000000000uLL;
        }
        v8 = (unsigned __int64 *)v38;
      }
    }
    *(_QWORD *)(v19 + 8) = v27;
    if ( v26 )
      MiWritePteShadow(v19 + 8, v27, v28);
  }
  memmove((void *)v36, (const void *)((v35 & 0xFFF) + (v19 << 25 >> 16)), BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter4 != 4096 )
    memmove((void *)(BugCheckParameter4 + v36), qword_140C69398, (unsigned int)(4096 - BugCheckParameter4));
  v29 = (v39 > 0x1000) + 2LL;
  while ( 2 )
  {
    v30 = ZeroPte;
    v31 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( MiPteHasShadow() )
      {
        v31 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v33 = (ZeroPte & 1) == 0;
LABEL_60:
          if ( !v33 )
            v30 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v33 = (ZeroPte & 1) == 0;
        goto LABEL_60;
      }
    }
    *v8 = v30;
    if ( v31 )
      MiWritePteShadow((__int64)v8, v30, v32);
    ++v8;
    if ( --v29 )
      continue;
    return MiReturnPteMappingSet((__int64)&v37);
  }
}
