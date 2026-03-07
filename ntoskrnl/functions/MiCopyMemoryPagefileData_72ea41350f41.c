unsigned __int64 __fastcall MiCopyMemoryPagefileData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 *v12; // r15
  __int64 v13; // r13
  __int64 *v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 result; // rax
  int v20; // ebx
  __int64 v21; // r12
  __int64 v22; // r13
  int ProtectionPfnCompatible; // eax
  unsigned __int64 *v24; // rdi
  __int64 v25; // r9
  unsigned __int64 ValidPte; // rbx
  int v27; // r14d
  __int64 v28; // r8
  __int64 v29; // r14
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // r13d
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  int v38; // r14d
  __int64 v39; // r8
  unsigned __int64 v40; // rbx
  int v41; // r14d
  __int64 v42; // r8
  char v43; // [rsp+20h] [rbp-78h]
  __int64 i; // [rsp+28h] [rbp-70h]
  unsigned __int64 v45; // [rsp+38h] [rbp-60h]
  __int128 v46; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 *v47; // [rsp+50h] [rbp-48h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v46 = 0LL;
  v47 = 0LL;
  if ( !a2 )
    goto LABEL_22;
  v9 = MiReservePtes((__int64)&qword_140C695C0, a4);
  v10 = v9;
  if ( !v9 )
  {
    v6 = a3;
LABEL_22:
    result = (unsigned __int64)&a1[v5];
    v45 = result;
    if ( (unsigned __int64)a1 >= result )
      return result;
    v20 = a5 != 0 ? 4 : 1;
    v43 = v20;
    v21 = a3;
    v22 = 48 * v6 - 0x220000000000LL;
    for ( i = v22; ; i += 48LL )
    {
      MiGetPteMappingSet(0, 2LL, (__int64)&v46);
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v20, 48LL * *a1 - 0x220000000000LL);
      v24 = v47;
      ValidPte = MiMakeValidPte((unsigned __int64)v47, v25, ProtectionPfnCompatible | 0xA0000000);
      v27 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v24) )
      {
        if ( MiPteHasShadow() )
        {
          v27 = 1;
          if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ValidPte & 1) != 0 )
          {
            ValidPte |= 0x8000000000000000uLL;
          }
          v24 = v47;
        }
      }
      *v24 = ValidPte;
      if ( v27 )
        MiWritePteShadow((__int64)v24, ValidPte, v28);
      v29 = (__int64)(v24 + 1);
      v30 = MiMakeProtectionPfnCompatible(a5 != 0 ? 1 : 4, v22);
      v31 = MiMakeValidPte((unsigned __int64)(v24 + 1), v21, v30 | 0xA0000000);
      v32 = 0;
      if ( MiPteInShadowRange((unsigned __int64)(v24 + 1)) )
      {
        if ( MiPteHasShadow() )
        {
          v32 = 1;
          if ( !HIBYTE(word_140C6697C) && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v31 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
          v24 = v47;
        }
      }
      *(_QWORD *)v29 = v31;
      if ( v32 )
        MiWritePteShadow(v29, v31, v33);
      v34 = (v29 - 8) << 25 >> 16;
      v35 = v29 << 25 >> 16;
      v36 = v35;
      if ( !a5 )
      {
        v36 = v34;
        v34 = v35;
      }
      KeCopyPage(v34, v36);
      v37 = ZeroPte;
      v38 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v24) )
      {
        if ( MiPteHasShadow() )
        {
          v38 = 1;
          if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
            v37 = ZeroPte | 0x8000000000000000uLL;
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v37 = ZeroPte | 0x8000000000000000uLL;
          }
          v24 = v47;
        }
      }
      *v24 = v37;
      if ( v38 )
        MiWritePteShadow((__int64)v24, v37, v39);
      v40 = ZeroPte;
      v41 = 0;
      if ( !MiPteInShadowRange((unsigned __int64)(v24 + 1)) )
        goto LABEL_66;
      if ( MiPteHasShadow() )
      {
        v41 = 1;
        if ( !HIBYTE(word_140C6697C) )
          goto LABEL_64;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
LABEL_64:
        if ( (ZeroPte & 1) != 0 )
          v40 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_66:
      v24[1] = v40;
      if ( v41 )
        MiWritePteShadow((__int64)(v24 + 1), v40, v42);
      result = MiReturnPteMappingSet((__int64)&v46);
      ++a1;
      LOBYTE(v20) = v43;
      v22 = i + 48;
      ++v21;
      if ( (unsigned __int64)a1 >= v45 )
        return result;
    }
  }
  v11 = MiMakeValidPte(v9, -1LL, (a5 != 0 ? 1 : 4) | 0xA0000000);
  v12 = (unsigned __int64 *)v10;
  if ( v10 >= v10 + 8 * v5 )
    goto LABEL_17;
  v13 = a3;
  v14 = (__int64 *)(v10 + 8 * v5);
  do
  {
    v11 ^= (v11 ^ (v13 << 12)) & 0xFFFFFFFFFF000LL;
    v15 = v11;
    if ( !MiPteInShadowRange((unsigned __int64)v12) )
    {
      v17 = 0;
      goto LABEL_13;
    }
    if ( MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_13;
    }
    else
    {
      v17 = 0;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_13;
    }
    if ( (v11 & 1) != 0 )
      v15 = v11 | 0x8000000000000000uLL;
LABEL_13:
    *v12 = v15;
    if ( v17 )
      MiWritePteShadow((__int64)v12, v15, v16);
    ++v12;
    ++v13;
  }
  while ( v12 < (unsigned __int64 *)v14 );
  v5 = a4;
  v7 = a2;
LABEL_17:
  if ( a5 )
  {
    v18 = (__int64)(v10 << 25) >> 16;
  }
  else
  {
    v18 = v7;
    v7 = (__int64)(v10 << 25) >> 16;
  }
  memmove((void *)v7, (const void *)v18, v5 << 12);
  return MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v10, v5);
}
