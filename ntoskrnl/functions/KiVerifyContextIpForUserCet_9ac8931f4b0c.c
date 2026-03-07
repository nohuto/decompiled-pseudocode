__int64 __fastcall KiVerifyContextIpForUserCet(__int64 a1, __int64 a2, unsigned int *a3, char a4, unsigned __int64 *a5)
{
  __int64 v8; // rsi
  __int64 i; // rcx
  unsigned __int64 v10; // rbx
  unsigned int v11; // r8d
  __int64 result; // rax
  int ImageBaseAndLoadConfig; // eax
  char v14; // cl
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 248);
  if ( (unsigned __int64)(v8 - 0x10000) > 0x7FFFFFFDFFFFLL )
    return 3221227018LL;
  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  if ( v8 == *(_QWORD *)(i - 40) )
    return 0LL;
  v10 = *a5;
  v11 = *a3;
  if ( v11 >= 2 )
  {
    if ( v11 == 2 )
      return RtlVerifyUserUnwindTarget(v8, 2LL);
    if ( v11 != 3 )
      return 3221225485LL;
  }
  if ( !v10 )
  {
    v10 = __readmsr(0x6A7u);
    if ( !v10 )
      return 0LL;
  }
  if ( !v11 && v8 == qword_140D1F330 )
  {
    *a3 = 1;
    v11 = 1;
  }
  v15 = 0LL;
  v16 = 0LL;
  if ( !v11 )
  {
    result = RtlVerifyUserUnwindTarget(v8, 0LL);
    if ( (int)result >= 0 )
      return result;
  }
  if ( a4 && *a3 != 1 )
  {
    ImageBaseAndLoadConfig = RtlGetImageBaseAndLoadConfig(v8, &v15, (char *)&v15 + 8);
    v14 = v16;
    if ( ImageBaseAndLoadConfig >= 0 )
      v14 = 1;
    LOBYTE(v16) = v14;
    if ( v14 )
    {
      if ( (_QWORD)v15 )
      {
        if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 280LL) > 0x7FFFFFFF0000LL
          || (unsigned __int64)(*((_QWORD *)&v15 + 1) + 280LL) < *((_QWORD *)&v15 + 1) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( *((_QWORD *)&v15 + 1)
          && **((_DWORD **)&v15 + 1) >= 0x118u
          && (*(_DWORD *)(*((_QWORD *)&v15 + 1) + 144LL) & 0x400000) != 0 )
        {
          goto LABEL_31;
        }
        return 0LL;
      }
      return 0LL;
    }
  }
  do
  {
LABEL_31:
    if ( *(_QWORD *)v10 == v8 )
    {
      *a5 = v10 + 8;
      return 0LL;
    }
    v10 += 8LL;
  }
  while ( (v10 & 0xFFF) != 0 || (*(_DWORD *)(a1 + 1376) & 1) == 0 );
  return 3221225547LL;
}
