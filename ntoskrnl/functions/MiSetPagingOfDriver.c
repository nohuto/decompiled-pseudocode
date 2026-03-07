int __fastcall MiSetPagingOfDriver(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  char *AnyMultiplexedVm; // r13
  unsigned __int8 v11; // al
  __int64 v12; // r14
  __int64 v13; // r9
  __int16 v14; // cx
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  BOOL v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // rax
  int HasShadow; // eax
  unsigned __int8 v25; // [rsp+20h] [rbp-128h]
  unsigned __int64 v27; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-110h]
  _QWORD v29[24]; // [rsp+40h] [rbp-108h] BYREF

  v3 = a3;
  v28 = a3;
  v5 = a1;
  memset(v29, 0, 0xB8uLL);
  v6 = 0LL;
  v29[3] = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = 0LL;
  LODWORD(v29[1]) = 20;
  v9 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiLockLoaderEntry(v5 + 160, 2);
  v11 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v25 = v11;
  if ( a2 <= v3 )
  {
    do
    {
      if ( !v9 || (a2 & 0xFFF) == 0 )
      {
        if ( v6 )
        {
          MiFlushTbList(v29);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        if ( v9 )
          MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
        v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v9, 0);
      }
      if ( !(unsigned __int8)MiDriverPageMustStayResident(v5, a2) )
      {
        v12 = MI_READ_PTE_LOCK_FREE(a2);
        v27 = v12;
        if ( (v12 & 1) != 0 )
        {
          MI_READ_PTE_LOCK_FREE(&v27);
          if ( (MiGetWsleContents(0xFFFFFFFFFFLL, v7) & 0xF) == 9 )
          {
            v14 = *(_WORD *)(v13 + 32);
            if ( v14 == 1 || v14 == 2 && (*(_BYTE *)(v13 + 34) & 8) != 0 )
            {
              v15 = a2;
              if ( v6 )
                v15 = v6;
              v6 = v15;
              MiWriteWsle(v15, v7);
              v16 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v17 = 0;
              v27 = v16;
              if ( (unsigned int)MiPteInShadowRange(a2) )
              {
                HasShadow = MiPteHasShadow(v19, v18, v20);
                v21 = 1LL;
                v17 = HasShadow != 0;
              }
              else
              {
                v21 = 1LL;
              }
              *(_QWORD *)a2 = v16;
              if ( v17 )
                MiWritePteShadow(a2, v16);
              MiInsertTbFlushEntry(v29, v7, v21);
              v3 = v28;
            }
          }
        }
        else if ( (v12 & 0x400) != 0 && v6 )
        {
          MiFlushTbList(v29);
          v8 += MiTrimSystemImagePages(v6, a2 - 8);
          v6 = 0LL;
        }
        v5 = a1;
      }
      a2 += 8LL;
      v7 += 4096LL;
    }
    while ( a2 <= v3 );
    if ( v6 )
    {
      MiFlushTbList(v29);
      v8 += MiTrimSystemImagePages(v6, v3);
    }
    if ( v9 )
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v9);
    v11 = v25;
  }
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v11);
  LODWORD(v22) = MiUnlockLoaderEntry(v5 + 160, 2);
  if ( v8 )
  {
    v22 = *(_QWORD *)(v5 + 48);
    if ( v22 == PsHalImageBase || v22 == PsNtosImageBase )
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 2, v8);
    else
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 3, v8);
  }
  return v22;
}
