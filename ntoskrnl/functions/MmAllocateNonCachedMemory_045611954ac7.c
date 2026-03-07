PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rbp
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 v3; // r8
  struct _MDL *PagesForMdl; // rbx
  ULONG_PTR v5; // r14
  unsigned __int64 ValidPte; // rsi
  char *v8; // r13
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // [rsp+80h] [rbp+8h]

  if ( NumberOfBytes > 0xFFFFFFFF )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (int)MiSystemPartition,
                                 0LL,
                                 -1LL,
                                 0LL,
                                 v3,
                                 0,
                                 IdealNodeNumberThread,
                                 4,
                                 (__int64)KeGetCurrentThread()->ApcState.Process,
                                 0LL);
  if ( !PagesForMdl )
    return 0LL;
  v5 = MiReservePtes((__int64)&qword_140C695C0, v1);
  if ( !v5 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x21FFFFFFFFF0LL) = PagesForMdl;
  v13 = (__int64)(v5 << 25) >> 16;
  ValidPte = MiMakeValidPte(v5, 0LL, -1610612724);
  v8 = (char *)&PagesForMdl[1] - v5;
  do
  {
    v9 = 0;
    ValidPte ^= (ValidPte ^ (*(_QWORD *)&v8[v5] << 12)) & 0xFFFFFFFFFF000LL;
    v10 = ValidPte;
    if ( !MiPteInShadowRange(v5) )
      goto LABEL_15;
    if ( MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_15;
      v12 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_15;
      v12 = (ValidPte & 1) == 0;
    }
    if ( !v12 )
      v10 = ValidPte | 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v5 = v10;
    if ( v9 )
      MiWritePteShadow(v5, v10, v11);
    v5 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v13;
}
