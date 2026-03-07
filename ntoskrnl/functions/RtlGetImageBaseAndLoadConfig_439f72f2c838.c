__int64 __fastcall RtlGetImageBaseAndLoadConfig(unsigned __int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 Config; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  Config = 0LL;
  v13 = 0;
  v9 = 0LL;
  if ( RtlpLookupUserFunctionTableInverted(a1, (__int64)&v11) )
  {
LABEL_6:
    v8 = *((_QWORD *)&v11 + 1);
    goto LABEL_7;
  }
  if ( (int)MmGetImageInformation(a1, (char *)&v11 + 8, &v9, &v13) >= 0 )
  {
    if ( v9 >= 0xFFFFFFFF )
      return 3221225621LL;
    goto LABEL_6;
  }
  v8 = 0LL;
  *((_QWORD *)&v11 + 1) = 0LL;
LABEL_7:
  v10 = 0LL;
  if ( v8 )
  {
    if ( v8 + 64 > 0x7FFFFFFF0000LL || v8 + 64 < v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Config = LdrImageDirectoryEntryToLoadConfig(v8);
    v10 = Config;
  }
  *a2 = v8;
  *a3 = Config;
  return 0LL;
}
