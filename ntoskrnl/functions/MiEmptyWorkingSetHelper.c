__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  BOOL v10; // r9d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2 << 25 >> 16;
  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v10 = v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL;
  if ( !(unsigned int)MiWalkVaCheckCommon(a1, a2, v9, v10, (__int64)&v14)
    || *(_WORD *)(v9 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
  {
    return 0LL;
  }
  if ( dword_140C67C68 )
    MI_WSLE_LOG_ACCESS(a1, a2, v11, v12);
  MiInsertTbFlushEntry(a3, v8, 1LL);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
    MiFreeWsleList(a1, a3, a4);
  return 1LL;
}
