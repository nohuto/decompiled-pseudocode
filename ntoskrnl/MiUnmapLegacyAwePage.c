/*
 * XREFs of MiUnmapLegacyAwePage @ 0x14064992C
 * Callers:
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiDecrementAweMapCount @ 0x14064709C (MiDecrementAweMapCount.c)
 *     MiUpdateAwePageTable @ 0x140649AB0 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiUnmapLegacyAwePage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int8 v14; // [rsp+68h] [rbp+10h]
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = *(_QWORD *)(48 * a2 - 0x21FFFFFFFFF8LL);
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = MiLockWorkingSetShared((__int64)v5);
  MiLockPageTableInternal((__int64)v5, v7, 0);
  v8 = ZeroPte;
  v9 = 0;
  if ( MiPteInShadowRange(v6) )
  {
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v11 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v11 = (ZeroPte & 1) == 0;
    }
    if ( !v11 )
      v8 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)v6 = v8;
  if ( v9 )
    MiWritePteShadow(v6, v8, v10);
  MiUpdateAwePageTable(v7, -1LL, 0xFFFFFFFFLL);
  MiInsertTbFlushEntry(a3, (__int64)(v6 << 25) >> 16, 1LL, 0);
  MiUnlockPageTableInternal((__int64)v5, v7);
  MiUnlockWorkingSetShared((__int64)v5, v14);
  MiDecrementAweMapCount(a1, a2, &v15, 0);
  return 0LL;
}
