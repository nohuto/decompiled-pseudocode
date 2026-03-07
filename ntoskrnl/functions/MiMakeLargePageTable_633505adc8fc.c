__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int64 LeafVa; // r10
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 ContainingPageTable; // r13
  __int64 v15; // rsi
  unsigned __int64 ValidPte; // rbx
  int v17; // esi
  __int64 v18; // r8
  bool v19; // zf
  __int64 result; // rax
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)(a3 - 1) <= 1 )
  {
    LeafVa = MiGetLeafVa((unsigned __int64)a2);
    if ( LeafVa >= *(_QWORD *)(v6 + 32) )
    {
      v8 = 1LL;
      if ( v5 > 1 )
      {
        v9 = v5 - 1;
        do
        {
          v8 = (unsigned int)(v8 - 1);
          --v9;
        }
        while ( v9 );
      }
      v10 = (unsigned int)v8;
      if ( LeafVa + (MiLargePageSizes[(unsigned int)v8] << 12) - 1 <= *(_QWORD *)(v6 + 40) )
      {
        v11 = (__int64 *)(v3 + 24LL * (unsigned int)v8);
        v12 = *v11;
        if ( (__int64 *)*v11 != v11 || (_DWORD)v8 && (MiDemotePfnListChain(v3, v8), v12 = *v11, (__int64 *)*v11 != v11) )
        {
          if ( *(__int64 **)(v12 + 8) != v11 || (v13 = *(_QWORD *)v12, *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12) )
            __fastfail(3u);
          *v11 = v13;
          *(_QWORD *)(v13 + 8) = v11;
          --v11[2];
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
          v15 = 48 * ContainingPageTable - 0x220000000000LL;
          v21 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v21);
            while ( *(__int64 *)(v15 + 24) < 0 );
          }
          *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v22);
            while ( *(__int64 *)(v12 + 24) < 0 );
          }
          *(_QWORD *)(v12 + 8) = a2;
          *(_QWORD *)(v12 + 16) = MiSwizzleInvalidPte(128LL);
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
          MiSetPfnPteFrame(v12, ContainingPageTable);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ValidPte = MiMakeValidPte(
                       (unsigned __int64)a2,
                       0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4),
                       -2080374780);
          if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
          {
            MiTransformValidPteInPlace(a2, (unsigned __int64)a2, ValidPte, v5);
LABEL_31:
            result = 1LL;
            *(_QWORD *)(v3 + 112) += MiLargePageSizes[v10];
            return result;
          }
          v17 = 0;
          if ( MiPteInShadowRange((unsigned __int64)a2) )
          {
            if ( MiPteHasShadow() )
            {
              v17 = 1;
              if ( !HIBYTE(word_140C6697C) )
              {
                v19 = (ValidPte & 1) == 0;
                goto LABEL_27;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v19 = (ValidPte & 1) == 0;
LABEL_27:
              if ( !v19 )
                ValidPte |= 0x8000000000000000uLL;
            }
          }
          *a2 = ValidPte;
          if ( v17 )
            MiWritePteShadow((__int64)a2, ValidPte, v18);
          goto LABEL_31;
        }
      }
    }
  }
  return 0LL;
}
