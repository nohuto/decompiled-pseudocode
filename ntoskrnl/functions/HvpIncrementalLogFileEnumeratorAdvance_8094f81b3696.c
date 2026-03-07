__int64 __fastcall HvpIncrementalLogFileEnumeratorAdvance(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  v6 = HvpReadLogEntryHeader(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), &v12);
  if ( v6 >= 0 )
  {
    if ( !(unsigned __int8)HvpIsLogEntryHeaderCoherent(&v12, v2) || HIDWORD(v12) != *(_DWORD *)(a1 + 4) )
      return (unsigned int)-2147483622;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a1 + 8))(
           *(_QWORD *)(a1 + 16),
           v2,
           DWORD1(v12),
           &v11);
    if ( v6 >= 0 )
    {
      v7 = v11;
      if ( (unsigned __int8)HvpIsMetadataArrayCoherent(&v12, v11 + 40, DWORD1(v13))
        && (unsigned int)HvpLogEntryCheckDataChecksum(v7, DWORD1(v12), &v12) )
      {
        ++*(_DWORD *)(a1 + 4);
        v8 = v11;
        *(_DWORD *)a1 = v2 + DWORD1(v12);
        *a2 = v8;
        return v3;
      }
      return (unsigned int)-2147483622;
    }
  }
  v10 = -1073741491;
  if ( v6 == -1073741807 )
    return (unsigned int)-2147483622;
  return v10;
}
