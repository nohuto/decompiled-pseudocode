__int64 __fastcall DrvDbUnloadDatabaseNode(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD, __int64); // rbp
  NTSTATUS v3; // ebx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // r14d
  HANDLE *v10; // rsi
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 80);
  v3 = 0;
  v11 = 0LL;
  if ( v2 )
  {
    v11 = a2 + 96;
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD))v2)(
           a1,
           *(_QWORD *)(a2 + 24),
           2LL,
           1LL,
           &v11,
           *(_QWORD *)(a2 + 88));
    if ( v6 == -1073741822 )
    {
      v2 = 0LL;
    }
    else if ( v6 < 0 )
    {
      v3 = v6;
LABEL_6:
      v7 = v2(a1, *(_QWORD *)(a2 + 24), 2LL);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741822 && !v3 )
        return v7;
      return (unsigned int)v3;
    }
  }
  if ( *(_QWORD *)(a2 + 96) )
  {
    if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    {
      v9 = 0;
      v10 = (HANDLE *)(a2 + 104);
      do
      {
        if ( *v10 )
        {
          v3 = ZwClose(*v10);
          if ( v3 < 0 )
            goto LABEL_5;
          *v10 = 0LL;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 6 );
    }
    v3 = ZwClose(*(HANDLE *)(a2 + 96));
    if ( v3 >= 0 )
      *(_QWORD *)(a2 + 96) = 0LL;
  }
LABEL_5:
  if ( v2 )
    goto LABEL_6;
  return (unsigned int)v3;
}
