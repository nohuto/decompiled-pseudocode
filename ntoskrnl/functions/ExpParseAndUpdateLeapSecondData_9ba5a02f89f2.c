__int64 __fastcall ExpParseAndUpdateLeapSecondData(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 Pool2; // rax
  __int64 v9; // rsi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 3 && *(_DWORD *)(a1 + 8) == 12 * (*(unsigned int *)(a1 + 8) / 0xCuLL) )
  {
    v4 = *(_DWORD *)(a1 + 8) / 0xCu;
    v5 = 8 * v4 + 8;
    if ( v5 > 0x1000 )
    {
      return 2;
    }
    else if ( v4 )
    {
      if ( v4 > *(_DWORD *)(a2 + 4) )
      {
        Pool2 = ExAllocatePool2(256LL, v5, 1683189836LL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v6 = RtlParseLeapSecondData(a1 + 12, v4, a2, Pool2);
          if ( !v6 )
          {
            memmove((void *)(a2 + 8), (const void *)(v9 + 8), 8LL * v4);
            _InterlockedOr(v10, 0);
            *(_DWORD *)(a2 + 4) = v4;
          }
          ExFreePoolWithTag((PVOID)v9, 0x6453704Cu);
        }
        else
        {
          return 7;
        }
      }
      else
      {
        return v4 < *(_DWORD *)(a2 + 4) ? 3 : 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
