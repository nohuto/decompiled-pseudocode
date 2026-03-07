ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, int a2, int a3, __int64 a4)
{
  _KPROCESS *Process; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned __int64 Flink; // r13
  unsigned __int8 v9; // r15
  __int64 v10; // r14
  ULONG_PTR v11; // rdi
  _QWORD *v12; // rsi
  ULONG_PTR v13; // r12
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  ULONG_PTR BugCheckParameter4; // rax
  BOOL HasShadow; // r14d
  __int64 v19; // r8
  ULONG_PTR v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  unsigned __int8 v24; // [rsp+A8h] [rbp+48h] BYREF
  int v25; // [rsp+B0h] [rbp+50h]

  v25 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = a2;
  v21 = a2;
  v7 = a2;
  v23 = 0LL;
  Flink = (unsigned __int64)Process[1].ProcessListEntry.Flink;
  if ( a2 < 4LL )
  {
    a2 = 4;
    do
    {
      BugCheckParameter2[v6] = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v6;
    }
    while ( v6 < 4 );
  }
  v9 = 17;
  v10 = a2;
  v11 = 0LL;
  v24 = 17;
  v20 = 0LL;
  v12 = (_QWORD *)Flink;
  while ( 1 )
  {
    v13 = BugCheckParameter2[--v10];
    if ( v10 == 3 )
    {
      v12 += (v13 >> 3) & 0x1FF;
    }
    else
    {
      if ( v9 != 17 )
        MiUnmapPageInHyperSpaceWorker(Flink, v9);
      v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20);
      v15 = MiMapPageInHyperSpaceWorker((v14 >> 12) & 0xFFFFFFFFFFLL, &v24, 0x80000000);
      v9 = v24;
      Flink = v15;
      v7 = v21;
      v12 = (_QWORD *)(v15 + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( v25 && v10 == v7 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v12);
    v20 = BugCheckParameter4;
    v11 = BugCheckParameter4;
    if ( v10 && (BugCheckParameter4 & 1) != 0 && (BugCheckParameter4 & 0x80u) != 0LL )
      KeBugCheckEx(0x1Au, 0x3606uLL, v13, 0LL, BugCheckParameter4);
    v7 = v21;
    if ( v10 == v21 )
      goto LABEL_14;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v10 )
      a4 |= 0x100uLL;
    HasShadow = 0;
    if ( MiPteInShadowRange((unsigned __int64)v12) )
    {
      if ( MiPteHasShadow() )
      {
        HasShadow = 1;
        if ( !HIBYTE(word_140C6697C) && (a4 & 1) != 0 )
          a4 |= 0x8000000000000000uLL;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (a4 & 1) != 0 )
        {
          a4 |= 0x8000000000000000uLL;
        }
        v11 = v20;
        v9 = v24;
      }
    }
  }
  else
  {
    HasShadow = 0;
    if ( MiPteInShadowRange((unsigned __int64)v12) )
      HasShadow = MiPteHasShadow();
  }
  *v12 = a4;
  if ( HasShadow )
    MiWritePteShadow((__int64)v12, a4, v19);
LABEL_14:
  if ( v9 != 17 )
    MiUnmapPageInHyperSpaceWorker(Flink, v9);
  return v11;
}
