/*
 * XREFs of MiReleaseLargePteMappings @ 0x140553EFC
 * Callers:
 *     MiInsertCachedPte @ 0x140245570 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x14028F900 (MiEmptyPteBins.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402EDDE0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiReleaseLargePteMappings(__int64 a1, _DWORD *a2, BOOL a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  char *AnyMultiplexedVm; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  _DWORD *v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  int v21; // r13d
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  int v24; // r12d
  __int64 v25; // r8
  bool v26; // zf
  _KPROCESS *v27; // rdx
  unsigned int v28; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 v31; // [rsp+20h] [rbp-158h]
  char *v32; // [rsp+28h] [rbp-150h]
  __int64 v33; // [rsp+30h] [rbp-148h]
  unsigned __int64 v34; // [rsp+38h] [rbp-140h]
  unsigned __int64 v35; // [rsp+40h] [rbp-138h]
  _DWORD *v36; // [rsp+48h] [rbp-130h]
  unsigned __int64 v37; // [rsp+50h] [rbp-128h]
  __int64 v38; // [rsp+58h] [rbp-120h]
  __int64 v39; // [rsp+60h] [rbp-118h]
  _QWORD v40[24]; // [rsp+70h] [rbp-108h] BYREF

  v36 = a2;
  memset(v40, 0, 0xB8uLL);
  v6 = (unsigned int)a2[1];
  v7 = 0LL;
  v8 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v40[3] = 0LL;
  v38 = v8 - 0x98000000000LL;
  LODWORD(v40[1]) = 20;
  v9 = 0LL;
  v39 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v32 = AnyMultiplexedVm;
  do
  {
    v12 = v10 + 8 * v6;
    v14 = MI_READ_PTE_LOCK_FREE(v12);
    if ( (v14 & 0xF000) == 0x1000 )
    {
      v17 = 1LL;
    }
    else
    {
      v18 = MI_READ_PTE_LOCK_FREE(v12 + 8);
      if ( qword_140C4DF40 )
      {
        if ( (v18 & 0x10) != 0 )
          v18 &= ~0x10uLL;
        else
          v18 &= ~qword_140C4DF40;
      }
      v17 = HIDWORD(v18);
    }
    if ( qword_140C4DF40 )
    {
      if ( (v14 & 0x10) != 0 )
        v14 &= ~0x10uLL;
      else
        v14 &= ~qword_140C4DF40;
    }
    v6 = HIDWORD(v14);
    v33 = v17 + v7;
    v37 = v17 << 21;
    v19 = (((__int64)((v12 << 25) - v9) >> 16 << 25) - v9) >> 16;
    v35 = v19;
    v34 = v6;
    v20 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v31 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v15, v16);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v20, 0LL);
    v21 = 0;
    if ( v17 )
    {
      v22 = (__int64)v32;
      while ( 1 )
      {
        v23 = ZeroPte;
        v24 = 0;
        if ( MiPteInShadowRange(v12) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v24 = 1;
            if ( !HIBYTE(word_140C4E008) )
            {
              v26 = (ZeroPte & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v26 = (ZeroPte & 1) == 0;
LABEL_21:
            if ( !v26 )
              v23 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v12 = v23;
        if ( v24 )
          MiWritePteShadow(v12, v23, v25);
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)v40, 1u, v12);
        v12 += 8LL;
        if ( (v12 & 0xFFF) == 0 && (unsigned int)(v21 + 1) < v17 )
        {
          MiUnlockPageTableInternal(v22, v20);
          v20 += 8LL;
          MiLockPageTableInternal(v22, v20, 0LL);
        }
        if ( (unsigned int)++v21 >= v17 )
        {
          v6 = v34;
          v19 = v35;
          AnyMultiplexedVm = v32;
          break;
        }
      }
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v20);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v31);
    if ( a3 )
    {
      MiFlushTbList((__int64)v40, v27);
      if ( v6 )
      {
        _InterlockedOr(v30, 0);
        v28 = KiTbFlushTimeStamp - *v36;
        a3 = v28 <= 2 && ((*v36 & 1) != 0 || v28 < 2);
      }
    }
    MiReturnSystemVa(v19, v19 + v37, 13);
    v10 = v38;
    v7 = v33;
    v9 = v39;
  }
  while ( v6 );
  return v33;
}
