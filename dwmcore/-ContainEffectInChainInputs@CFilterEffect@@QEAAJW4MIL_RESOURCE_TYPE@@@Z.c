__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) )
    {
      v5 = 0;
    }
    else
    {
      v5 = -2147467259;
      if ( *(int *)(a1 + 152) > 0 )
      {
        v6 = *(int *)(a1 + 152);
        v7 = 0LL;
        do
        {
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v7);
          v9 = *(_QWORD *)(v8 + 24);
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, 61LL) )
            {
              v10 = *(_QWORD *)(v8 + 24);
              if ( v10 )
              {
                v5 = CFilterEffect::ContainEffectInChainInputs(v10, a2);
                if ( v5 >= 0 )
                  break;
              }
            }
          }
          ++v7;
        }
        while ( v7 < v6 );
      }
    }
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147467259, 0x269u, 0LL);
  }
  result = (unsigned int)v5;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}
