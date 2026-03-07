__int64 *__fastcall ObpLookupNamespaceEntry(__int64 a1, __int64 a2)
{
  __int64 **v3; // rdi
  __int64 *i; // rbx
  int v6; // eax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-10h]

  v3 = (__int64 **)(a1 + 16LL * *(unsigned __int8 *)(a2 + 40));
  for ( i = *v3; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v3 )
      return 0LL;
    if ( i[3] == *(_QWORD *)(a2 + 24) )
    {
      v9 = 0LL;
      v6 = *(_DWORD *)(a2 + 52);
      v7 = 0LL;
      v8 = 0LL;
      if ( *((_DWORD *)i + 13) == v6 )
      {
        LODWORD(v9) = 0;
        *((_QWORD *)&v8 + 1) = 0LL;
        *(_QWORD *)&v7 = i;
        *((_QWORD *)&v7 + 1) = a2;
        if ( (int)RtlEnumerateBoundaryDescriptorEntries(
                    (_DWORD *)i + 12,
                    (unsigned int (__fastcall *)(_DWORD *, __int64))ObpCompareEntryLevel1,
                    (__int64)&v7) >= 0
          && (int)v9 >= 0
          && HIDWORD(v8) == DWORD2(v8) )
        {
          break;
        }
      }
    }
  }
  return i;
}
