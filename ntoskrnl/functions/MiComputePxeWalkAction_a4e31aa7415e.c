__int64 __fastcall MiComputePxeWalkAction(int *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rsi
  int v8; // r10d
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r11d
  __int64 v12; // rcx
  __int64 SystemCacheReverseMap; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 LeafVa; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx

  v3 = *(_QWORD *)a2;
  v5 = a3;
  if ( a3 == 3
    && a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v18 = v3 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v3;
      v3 = v18;
      if ( (v17 & 0x42) != 0 )
        v3 = v18 | 0x42;
    }
  }
  if ( (v3 & 1) == 0 )
    return *a1 & 1;
  v8 = *a1;
  v9 = *a1 & 0x4000;
  if ( v9 )
  {
    v15 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( v15 == MiState[v5 + 2139] || v15 == MiState[v5 + 2135] || (v3 & 0x800) == 0 && (v3 & 0x42) == 0 )
      return *a1 & 1;
  }
  if ( !(_DWORD)v5 )
    return 1LL;
  v10 = *((_QWORD *)a1 + 8);
  v11 = 1;
  if ( v10 && v10 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v11 = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v12 = *((_QWORD *)a1 + 7);
  if ( v12 && v12 == *(_QWORD *)&a1[4 * v5 + 20] )
  {
    v11 = 0;
    *((_QWORD *)a1 + 7) = 0LL;
  }
  if ( (v3 & 0x80u) != 0LL )
  {
    if ( (v8 & 1) != 0 )
      return 1LL;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 184LL) & 7) == 0 )
    {
      LeafVa = MiGetLeafVa(a2);
      v20 = (((unsigned __int64)MiAdvanceToLastUntrimmableVa(LeafVa) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( (int)v5 > 1 )
      {
        v21 = (unsigned int)(v5 - 1);
        do
        {
          v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
      }
      v22 = -1;
      v23 = (__int64)(v20 - a2) >> 3;
      if ( v23 <= 0xFFFFFFFFLL )
        v22 = v23;
      a1[2] = v22;
    }
    return 0LL;
  }
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL
    || (v8 & 0x200) != 0
    && qword_140C693D8 != (PVOID)qword_140C693E0
    && ((v3 >> 12) & 0xFFFFFFFFFFLL) == MiState[v5 + 2139] )
  {
    return 0LL;
  }
  if ( (v8 & 1) == 0 )
  {
    if ( (*(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      return 1LL;
    if ( (_DWORD)v5 == 1 && (*(_BYTE *)(*((_QWORD *)a1 + 3) + 184LL) & 7) == 2 )
    {
      SystemCacheReverseMap = MiGetSystemCacheReverseMap((__int64)(a2 << 25) >> 16 << 25 >> 16);
      if ( !SystemCacheReverseMap
        || (unsigned __int16)*(_DWORD *)(SystemCacheReverseMap + 32) >> 6 != (unsigned __int64)*(unsigned __int16 *)(v14 + 174) )
      {
        return 1LL;
      }
    }
  }
  if ( !v11
    || (_DWORD)v5 == 1
    && (v8 & 0x11) == 0x10
    && (((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 4) & 0x3FF) == 0
     || (unsigned __int8)((*(_QWORD *)(48 * ((*(_QWORD *)a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 14) & 7) < *((_BYTE *)a1 + 5)) )
  {
    return 1LL;
  }
  if ( v9 && (int)v5 > 1 && (_DWORD)v5 == ((*((unsigned __int8 *)a1 + 4) >> 2) & 7) )
    MiMakeSystemLeavesNonZero(a1, a2, (unsigned int)v5);
  return 2LL;
}
