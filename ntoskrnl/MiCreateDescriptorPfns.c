/*
 * XREFs of MiCreateDescriptorPfns @ 0x140B373F4
 * Callers:
 *     MiSwitchToPfns @ 0x140B37268 (MiSwitchToPfns.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1402093BC (MiMarkPfnVerified.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 *     MxInsertEnclaveBootPages @ 0x140B96C30 (MxInsertEnclaveBootPages.c)
 */

char __fastcall MiCreateDescriptorPfns(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  int v8; // r12d
  __m128i *i; // rsi
  ULONG_PTR v10; // rdx
  __int64 *v11; // rcx
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // r14
  const __m128i *v14; // r8
  unsigned int v15; // eax
  _QWORD *v16; // r14
  BOOL HasShadow; // r15d
  __int64 v18; // r8
  unsigned __int64 ContainingPageTable; // rax
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+50h] [rbp-48h]
  __int128 v23; // [rsp+60h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 40);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    goto LABEL_2;
  if ( --v3 )
  {
    v5 = 1LL;
LABEL_2:
    v6 = 48 * v5;
    v7 = *(_DWORD *)(a1 + 24) & 0x1FFFFFFF;
    v8 = *(_DWORD *)(a1 + 24) & 0x20000000;
    LOBYTE(v5) = 0;
    for ( i = (__m128i *)(v6 - 0x220000000000LL); ; i += 3 )
    {
      while ( 1 )
      {
        if ( !v3 )
          return v5;
        if ( v8 )
        {
          v10 = 0LL;
          v11 = &i->m128i_i64[1];
          do
          {
            if ( (*((_BYTE *)v11 + 26) & 7) != 0 )
              break;
            if ( *v11 )
              break;
            ++v10;
            v11 += 6;
          }
          while ( v10 < v3 );
        }
        else
        {
          v10 = v3;
        }
        if ( !v10 )
          break;
        v12 = MiRestrictRangeToNode(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v10);
        v13 = v12;
        if ( ((v7 - 9) & 0xFFFFFFDD) != 0 || v7 == 43 )
        {
          if ( ((v7 - 33) & 0xFFFFFFFD) != 0 )
          {
            if ( v7 == 29 || v7 == 36 )
            {
              v15 = 256;
              v14 = a3;
            }
            else
            {
              v14 = a2;
              v15 = 128;
            }
            MiInitializeNewPfns(i, v13, v14, 0, v15, 0LL, 0LL);
          }
          else
          {
            MxInsertEnclaveBootPages(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v12, v7);
          }
        }
        else
        {
          DWORD2(v22) = 2;
          *(_QWORD *)&v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4);
          *((_QWORD *)&v23 + 1) = v12;
          MxCreateFreePfns(&v21);
        }
        v3 -= v13;
        LOBYTE(v5) = 48 * v13;
        i += 3 * v13;
      }
      if ( v7 == 29 || v7 == 36 )
      {
        v16 = (_QWORD *)i->m128i_i64[1];
        if ( !v16 )
          goto LABEL_36;
        if ( v7 == 29 )
        {
          HasShadow = 0;
          if ( MiPteInShadowRange(i->m128i_u64[1]) )
            HasShadow = MiPteHasShadow();
          *v16 = 0LL;
          if ( HasShadow )
            MiWritePteShadow((__int64)v16, 0LL, v18);
          ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v16);
          MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0);
LABEL_36:
          LOBYTE(v5) = MiInitializeNewPfns(i, 1uLL, a3, 0, 0x100u, 0LL, 0LL);
          goto LABEL_7;
        }
        LOBYTE(v5) = MiMarkPfnVerified((ULONG_PTR)i, 0);
      }
LABEL_7:
      --v3;
    }
  }
  return v5;
}
