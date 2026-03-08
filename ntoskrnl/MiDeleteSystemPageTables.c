/*
 * XREFs of MiDeleteSystemPageTables @ 0x14020F540
 * Callers:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 a6, int a7)
{
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+24h] [rbp-DCh]
  int v15; // [rsp+2Ch] [rbp-D4h]
  __int64 v16; // [rsp+30h] [rbp-D0h]
  int v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+3Ch] [rbp-C4h]
  _QWORD v19[22]; // [rsp+40h] [rbp-C0h] BYREF

  v14 = 0LL;
  v15 = 0;
  v18 = 0;
  memset(v19, 0, sizeof(v19));
  v13 = a2;
  BYTE4(v19[0]) = 4 * (a5 & 7);
  v17 = a7;
  v19[19] = MiDeleteSystemPageTable;
  v19[20] = MiDeleteSystemPageTableTail;
  v19[21] = &v13;
  v16 = a6;
  LODWORD(v19[0]) = 2055;
  v19[4] = a3;
  v19[5] = a4;
  v19[3] = a1;
  HIBYTE(v19[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables(v19);
  LOBYTE(v11) = HIBYTE(v19[0]);
  return MiUnlockWorkingSetShared(a1, v11);
}
