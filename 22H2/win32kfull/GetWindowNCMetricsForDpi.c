/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C00F0B8C
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C00A033C (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     DeleteMetricsFont @ 0x1C008A250 (DeleteMetricsFont.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C00F0E0C (GetScaledLogFontForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00F0FA0 (GetDPIMETRICSForDpiUnsafe.c)
 *     CreateScaledFont @ 0x1C01BF458 (CreateScaledFont.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // esi
  __int64 DPIMETRICSForDpiUnsafe; // rax
  int ScaledFont; // r15d
  struct HLFONT__ *v9; // rdi
  int v10; // ebp
  int v11; // edi
  struct HLFONT__ **v12; // rax
  int v13; // r15d
  struct HLFONT__ *v14; // rsi
  int v15; // ebp
  int v16; // edi
  __int64 v17; // rax
  int v18; // r15d
  struct HLFONT__ *v19; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax

  v3 = a2;
  a1[5] = GetDpiDependentMetric(13LL, a2);
  a1[55] = GetDpiDependentMetric(26LL, v3);
  v4 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v4 + 4), v3, 96);
  a1[2] = GetDpiDependentMetric(0LL, v3);
  a1[3] = GetDpiDependentMetric(10LL, v3);
  a1[4] = GetDpiDependentMetric(12LL, v3);
  a1[29] = GetDpiDependentMetric(23LL, v3);
  a1[30] = GetDpiDependentMetric(24LL, v3);
  a1[54] = GetDpiDependentMetric(25LL, v3);
  a1[125] = GetDpiDependentMetric(29LL, v3);
  v5 = GetScaledLogFontForDpi(4LL, v3) & 1;
  v6 = 0;
  DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(v3);
  ScaledFont = 0;
  if ( DPIMETRICSForDpiUnsafe )
  {
    v9 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 32);
  }
  else
  {
    v21 = Get96DpiMetrics();
    v9 = 0LL;
    ScaledFont = CreateScaledFont(*(_QWORD *)(v21 + 32), 0LL, 0LL, 0LL);
  }
  if ( v9 && (unsigned int)GreExtGetObjectW((HBRUSH)v9, 92LL, (__int64)(a1 + 31)) )
    v6 = 1;
  if ( ScaledFont )
    DeleteMetricsFont(v9);
  v10 = v6 & v5;
  v11 = 0;
  v12 = (struct HLFONT__ **)GetDPIMETRICSForDpiUnsafe(v3);
  v13 = 0;
  if ( v12 )
  {
    v14 = *v12;
  }
  else
  {
    v22 = (_QWORD *)Get96DpiMetrics();
    v14 = 0LL;
    v13 = CreateScaledFont(*v22, 0LL, 0LL, 0LL);
  }
  if ( v14 && (unsigned int)GreExtGetObjectW((HBRUSH)v14, 92LL, (__int64)(a1 + 56)) )
    v11 = 1;
  if ( v13 )
    DeleteMetricsFont(v14);
  v15 = v11 & v10;
  v16 = 0;
  v17 = GetDPIMETRICSForDpiUnsafe(v3);
  v18 = 0;
  if ( v17 )
  {
    v19 = *(struct HLFONT__ **)(v17 + 56);
  }
  else
  {
    v23 = Get96DpiMetrics();
    v19 = 0LL;
    v18 = CreateScaledFont(*(_QWORD *)(v23 + 56), 0LL, 0LL, 0LL);
  }
  if ( v19 && (unsigned int)GreExtGetObjectW((HBRUSH)v19, 92LL, (__int64)(a1 + 79)) )
    v16 = 1;
  if ( v18 )
    DeleteMetricsFont(v19);
  return v15 & v16 & (unsigned int)GetScaledLogFontForDpi(5LL, v3);
}
