__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PVOID *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 result; // rax
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+80h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v10 = 0;
  v9 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    v4 = 8;
  }
  else
  {
    v4 = 0;
    if ( (v2 & 8) != 0 )
      v4 = 16;
  }
  result = v4 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v4;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, &v6) >= 0 )
    {
      if ( (*((int (__fastcall **)(_QWORD, int *))&v8 + 1))(*((_QWORD *)&v6 + 1), &v10) >= 0 )
      {
        if ( (v10 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v10 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v10 & 4) != 0 )
          v3 |= 0x20u;
      }
      (*((void (__fastcall **)(_QWORD))&v7 + 1))(*((_QWORD *)&v6 + 1));
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
