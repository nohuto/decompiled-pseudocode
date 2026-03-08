/*
 * XREFs of MiIsCfgBitMapPageShared @ 0x140346620
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiFastLockLeafPageTable @ 0x140269C50 (MiFastLockLeafPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140327240 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiIsCfgBitMapPageShared(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 *v5; // rbp
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // r14d
  char *AnyMultiplexedVm; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rbx
  __int64 ProtoPteAddress; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-118h] BYREF
  __int128 v18; // [rsp+28h] [rbp-110h] BYREF
  __m128i v19; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-E8h]
  char *v21; // [rsp+58h] [rbp-E0h]
  __int64 v22; // [rsp+60h] [rbp-D8h]
  __int64 v23; // [rsp+68h] [rbp-D0h]
  _BYTE v24[112]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 (__fastcall *v25)(__int64); // [rsp+E0h] [rbp-58h]
  __int128 *v26; // [rsp+E8h] [rbp-50h]

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = MiLockWorkingSetShared((__int64)v5);
  v19.m128i_i16[2] = 0;
  v18 = 0LL;
  v19.m128i_i8[6] = 0;
  v19.m128i_i64[1] = 0LL;
  memset(v24, 0, sizeof(v24));
  v19.m128i_i32[0] = 2145;
  v7 = (__int64)(v4 << 25) >> 16;
  LeafVa = MiGetLeafVa(v7);
  v9 = 1;
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C6A1D8 && LeafVa <= qword_140C66CF0 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  if ( (unsigned int)MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v7, 0) )
  {
    v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v19.m128i_i32[0] |= 4u;
    v26 = &v18;
    v20 = 0LL;
    v21 = AnyMultiplexedVm;
    v19.m128i_i8[4] = v19.m128i_i8[4] & 0xE3 | 4;
    v25 = MiGetNextPageTableTail;
    v19.m128i_i8[7] = v6;
    v22 = (__int64)(v4 << 25) >> 16;
    v23 = v22;
    MiWalkPageTables(&v19);
    v11 = *((_QWORD *)&v18 + 1);
  }
  if ( v4 != v11 )
  {
    v9 = 3;
    goto LABEL_10;
  }
  v12 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = MI_READ_PTE_LOCK_FREE(v4);
  v13 = v17;
  if ( !v17 )
  {
    v9 = 2;
    goto LABEL_8;
  }
  ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 0, &v18);
  if ( (v17 & 1) == 0 )
  {
    if ( (v17 & 0x400) != 0 )
    {
      if ( MiIsPrototypePteVadLookup(v17) )
        goto LABEL_8;
      if ( qword_140C657C0 )
      {
        if ( (v17 & 0x10) != 0 )
          v13 = v17 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v13 = ~qword_140C657C0 & v17;
      }
      if ( ProtoPteAddress == v13 >> 16 )
        goto LABEL_8;
    }
    goto LABEL_17;
  }
  v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL)
      - 0x220000000000LL;
  if ( *(__int64 *)(v16 + 40) >= 0 || (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) != ProtoPteAddress )
LABEL_17:
    v9 = 0;
LABEL_8:
  if ( v12 )
    MiUnlockPageTableInternal((__int64)v5, v12);
LABEL_10:
  MiUnlockWorkingSetShared((__int64)v5, v6);
  return v9;
}
