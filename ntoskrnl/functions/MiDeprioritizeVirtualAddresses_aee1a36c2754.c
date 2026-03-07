__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 valid; // r15
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  char v15; // r13
  __int64 v16; // r8
  unsigned __int8 v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v21; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[24]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v23, 0, 0xB8uLL);
  v8 = MiTbFlushType(a3);
  v23[2] = 0LL;
  v23[3] = 0LL;
  LODWORD(v23[0]) = v8;
  v20 = dword_140C67C68;
  WORD2(v23[0]) = 4;
  LODWORD(v23[1]) = 20;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  valid = 0LL;
  v21 = v9 + 8 * a2;
  v12 = MiLockWorkingSetShared(v11);
  v18 = v12;
  if ( v9 >= v21 )
    return MiUnlockWorkingSetShared(a3, v12);
  do
  {
    v13 = v9 >> 9;
    if ( valid )
    {
      if ( valid == (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        goto LABEL_9;
      if ( HIDWORD(v23[1]) )
        MiFreeWsleList(a3, (__int64)v23, 0);
      MiUnlockPageTableInternal(a3, valid);
    }
    valid = MiLockLowestValidPageTable(a3, v9, &v22);
    if ( valid != (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(a3, valid);
      valid = 0LL;
      v9 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_26;
    }
LABEL_9:
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v15 = MiGetWsleContents(0xFFFFFFFFFFLL, (__int64)(v9 << 25) >> 16) & 0xF;
      if ( v15 != 9 )
      {
        if ( !_bittest64((const signed __int64 *)(v14 + 40), 0x28u) )
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v16 > 0 )
            MiDemoteCombinedPte(a3, v9, v16 | 0x8000000000000000uLL);
        }
        if ( (a4 & 8) == 0 && (a4 & 7) != (unsigned int)MiGetPfnPriority(v14) )
        {
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v19);
            while ( *(__int64 *)(v14 + 24) < 0 );
          }
          MiUpdatePfnPriority(v14);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (a4 & 0x10) != 0 && v15 != 8 )
        {
          if ( v20 )
            MI_WSLE_LOG_ACCESS(a3, v9);
          MiInsertTbFlushEntry((__int64)v23, (__int64)(v9 << 25) >> 16, 1LL, 0);
          if ( HIDWORD(v23[1]) == LODWORD(v23[1]) )
            MiFreeWsleList(a3, (__int64)v23, 0);
        }
      }
    }
LABEL_26:
    v9 += 8LL;
  }
  while ( v9 < v21 );
  if ( valid )
  {
    if ( HIDWORD(v23[1]) )
      MiFreeWsleList(a3, (__int64)v23, 0);
    MiUnlockPageTableInternal(a3, valid);
  }
  v12 = v18;
  return MiUnlockWorkingSetShared(a3, v12);
}
