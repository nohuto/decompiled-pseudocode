ULONG_PTR __fastcall MiMapSinglePage(unsigned __int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rbx
  int v12; // r15d
  __int64 v13; // r8
  ULONG_PTR result; // rax
  bool v15; // zf
  unsigned __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // r8
  bool v19; // zf

  v7 = a1;
  if ( a1 )
  {
    v8 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) )
      goto LABEL_3;
    v16 = ZeroPte;
    v17 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( MiPteHasShadow() )
      {
        v17 = 1;
        if ( !HIBYTE(word_140C6697C) )
        {
          v19 = (ZeroPte & 1) == 0;
          goto LABEL_23;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v19 = (ZeroPte & 1) == 0;
LABEL_23:
        if ( !v19 )
          v16 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *v8 = v16;
    if ( v17 )
      MiWritePteShadow((__int64)v8, v16, v18);
    KeFlushSingleTb(v7, 0, 1u);
    goto LABEL_3;
  }
  result = MiReservePtes((__int64)&qword_140C695C0, 1u);
  v8 = (_QWORD *)result;
  if ( !result )
    return result;
  v7 = (__int64)(result << 25) >> 16;
  if ( (a4 & 2) != 0 )
  {
    ValidPte = ZeroPte;
    goto LABEL_6;
  }
LABEL_3:
  v9 = (((a3 >> 31) & 0xFFFFFFFD) + 4) | 2;
  if ( (a3 & 0x40000000) != 0 )
    v9 = ((a3 >> 31) & 0xFFFFFFFD) + 4;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v9, 48 * a2 - 0x220000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v8, a2, ProtectionPfnCompatible | 0xA0000000);
LABEL_6:
  v12 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_7;
      v15 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v15 = (ValidPte & 1) == 0;
    }
    if ( !v15 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v8 = ValidPte;
  if ( v12 )
    MiWritePteShadow((__int64)v8, ValidPte, v13);
  return v7;
}
