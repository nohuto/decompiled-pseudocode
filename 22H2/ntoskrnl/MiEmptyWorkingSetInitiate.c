/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140317DA0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x14053040C (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x14053B168 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // r9
  int v13; // eax
  char v14; // al
  bool v15; // zf
  unsigned int v16; // ebx
  _QWORD v18[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  v8 = 0;
  LODWORD(v19[1]) = MiTbFlushType(a1);
  v18[21] = v19;
  LOWORD(v18[0]) = 6;
  v18[19] = MiEmptyPte;
  v18[20] = MiEmptyWorkingSetTail;
  v13 = v19[0];
  WORD2(v19[1]) = 4;
  v19[3] = 0LL;
  LODWORD(v19[2]) = 20;
  v19[4] = 0LL;
  v18[3] = a1;
  if ( (a2 & 1) != 0 )
  {
    v13 = LODWORD(v19[0]) | 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_5;
    v13 = LODWORD(v19[0]) | 2;
  }
  LODWORD(v19[0]) = v13;
LABEL_5:
  if ( (a2 & 4) != 0 )
    LODWORD(v19[0]) = v13 | 4;
  v18[4] = a3;
  v18[5] = a4;
  v14 = MiLockWorkingSetShared(v10, v9, v11, v12);
  v15 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  BYTE6(v18[0]) = v14;
  if ( v15 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v16 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((__int64)v18) == 4 )
      v8 = -1073741558;
    v16 = v8;
  }
  MiUnlockWorkingSetShared(a1, BYTE6(v18[0]));
  return v16;
}
