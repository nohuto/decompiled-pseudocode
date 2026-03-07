__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // r8d

  if ( a3 > 31 )
  {
    WdLogSingleEntry1(1LL, 150LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type <= HMGRENTRY_TYPE_LIMIT", 150LL, 0LL, 0LL, 0LL, 0LL);
  }
  else if ( a3 <= 0 )
  {
    WdLogSingleEntry1(1LL, 151LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type > HMGRENTRY_TYPE_FREE", 151LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v9 = a1[2];
  if ( (unsigned int)v9 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 169LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 169LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0x1F) != 0 )
  {
    WdLogSingleEntry1(1LL, 170LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pEntryTable[Index].Type == HMGRENTRY_TYPE_FREE",
      170LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)a1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v12 = 2LL * a1[3];
  a1[2] = v11;
  a1[3] = *(_DWORD *)(v10 + 8 * v12);
  if ( v11 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 177LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListHead < m_TableSize",
      177LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1[3] >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 178LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListTail < m_TableSize",
      178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v9) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ a3) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((((v13 >> 5) & 3) << 24) | v9 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) >> 7) & 0x3F;
}
