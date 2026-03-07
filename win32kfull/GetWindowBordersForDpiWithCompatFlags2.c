__int64 __fastcall GetWindowBordersForDpiWithCompatFlags2(int a1, int a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  int v7; // edi
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r12d
  int v11; // r9d
  int v12; // ecx
  int v13; // esi
  __int64 result; // rax
  int v15; // eax
  unsigned int v16; // r10d
  int DpiDependentMetric; // eax
  int v19; // [rsp+80h] [rbp+18h]

  v7 = 1;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = v9 + 1;
  v11 = a1 & 0xC00000;
  v19 = a1 & 0xC00000;
  if ( (a1 & 0xC00000) == 0 && (a2 & 1) == 0 )
    v10 = v9;
  v12 = a6 & 0x10000000;
  if ( (a6 & 0x10000000) != 0 || (a6 & 0x20000000) != 0 )
  {
    v13 = 0;
  }
  else
  {
    if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v13 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( a5 == 96 )
    {
      v13 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
        DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v16, a5);
      else
        DpiDependentMetric = GetDpiDependentMetric(v16, a5);
      v11 = v19;
      v13 = DpiDependentMetric;
      v8 = a1;
    }
    v12 = 0;
  }
  if ( (v8 & 0x40000) != 0 || (result = v10, v13 > 0) && v11 == 12582912 && (a6 & 0x30000000) == 0 )
  {
    if ( !v12 )
    {
      v7 = (int)(*(_DWORD *)(Get96DpiServerInfo() + 4) * a5 + 48) / 96;
      if ( (a6 & 0x20000000) != 0 )
      {
        if ( a5 == *(unsigned __int16 *)(gpsi + 6998LL) )
        {
          v15 = *(_DWORD *)(gpsi + 2400LL);
        }
        else if ( a5 == 96 )
        {
          v15 = *(_DWORD *)(gpsi + 2520LL);
        }
        else if ( (unsigned int)GetDpiCacheSlot(a5) == -1 )
        {
          v15 = ScaleSystemMetricForDPIWithoutCache(29LL, a5);
        }
        else
        {
          v15 = GetDpiDependentMetric(29LL, a5);
        }
        v7 += v15;
      }
    }
    result = v7 + v10 + v13;
  }
  if ( a4 )
  {
    if ( (a2 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
