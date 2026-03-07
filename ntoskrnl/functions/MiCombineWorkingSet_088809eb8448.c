__int64 __fastcall MiCombineWorkingSet(__int64 a1)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // r12
  PVOID Pool; // rsi
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // rax
  SIZE_T v9; // rdi
  int v11; // [rsp+28h] [rbp-E0h]
  __int128 v12; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C8h]
  PVOID v14; // [rsp+50h] [rbp-B8h]
  __m128i v15[11]; // [rsp+58h] [rbp-B0h] BYREF

  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool = 0LL;
  v11 = *(_DWORD *)(a1 + 140);
  v6 = v2 - 1664;
  v7 = 4;
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    v6 = 0LL;
  v15[0].m128i_i8[7] = MiLockWorkingSetShared(v2);
  if ( !v6 || MiProcessSuitableForCombining(v6) )
  {
    v8 = *(_QWORD *)(v2 + 152);
    if ( v8 )
    {
      v9 = (40 * v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      while ( 1 )
      {
        Pool = MiAllocatePool(64, v9, 0x6D75534Du);
        if ( Pool )
          break;
        v9 >>= 1;
        if ( v9 < 0x10000 )
          goto LABEL_11;
      }
      v15[2].m128i_i64[1] = -1LL;
      *((_QWORD *)&v13 + 1) = a1;
      LODWORD(v12) = v11;
      v15[10].m128i_i64[1] = (__int64)&v12;
      v15[9].m128i_i64[1] = (__int64)MiCombinePte;
      *(_QWORD *)&v13 = v9 / 0x28;
      v14 = Pool;
      v15[1].m128i_i64[1] = v2;
      v15[10].m128i_i64[0] = (__int64)MiCombineWorkingSetTail;
      v15[0].m128i_i32[0] = 6;
      v15[0].m128i_i8[6] = 7;
      v7 = MiWalkPageTables(v15);
    }
  }
LABEL_11:
  MiUnlockWorkingSetShared(v2, v15[0].m128i_u8[7]);
  if ( Pool )
  {
    if ( *((_QWORD *)&v12 + 1) )
      MiProcessCrcList(
        *((_QWORD *)&v13 + 1),
        Pool,
        *((_QWORD *)&v12 + 1),
        *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 138LL));
    ExFreePoolWithTag(Pool, 0);
  }
  if ( v7 == 5 )
    return (unsigned int)-1073741248;
  return v3;
}
