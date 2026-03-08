/*
 * XREFs of MiReleaseLargePdeMappings @ 0x14065D1F4
 * Callers:
 *     MiInsertCachedPte @ 0x14027D0C0 (MiInsertCachedPte.c)
 *     MiEmptyPteBins @ 0x140299F00 (MiEmptyPteBins.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiInsertLargeTbFlushEntry @ 0x140210194 (MiInsertLargeTbFlushEntry.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14029A144 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiReleaseLargePdeMappings(__int64 a1, __int64 a2, BOOL a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdx
  char *AnyMultiplexedVm; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  int v18; // ebp
  __int64 v19; // rdi
  BOOL v20; // r13d
  unsigned __int64 v21; // rbx
  int v22; // r12d
  __int64 v23; // r8
  bool v24; // zf
  signed __int32 v26[8]; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int8 v27; // [rsp+20h] [rbp-158h]
  BOOL MayNeedFlush; // [rsp+24h] [rbp-154h]
  char *v29; // [rsp+28h] [rbp-150h]
  __int64 v30; // [rsp+30h] [rbp-148h]
  unsigned __int64 v31; // [rsp+38h] [rbp-140h]
  unsigned __int64 v32; // [rsp+40h] [rbp-138h]
  unsigned __int64 v33; // [rsp+48h] [rbp-130h]
  int *v34; // [rsp+50h] [rbp-128h]
  __int64 v35; // [rsp+58h] [rbp-120h]
  __int64 v36; // [rsp+60h] [rbp-118h]
  _QWORD v37[24]; // [rsp+70h] [rbp-108h] BYREF

  MayNeedFlush = a3;
  v34 = (int *)a2;
  memset(v37, 0, 0xB8uLL);
  v5 = *(unsigned int *)(a2 + 4);
  v6 = 0LL;
  v7 = (*(_QWORD *)(a1 + 16) >> 9) & 0x7FFFFFFFF8LL;
  v37[3] = 0LL;
  v35 = v7 - 0x98000000000LL;
  LODWORD(v37[1]) = 20;
  v8 = 0LL;
  v36 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v29 = AnyMultiplexedVm;
  do
  {
    v11 = v9 + 8 * v5;
    v12 = MI_READ_PTE_LOCK_FREE(v11);
    if ( (v12 & 0xF000) == 0x1000 )
    {
      v13 = 1LL;
    }
    else
    {
      v14 = MI_READ_PTE_LOCK_FREE(v11 + 8);
      if ( qword_140C657C0 )
      {
        if ( (v14 & 0x10) != 0 )
          v14 &= ~0x10uLL;
        else
          v14 &= ~qword_140C657C0;
      }
      v13 = HIDWORD(v14);
    }
    if ( qword_140C657C0 )
    {
      if ( (v12 & 0x10) != 0 )
        v12 &= ~0x10uLL;
      else
        v12 &= ~qword_140C657C0;
    }
    v5 = HIDWORD(v12);
    v31 = v5;
    v15 = v13 << 21;
    v30 = v13 + v6;
    v16 = (((__int64)((v11 << 25) - v8) >> 16 << 25) - v8) >> 16;
    v32 = v16;
    v33 = v13 << 21;
    v17 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v27 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v17, 0);
    v18 = 0;
    if ( v13 )
    {
      v19 = (__int64)v29;
      v20 = MayNeedFlush;
      while ( 1 )
      {
        v21 = ZeroPte;
        v22 = 0;
        if ( MiPteInShadowRange(v11) )
        {
          if ( MiPteHasShadow() )
          {
            v22 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v24 = (ZeroPte & 1) == 0;
              goto LABEL_21;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v24 = (ZeroPte & 1) == 0;
LABEL_21:
            if ( !v24 )
              v21 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v11 = v21;
        if ( v22 )
          MiWritePteShadow(v11, v21, v23);
        if ( v20 )
          MiInsertLargeTbFlushEntry((__int64)v37, 1, v11);
        v11 += 8LL;
        if ( (v11 & 0xFFF) != 0 || (unsigned int)(v18 + 1) >= v13 )
        {
          if ( (unsigned int)++v18 >= v13 )
          {
            v5 = v31;
            v16 = v32;
            AnyMultiplexedVm = v29;
            v15 = v33;
            break;
          }
        }
        else
        {
          MiUnlockPageTableInternal(v19, v17);
          v17 += 8LL;
          MiLockPageTableInternal(v19, v17, 0);
          ++v18;
        }
      }
    }
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v17);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v27);
    if ( MayNeedFlush )
    {
      MiFlushTbList((int *)v37);
      if ( v5 )
      {
        _InterlockedOr(v26, 0);
        MayNeedFlush = MiTbFlushTimeStampMayNeedFlush(*v34, KiTbFlushTimeStamp, -1);
      }
    }
    MiReturnSystemVa(v16, v15 + v16, 13, 0LL);
    v9 = v35;
    v6 = v30;
    v8 = v36;
  }
  while ( v5 );
  return v30;
}
