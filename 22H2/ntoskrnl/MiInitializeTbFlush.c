/*
 * XREFs of MiInitializeTbFlush @ 0x140A55380
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A55330 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

_QWORD *__fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  _QWORD *result; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // rbx
  unsigned __int64 ValidPte; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rbx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  _KPROCESS *v19; // rdx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r8
  signed __int32 v29[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v30; // [rsp+20h] [rbp-138h]
  unsigned __int64 v31; // [rsp+28h] [rbp-130h]
  unsigned __int64 v32; // [rsp+30h] [rbp-128h]
  __int64 v33; // [rsp+38h] [rbp-120h]
  unsigned __int64 v34; // [rsp+40h] [rbp-118h]
  unsigned __int64 v35; // [rsp+48h] [rbp-110h]
  _QWORD *v36; // [rsp+50h] [rbp-108h]
  _QWORD v37[24]; // [rsp+60h] [rbp-F8h] BYREF

  v31 = 0LL;
  v1 = a1;
  v32 = 0LL;
  v35 = a1;
  memset(v37, 0, 0xB8uLL);
  result = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, v1, v2, v3);
  v36 = result;
  v6 = result;
  if ( result )
  {
    v37[3] = 0LL;
    LODWORD(v37[1]) = 20;
    ValidPte = MiMakeValidPte((unsigned __int64)result, qword_140C4ED68, 1LL, v5);
    v8 = (__int64)((_QWORD)v6 << 25) >> 16;
    v9 = v8;
    if ( !v1 )
    {
LABEL_7:
      v13 = 0;
      v14 = 0LL;
      v33 = 0LL;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v30 = 4LL;
        v15 = v1 - v14;
        v16 = 0LL;
        v17 = 0LL;
        v18 = (v1 - v14) >> 1;
        do
        {
          v34 = __rdtsc();
          _InterlockedOr(v29, 0);
          if ( v14 )
          {
            MiInsertTbFlushEntry((__int64)v37, v8, v14, 0);
            MiFlushTbList((__int64)v37, v19);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v29, 0);
          v16 += __rdtsc() - v34;
          v20 = __rdtsc();
          _InterlockedOr(v29, 0);
          if ( v18 )
          {
            v21 = v8 + (v14 << 12);
            v22 = (v15 << 12) + v21 - 4096;
            v23 = v18;
            do
            {
              v21 += 4096LL;
              v22 -= 4096LL;
              --v23;
            }
            while ( v23 );
          }
          _InterlockedOr(v29, 0);
          v24 = __rdtsc();
          v17 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v20;
          --v30;
        }
        while ( v30 );
        v1 = v35;
        v25 = v16 >> 2;
        v26 = v17 >> 2;
        if ( v14 )
        {
          if ( v26 + v25 >= v31 + v32 )
          {
            v27 = v14 - 1;
            if ( v13 )
              v27 = v33;
            ++v13;
            v33 = v27;
            if ( v13 == 3 )
            {
              qword_140C4DF90 = v27;
LABEL_25:
              if ( v13 == 3 )
                return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF40, v36, v1);
LABEL_29:
              qword_140C4DF90 = v14;
              return (_QWORD *)MiReleasePtes((__int64)&qword_140C4EF40, v36, v1);
            }
          }
          else
          {
            v13 = 0;
          }
        }
        else
        {
          v31 = v25;
          v32 = v26;
        }
        if ( ++v14 >= v35 )
          goto LABEL_25;
      }
    }
    v10 = v6;
    v11 = v1;
    while ( 1 )
    {
      v12 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v10) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
            v12 = ValidPte | 0x8000000000000000uLL;
          *v10 = v12;
          MiWritePteShadow((__int64)v10, v12, v28);
          goto LABEL_6;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          v12 = ValidPte | 0x8000000000000000uLL;
        }
      }
      *v10 = v12;
LABEL_6:
      ++v10;
      v9 += 4096LL;
      if ( !--v11 )
        goto LABEL_7;
    }
  }
  return result;
}
