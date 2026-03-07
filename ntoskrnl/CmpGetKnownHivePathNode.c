bool __fastcall CmpGetKnownHivePathNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 *a7,
        unsigned int *a8)
{
  unsigned int v9; // edi
  bool result; // al
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-18h] BYREF

  DWORD1(v13) = 0;
  v9 = BugCheckParameter4;
  String1 = 0LL;
  *((_QWORD *)&v13 + 1) = *(_QWORD *)(a5 + 8) + 36LL;
  WORD1(v13) = *(_WORD *)(a5 + 2) - 36;
  LOWORD(v13) = *(_WORD *)a5 - 36;
  if ( !CmpGetNextName((__int16 *)&v13, (__int64)&String1, (bool *)&a5) )
    return 0;
  if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveName, 1u) )
  {
    if ( !RtlEqualUnicodeString(&String1, &CmpDevicesHiveName, 1u) )
      return 0;
    BugCheckParameter3 = a3;
    v9 = a4;
  }
  if ( !BugCheckParameter3 )
    return 0;
  result = CmpFindHiveSubKey(BugCheckParameter3, v9, &v13, a7, a8);
  if ( result )
    *a6 = BugCheckParameter3;
  return result;
}
