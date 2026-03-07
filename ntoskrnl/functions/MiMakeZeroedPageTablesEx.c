__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  int v9; // eax
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 *AnyMultiplexedVm; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int LargePagesForSystemMapping; // eax
  __int64 SharedVm; // rax
  int v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v35[46]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[22]; // [rsp+1D0h] [rbp+D0h] BYREF

  memset(v36, 0, sizeof(v36));
  memset(v35, 0, 0x168uLL);
  MiInitializeLargePfnList(v35);
  if ( (a3 & 0x800) != 0 || (a3 & 4) != 0 )
  {
    HIDWORD(v35[16]) = 3;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    HIDWORD(v35[16]) = 2;
LABEL_8:
    a3 &= ~0x80u;
    goto LABEL_9;
  }
  v9 = HIDWORD(v35[16]);
  if ( (a3 & 0x20) == 0 )
    v9 = 1;
  HIDWORD(v35[16]) = v9;
  if ( v9 == 4 )
    return 1LL;
  if ( v9 )
    goto LABEL_8;
LABEL_9:
  BYTE4(v36[0]) ^= (BYTE4(v36[0]) ^ (4 * BYTE4(v35[16]))) & 0x1C;
  v31 = 0;
  v10 = a1 << 25 >> 16;
  v32 = (a2 << 25 >> 16) + 4095;
  LODWORD(v35[15]) = a4;
  AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(5LL, 1LL);
  if ( a4 <= 9 )
  {
    if ( a4 == 9 )
    {
LABEL_11:
      v14 = v13;
LABEL_12:
      AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(v14, v11);
      goto LABEL_13;
    }
    if ( a4 == (_DWORD)v11 )
    {
      if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
      {
        v31 = 2;
        AnyMultiplexedVm = (unsigned __int64 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 192);
      }
      goto LABEL_13;
    }
    v24 = a4 - v11 - v11;
    if ( !v24 )
    {
      v31 = v11;
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
      goto LABEL_13;
    }
    v25 = v24 - v11;
    if ( v25 )
    {
      v26 = v25 - v13;
      if ( !v26 )
      {
        v14 = 2LL;
        goto LABEL_12;
      }
      if ( v26 == 2 )
      {
        v14 = 0LL;
        goto LABEL_12;
      }
      goto LABEL_13;
    }
LABEL_25:
    v14 = (unsigned int)v11;
    goto LABEL_12;
  }
  if ( a4 == 12 )
    goto LABEL_25;
  v27 = a4 - 12 - v11;
  if ( !v27 )
    goto LABEL_11;
  v28 = v27 - v11;
  if ( !v28 || v28 == 2 )
  {
    v14 = 4LL;
    goto LABEL_12;
  }
LABEL_13:
  v15 = a5;
  v16 = *(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v35[44] = -1LL;
  LODWORD(v35[16]) = a3;
  v35[12] = v16;
  HIDWORD(v35[15]) = a5;
  if ( (a3 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v35);
    v15 = HIDWORD(v35[15]);
  }
  else if ( v10 >= 0xFFFFDE0000000000uLL && v10 < 48 * qword_140C65820 - 0x21FFFFFFFFD0LL || a4 == 17 )
  {
    v35[44] = 0LL;
  }
  MiInitializeColorBase(v10, v15, &v35[42]);
  v17 = HIDWORD(v35[43]) >> byte_140C6570D;
  if ( (a3 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v35, v10, v32);
    if ( LargePagesForSystemMapping >= 0 )
    {
      if ( LargePagesForSystemMapping == 1075380276 )
      {
        LOWORD(a3) = a3 & 0xFF7F;
        LODWORD(v35[16]) &= ~0x80u;
      }
    }
    else if ( (a3 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v35);
      return 0LL;
    }
  }
  if ( LODWORD(v35[15]) == 4 && (a3 & 0x80u) == 0 && (MiFlags & 0x400000000LL) != 0 )
    MiFastReplenishWithAsync(*(_QWORD *)(v16 + 16) + 25408LL * v17 + 24976, ((a2 - a1) >> 3) + 1);
  if ( (MiFlags & 0x400000000LL) != 0 )
  {
    v18 = *(_QWORD *)(v16 + 16) + 25408LL * v17 + 24976;
    if ( *(_QWORD *)(v18 + 112) + *(_QWORD *)(v18 + 48) < (unsigned __int64)(unsigned int)(4 - HIDWORD(v35[16])) )
    {
      if ( ((LODWORD(v35[15]) - 5) & 0xFFFFFFF3) != 0 || LODWORD(v35[15]) == 17 )
        MiFastReplenishWithAsync(v18, 4 - HIDWORD(v35[16]));
      else
        MiAsyncSlabReplenish(v18, 0LL, 1LL);
    }
  }
  LODWORD(v35[18]) = v31;
  v36[19] = MiCreateSystemPageTable;
  v36[20] = MiCreateSystemPageTableTail;
  v36[21] = v35;
  LODWORD(v36[0]) = 18439;
  v36[4] = v10;
  v36[5] = v32;
  v35[19] = 20LL;
  WORD2(v35[18]) = 0;
  v35[20] = 0LL;
  v35[21] = 0LL;
  v36[3] = AnyMultiplexedVm;
  HIBYTE(v36[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiWalkPageTables(v36);
  LOBYTE(v19) = HIBYTE(v36[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v19);
  if ( (a3 & 0x40) != 0 && LODWORD(v35[15]) != 2 )
  {
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v20, v21, v22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(SharedVm + 48), v35[14]);
  }
  MiCleanupPageTablePages(v35);
  if ( SLODWORD(v35[41]) >= 0 )
    return 1LL;
  if ( (a3 & 0x200) == 0 )
    MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v10, v32, 0, (__int64)&v35[18], 3);
  return 0LL;
}
