_BOOL8 __fastcall MiTrimmedEnough(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v2 != v3 )
  {
    if ( (*(_DWORD *)a2 & 0x4000) == 0 )
      return 0LL;
    if ( (*(_DWORD *)a2 & 0x8000) == 0 || v2 < 0x100 )
      return *(_QWORD *)(a1 + 144) <= (unsigned __int64)(*(_QWORD *)(a2 + 56) - v3);
  }
  return 1LL;
}
