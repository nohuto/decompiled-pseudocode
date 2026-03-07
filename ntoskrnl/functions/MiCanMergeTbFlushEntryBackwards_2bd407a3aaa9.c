_BOOL8 __fastcall MiCanMergeTbFlushEntryBackwards(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r8d
  _BOOL8 result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v5 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( v5 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      v7 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v5 - 1) + 24);
      if ( ((v7 >> 10) & 3) == a4 && (v7 & 0xFFFFFFFFFFFFF000uLL) == a2 + a3 * (4096LL << (9 * (unsigned __int8)a4)) )
      {
        v8 = v7 & 0x3FF;
        if ( v8 + a3 > v8 && v8 + a3 <= 0x3FF )
          return 1;
      }
    }
  }
  return result;
}
