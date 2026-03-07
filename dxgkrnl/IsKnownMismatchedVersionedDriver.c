char __fastcall IsKnownMismatchedVersionedDriver(int a1, __int64 a2, __int64 a3)
{
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFF0000) < 0x150000 && (*(_DWORD *)(a3 + 4) & 0xFFFF0000) < 0x150000 )
    return 1;
  if ( a1 == 32902 )
  {
    if ( *(_QWORD *)a2 != 0x16001400101215LL )
      return 0;
    return *(_QWORD *)a3 == 0x15001400101215LL;
  }
  if ( a1 == 4098 )
    return (*(_QWORD *)a3 & 0xFFFFFFFFFFFF0000uLL) == 0x15001300800000LL;
  if ( a1 != 1297040209 )
    return 0;
  if ( *(_QWORD *)a2 == 0x160012042C0000LL && *(_QWORD *)a3 == 0x160012042B003CLL )
    return 1;
  return (*(_QWORD *)a2 & 0xFFFFFFFFFFFF0000uLL) == 0x848003800000000LL;
}
