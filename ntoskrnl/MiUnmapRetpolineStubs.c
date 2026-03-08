/*
 * XREFs of MiUnmapRetpolineStubs @ 0x14063EE24
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiWriteWsle @ 0x140228948 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x140229790 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x140289FE0 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiUnmapRetpolineStubs(__int64 a1, int a2)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // rsi
  __int64 AnyMultiplexedVm; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  int v19; // r13d
  __int64 v20; // r8
  bool v21; // zf
  unsigned __int64 ContainingPageTable; // rax
  unsigned __int8 v24; // [rsp+20h] [rbp-128h]
  __int64 v25; // [rsp+28h] [rbp-120h]
  __int64 v26; // [rsp+30h] [rbp-118h]
  __int64 v27; // [rsp+38h] [rbp-110h]
  unsigned __int64 v28; // [rsp+40h] [rbp-108h]
  _QWORD v29[24]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v29, 0, 0xB8uLL);
  v3 = 0;
  v4 = 0LL;
  if ( a2 )
    AnyMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(1);
  else
    AnyMultiplexedVm = MiGetSessionVm();
  v9 = AnyMultiplexedVm;
  v10 = v8 + ((((unsigned int)dword_140C694FC >> 12) + v6 + ((dword_140C694FC & 0xFFF) != 0)) << 12);
  v28 = v10;
  v11 = qword_140C654C8;
  v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v12;
  v27 = qword_140C654C8;
  LODWORD(v29[0]) = v7;
  WORD2(v29[0]) = 0;
  v29[2] = 0LL;
  LODWORD(v29[1]) = 20;
  v29[3] = 0LL;
  v13 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v24 = v13;
  if ( dword_140C65500 )
  {
    while ( 1 )
    {
      v14 = v10 + (v3 << 12);
      v15 = v12 + 8LL * v3;
      v25 = *(_QWORD *)(v11 + 8LL * v3 + 48);
      if ( v4 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_9;
        MiFlushTbList((int *)v29);
        MiUnlockPageTableInternal(v9, v4);
      }
      v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v9, v4, 0);
LABEL_9:
      if ( MI_READ_PTE_LOCK_FREE(v12 + 8LL * v3) )
      {
        MiGetWsleContents(v16, v14);
        MiWriteWsle(v17, v14);
        v18 = ZeroPte;
        v19 = 0;
        if ( MiPteInShadowRange(v15) )
        {
          if ( MiPteHasShadow() )
          {
            v19 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v21 = (ZeroPte & 1) == 0;
LABEL_16:
              if ( !v21 )
                v18 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v21 = (ZeroPte & 1) == 0;
            goto LABEL_16;
          }
        }
        *(_QWORD *)v15 = v18;
        if ( v19 )
          MiWritePteShadow(v15, v18, v20);
        MiInsertTbFlushEntry((__int64)v29, v14, 1LL, 0);
        MiLockAndDecrementShareCount(48 * v25 - 0x220000000000LL, 0);
        ContainingPageTable = MiGetContainingPageTable(v15);
        MiLockAndDecrementShareCount(48 * ContainingPageTable - 0x220000000000LL, 0);
        v12 = v26;
        v11 = v27;
      }
      v10 = v28;
      if ( ++v3 >= dword_140C65500 )
      {
        v13 = v24;
        break;
      }
    }
  }
  MiFlushTbList((int *)v29);
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
  return MiUnlockWorkingSetShared(v9, v13);
}
