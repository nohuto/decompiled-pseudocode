__int64 __fastcall MmRelocatePfnList(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v9; // r13d
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v11; // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // xmm1_8
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  __int128 v19; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v20[128]; // [rsp+A0h] [rbp-60h] BYREF

  v15 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( a3 >= (unsigned __int16)KeNumberNodes )
    return 3221225712LL;
  if ( a4 >= MmNumberOfChannels )
    return 3221225713LL;
  v9 = (a4 << byte_140C6570E) | (a3 << byte_140C6570D);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
    a3 + 1,
    (__int64)&v19);
  if ( !(unsigned int)MiCreateUltraThreadContext((__int64)v20, (__int64)&v19, 8, 0) )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v11 = &a2[3 * a1];
  MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  while ( a2 < v11 )
  {
    v12 = a2[1];
    v13 = 0LL;
    *(_QWORD *)&v16 = 0LL;
    v17 = 0LL;
    *((_QWORD *)&v16 + 1) = v12;
    if ( (unsigned int)MiIsPfn(v12) )
    {
      MiIdentifyPfnWrapper(48 * v12 - 0x220000000000LL, (__int64)&v16);
      v13 = v17;
      if ( v17 == a2[2] && ((*a2 ^ (unsigned __int64)v16) & 0x1FFFFFFFFFFFE00LL) == 0 )
      {
        if ( !MiPfnsWorthTrying((__int64)MiSystemPartition, 48 * v12 - 0x220000000000LL, 1LL, 0, &v15) )
        {
          if ( (v15 & 1) != 0 )
            MiEmptyKernelStackCache((union _SLIST_HEADER *)MiSystemPartition, 0);
          if ( !MiClaimPhysicalRun(
                  (__int64)MiSystemPartition,
                  v12,
                  1LL,
                  qword_140C65820,
                  (__int64)v20,
                  0x400000,
                  v9,
                  0LL,
                  *(unsigned __int8 *)(48 * v12 - 0x220000000000LL + 34) >> 6,
                  &v18,
                  &v15)
            && v18 != -1 )
          {
            *((_QWORD *)&v16 + 1) = v18;
            goto LABEL_19;
          }
        }
        v13 = v17;
      }
    }
    v17 = v13 | 2;
LABEL_19:
    v14 = v17;
    *(_OWORD *)a2 = v16;
    a2[2] = v14;
    a2 += 3;
  }
  MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  MiDeleteUltraThreadContext((__int64)v20);
  return 0LL;
}
