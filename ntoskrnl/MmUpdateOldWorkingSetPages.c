/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x1406332BC
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x14097AC7C (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x140224BDC (MiTbFlushType.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MmUpdateOldWorkingSetPages(ULONG_PTR BugCheckParameter1, int a2, char a3)
{
  int v6; // r14d
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  _QWORD v13[28]; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v14[11]; // [rsp+100h] [rbp+0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD v16[68]; // [rsp+1E0h] [rbp+E0h] BYREF

  memset(&v15, 0, sizeof(v15));
  memset(v13, 0, 0xD8uLL);
  memset(v14, 0, sizeof(v14));
  memset(v16, 0, 0x108uLL);
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v15);
  }
  v7 = v13[0];
  v8 = 0;
  if ( (a3 & 2) != 0 )
  {
    v7 = LODWORD(v13[0]) | 1;
    LODWORD(v13[0]) |= 1u;
  }
  if ( (a3 & 1) != 0 )
    LODWORD(v13[0]) = v7 | 2;
  HIDWORD(v13[4]) = 0;
  HIDWORD(v13[0]) = a2;
  v9 = MiTbFlushType(BugCheckParameter1 + 1664);
  v13[5] = 0LL;
  v13[6] = 0LL;
  v11 = (*(_BYTE *)(BugCheckParameter1 + 1848) & 7) == 0;
  LODWORD(v13[3]) = v9;
  WORD2(v13[3]) = 4;
  LODWORD(v13[4]) = 20;
  if ( v11 && *(_QWORD *)(BugCheckParameter1 + 2288) )
  {
    v16[1] = 32;
    v13[26] = v16;
  }
  v14[2].m128i_i64[1] = -1LL;
  v14[10].m128i_i64[1] = (__int64)v13;
  v14[9].m128i_i64[1] = (__int64)MiUpdateOldPte;
  v14[10].m128i_i64[0] = (__int64)MiUpdateOldWorkingSetPagesTail;
  v14[0].m128i_i32[0] = 6;
  v14[1].m128i_i64[1] = BugCheckParameter1 + 1664;
  v14[0].m128i_i8[5] = 6;
  v14[0].m128i_i8[7] = MiLockWorkingSetShared(v10);
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x20) != 0 )
  {
    v8 = -1073741558;
  }
  else
  {
    v13[1] = *(_QWORD *)(BugCheckParameter1 + 1752);
    if ( v13[1] )
      MiWalkPageTables(v14);
  }
  MiUnlockWorkingSetShared(BugCheckParameter1 + 1664, v14[0].m128i_u8[7]);
  if ( v6 )
    KiUnstackDetachProcess(&v15);
  return v8;
}
