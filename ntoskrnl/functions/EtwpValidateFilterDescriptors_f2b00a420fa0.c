__int64 __fastcall EtwpValidateFilterDescriptors(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // esi
  unsigned __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // eax
  char *v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+2Ch] [rbp-1Ch]

  v2 = a1[29];
  if ( v2 > 0xD )
    return 3221225485LL;
  v5 = 16 * v2 + 120;
  if ( v5 > a1[1] )
    return 3221225485LL;
  v6 = 0;
  v7 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)&a1[4 * v7 + 30];
      if ( v8 < v5 )
        break;
      v9 = a1[20];
      if ( (v9 & 0x20) != 0 )
      {
        v13 = a1[4 * v7 + 33];
        if ( v13 == -2147479552
          || v13 == -2147483136
          || v13 == -2147482624
          || v13 == -2147475456
          || v13 == -2147483392
          || v13 == 0x80000000
          || v13 == -2147483646 )
        {
          break;
        }
      }
      v10 = (unsigned int)a1[4 * v7 + 33];
      if ( (v9 & 0x400) != 0 )
      {
        if ( (((_DWORD)v10 + 0x80000000) & 0xFFFFFEFD) == 0 && (_DWORD)v10 != -2147483390 )
          return 3221225485LL;
      }
      else if ( (_DWORD)v10 == -2147450880 )
      {
        return 3221225485LL;
      }
      v11 = (unsigned int)a1[4 * v7 + 32];
      if ( v8 + v11 < v8 || v8 + v11 > (unsigned int)a1[1] )
        return 3221225485LL;
      v15 = a1[4 * v7 + 32];
      v6 += v11;
      v14 = (char *)a1 + v8;
      v16 = v10;
      result = ((__int64 (__fastcall *)(__int64, char **, __int64, _DWORD *))EtwpAllocateFilter)(v10, &v14, a2, a1 + 10);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)++v7 >= a1[29] )
        return a1[1] != v5 + v6 ? 0xC000000D : 0;
    }
    return 3221225485LL;
  }
  return a1[1] != v5 + v6 ? 0xC000000D : 0;
}
