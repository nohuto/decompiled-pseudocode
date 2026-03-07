__int64 __fastcall EtwpAllocateFilter(int a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // eax
  _WORD *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rdx

  result = 0LL;
  switch ( a1 )
  {
    case -2147483644:
      result = EtwpAllocatePidFilter(a2, a3 + 8);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000004;
      return result;
    case -2147483640:
      result = EtwpAllocateStringFilterData(a2, a3 + 16);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000008;
      return result;
    case -2147483632:
      result = EtwpAllocateStringFilterData(a2, a3 + 24);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000010;
      return result;
    case -2147483616:
      result = EtwpAllocateStringFilterData(a2, a3 + 32);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000020;
      return result;
    case -2147450880:
      result = EtwpAllocateStringFilterData(a2, a3 + 40);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80008000;
      return result;
    case -2147479552:
      v12 = *a2;
      if ( !*(_QWORD *)(a3 + 48) )
      {
        v13 = *((unsigned int *)a2 + 2);
        if ( (unsigned int)(v13 - 6) <= 0x3FA )
        {
          v14 = *(unsigned __int16 *)(v12 + 2);
          if ( v13 == 2 * v14 + 4 )
          {
            v15 = 1LL;
            if ( (unsigned __int16)(v14 - 1) <= 0x3Fu )
            {
              v16 = 0;
              if ( *(_WORD *)(v12 + 2) )
              {
                v17 = (_WORD *)(v12 + 4);
                while ( *v17 != 0xFFFF )
                {
                  ++v16;
                  ++v17;
                  if ( v16 >= (unsigned int)v14 )
                    goto LABEL_43;
                }
                return 3221225485LL;
              }
LABEL_43:
              LOBYTE(v15) = *(_BYTE *)v12;
              result = EtwpCreatePerfectHashFunction(v15, v12 + 4, v14, a3 + 48);
              if ( (int)result >= 0 )
                *(_DWORD *)a3 |= 0x80001000;
              return result;
            }
          }
        }
      }
      return 3221225485LL;
  }
  if ( a1 != -2147483136 )
  {
    switch ( a1 )
    {
      case -2147482624:
        result = EtwpAllocateEventNameFilter(a2, a3 + 96);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80000400;
        return result;
      case -2147475456:
        result = EtwpAllocateEventNameFilter(a2, a3 + 56);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80002000;
        return result;
      case -2147467264:
        result = EtwpAllocateLevelKwFilter(a2, a3 + 64);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80004000;
        return result;
    }
    if ( a1 != -2147483392 )
    {
      if ( a1 == 0x80000000 )
      {
        result = EtwpAllocateSchematizedFilter(a2, a3 + 88);
        if ( (int)result >= 0 )
          *(_DWORD *)a3 |= 0x80000000;
      }
      return result;
    }
    if ( a4 )
    {
      result = EtwpAllocatePayloadFilterData(a4, a2, a3 + 80);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000100;
      return result;
    }
    return 3221225485LL;
  }
  v6 = *a2;
  if ( *(_QWORD *)(a3 + 72) )
    return 3221225485LL;
  v7 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)(v7 - 6) > 0x3FA )
    return 3221225485LL;
  v8 = *(unsigned __int16 *)(v6 + 2);
  if ( v7 != 2 * v8 + 4 )
    return 3221225485LL;
  v9 = 1LL;
  if ( (unsigned __int16)(v8 - 1) > 0x3Fu )
    return 3221225485LL;
  v10 = 0;
  if ( *(_WORD *)(v6 + 2) )
  {
    v11 = (_WORD *)(v6 + 4);
    while ( *v11 != 0xFFFF )
    {
      ++v10;
      ++v11;
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_16;
    }
    return 3221225485LL;
  }
LABEL_16:
  LOBYTE(v9) = *(_BYTE *)v6;
  result = EtwpCreatePerfectHashFunction(v9, v6 + 4, v8, a3 + 72);
  if ( (int)result >= 0 )
    *(_DWORD *)a3 |= 0x80000200;
  return result;
}
