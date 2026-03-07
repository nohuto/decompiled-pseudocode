__int64 __fastcall HvpMappedViewConvertLockedPagesToCOWByPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdi

  v4 = a2[8];
  if ( v4 )
  {
    v6 = a2[5];
    v7 = a2[6];
    v8 = v6;
    v9 = v6;
    if ( v6 < v7 )
    {
      while ( v4 )
      {
        if ( (*((_BYTE *)a2 + ((unsigned __int64)(v9 - a2[3]) >> 12) + 72) & 0x10) != 0 )
        {
          v9 += 4096LL;
        }
        else
        {
          if ( v6 != v8 )
          {
            result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2, v6, v8);
            if ( (int)result < 0 )
              return result;
            v4 = a2[8];
            v7 = a2[6];
          }
          v6 = v9 + 4096;
          v8 = v9;
          v9 += 4096LL;
        }
        v8 += 4096LL;
        if ( v9 >= v7 )
        {
          if ( v6 == v8 )
            return 0LL;
          result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2, v6, v8);
          if ( (int)result >= 0 )
            return 0LL;
          return result;
        }
      }
    }
  }
  return 0LL;
}
