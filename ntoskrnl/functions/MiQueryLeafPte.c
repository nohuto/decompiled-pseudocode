__int64 __fastcall MiQueryLeafPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r11d
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  signed __int64 v8; // rdx
  signed __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  _KPROCESS *Process; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v21; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  struct _LIST_ENTRY *v26; // r9
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a3;
  v5 = a2;
  v6 = (__int64)(a2 << 25) >> 16;
  if ( v6 >= qword_140C66CE8 && v6 < qword_140C66CE8 + MiHyperSpaceSize() || v4 >= 1 )
    return 0LL;
  v7 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = v7 | 0x20;
      v24 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      if ( (v24 & 0x20) == 0 )
        v23 = *(_QWORD *)v5;
      v7 = v23;
      if ( (v24 & 0x42) != 0 )
        v7 = v23 | 0x42;
    }
  }
  v30 = v7;
  if ( (v7 & 1) == 0 )
    return 0LL;
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30) >> 12) & 0xFFFFFFFFFFLL);
  v9 = v8 - 0x220000000000LL;
  if ( (*(_DWORD *)v3 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v10;
    if ( v10 < *(_QWORD *)(v3 + 24) )
    {
      v11 = *(_QWORD *)(v3 + 8) + 8 * v10;
      *(_QWORD *)(v11 - 8) = v6 ^ (*(_DWORD *)(v11 - 8) ^ (unsigned int)v6) & 0xFFF;
      *(_QWORD *)(v11 - 8) ^= (*(_DWORD *)(v11 - 8) ^ (*((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v8 >> 4))
                                                       + 2) << 9)) & 0xE00;
      v12 = *(_QWORD *)(v11 - 8) ^ ((unsigned __int16)*(_QWORD *)(v11 - 8) ^ (*(_QWORD *)(v9 + 40) >> 55)) & 0x100;
      *(_QWORD *)(v11 - 8) = v12;
      if ( *(__int64 *)(v9 + 40) >= 0 )
      {
        v21 = v12 & 0xFFFFFFFFFFFFFF1FuLL;
        *(_QWORD *)(v11 - 8) = v21;
        v19 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v9 + 16) >> 5)) & 0x1F;
        goto LABEL_18;
      }
      if ( (*(_DWORD *)v3 & 2) != 0 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
      }
      else
      {
        LOBYTE(v25) = 7;
        if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v25 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        v13 = (unsigned __int8)(v12 ^ (32 * v25)) & 0xE0 ^ v12;
      }
      *(_QWORD *)(v11 - 8) = v13;
      v14 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v15 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        v26 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v26 )
        {
          v27 = *((_QWORD *)&v26->Flink + ((v14 >> 3) & 0x1FF));
          if ( (v27 & 0x20) != 0 )
            v15 |= 0x20uLL;
          if ( (v27 & 0x42) != 0 )
            v15 |= 0x42uLL;
        }
      }
      v16 = (v15 >> 60) & 7;
      if ( v16 )
      {
        if ( (*(_QWORD *)v14 & 0x18) == 8 )
        {
          v16 |= 0x18u;
        }
        else
        {
          if ( (*(_QWORD *)v14 & 0x10) == 0 )
          {
LABEL_17:
            v19 = *(_QWORD *)(v11 - 8) ^ (*(_DWORD *)(v11 - 8) ^ v16) & 0x1F;
LABEL_18:
            *(_QWORD *)(v11 - 8) = v19;
            return 0LL;
          }
          v16 |= 8u;
        }
      }
      if ( !v16 )
      {
        v17 = (*(_DWORD *)(v9 + 16) >> 5) & 0x1F;
        if ( _bittest64((const signed __int64 *)(v9 + 40), 0x28u) || *(__int64 *)(v9 + 8) <= 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process[1].Affinity.StaticBitmap[12] )
          {
            if ( MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) )
              v17 = MmMakeProtectNotWriteCopy[v17];
          }
          v16 = v17;
        }
        else
        {
          v16 = MmMakeProtectNotWriteCopy[v17];
        }
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( *(__int64 *)(v9 + 40) >= 0 )
      return 0LL;
    v28 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v28;
    if ( v28 < *(_QWORD *)(v3 + 24) )
    {
      v29 = 32 * v28 + *(_QWORD *)(v3 + 8);
      MiIdentifyPfnWrapper(v8 - 0x220000000000LL, v29 - 32);
      *(_QWORD *)(v29 - 8) = v6;
      return 0LL;
    }
  }
  return 5LL;
}
