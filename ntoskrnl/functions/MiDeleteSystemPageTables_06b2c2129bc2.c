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
