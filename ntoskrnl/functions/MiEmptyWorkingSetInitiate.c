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
