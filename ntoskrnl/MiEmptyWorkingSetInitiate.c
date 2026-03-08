/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140301814
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402245D0 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyWorkingSet @ 0x140619C4C (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyTargetedWorkingSet @ 0x1406322E8 (MiEmptyTargetedWorkingSet.c)
 *     MiProcessRemoveFromWorkingSet @ 0x140A2E490 (MiProcessRemoveFromWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  __int8 v11; // al
  bool v12; // zf
  unsigned int v13; // ebx
  __m128i v15[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, sizeof(v15));
  v8 = 0;
  LODWORD(v16[1]) = MiTbFlushType(a1);
  v15[10].m128i_i64[1] = (__int64)v16;
  v15[9].m128i_i64[1] = (__int64)MiEmptyPte;
  v15[10].m128i_i64[0] = (__int64)MiEmptyWorkingSetTail;
  v10 = v16[0];
  WORD2(v16[1]) = 4;
  v16[3] = 0LL;
  LODWORD(v16[2]) = 20;
  v16[4] = 0LL;
  v15[0].m128i_i32[0] = 6;
  v15[1].m128i_i64[1] = a1;
  if ( (a2 & 1) != 0 )
  {
    v10 = LODWORD(v16[0]) | 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_3;
    v10 = LODWORD(v16[0]) | 2;
  }
  LODWORD(v16[0]) = v10;
LABEL_3:
  if ( (a2 & 4) != 0 )
    LODWORD(v16[0]) = v10 | 4;
  v15[2].m128i_i64[0] = a3;
  v15[2].m128i_i64[1] = a4;
  v11 = MiLockWorkingSetShared(v9);
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v15[0].m128i_i8[7] = v11;
  if ( v12 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v13 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables(v15) == 5 )
      v8 = -1073741558;
    v13 = v8;
  }
  MiUnlockWorkingSetShared(a1, v15[0].m128i_u8[7]);
  return v13;
}
