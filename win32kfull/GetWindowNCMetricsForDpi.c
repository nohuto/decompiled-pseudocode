__int64 __fastcall GetWindowNCMetricsForDpi(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // esi
  __int64 DPIMETRICSForDpiUnsafe; // rax
  int ScaledFont; // r15d
  HBRUSH v9; // rdi
  int v10; // ebp
  int v11; // edi
  HBRUSH *v12; // rax
  int v13; // r15d
  HBRUSH v14; // rsi
  int v15; // ebp
  int v16; // edi
  __int64 v17; // rax
  int v18; // r15d
  HBRUSH v19; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax

  v3 = a2;
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, a2);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, v3);
  v4 = Get96DpiServerInfo();
  *(_DWORD *)(a1 + 4) = EngMulDiv(*(_DWORD *)(v4 + 4), v3, 96);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, v3);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, v3);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, v3);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, v3);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, v3);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, v3);
  *(_DWORD *)(a1 + 500) = GetDpiDependentMetric(29LL, v3);
  v5 = GetScaledLogFontForDpi(4LL, v3) & 1;
  v6 = 0;
  DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(v3);
  ScaledFont = 0;
  if ( DPIMETRICSForDpiUnsafe )
  {
    v9 = *(HBRUSH *)(DPIMETRICSForDpiUnsafe + 32);
  }
  else
  {
    v21 = Get96DpiMetrics();
    v9 = 0LL;
    ScaledFont = CreateScaledFont(*(_QWORD *)(v21 + 32), 0LL, 0LL, 0LL);
  }
  if ( v9 && (unsigned int)GreExtGetObjectW(v9, 92LL, (_WORD *)(a1 + 124)) )
    v6 = 1;
  if ( ScaledFont )
    DeleteMetricsFont(v9);
  v10 = v6 & v5;
  v11 = 0;
  v12 = (HBRUSH *)GetDPIMETRICSForDpiUnsafe(v3);
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
  if ( v14 && (unsigned int)GreExtGetObjectW(v14, 92LL, (_WORD *)(a1 + 224)) )
    v11 = 1;
  if ( v13 )
    DeleteMetricsFont(v14);
  v15 = v11 & v10;
  v16 = 0;
  v17 = GetDPIMETRICSForDpiUnsafe(v3);
  v18 = 0;
  if ( v17 )
  {
    v19 = *(HBRUSH *)(v17 + 56);
  }
  else
  {
    v23 = Get96DpiMetrics();
    v19 = 0LL;
    v18 = CreateScaledFont(*(_QWORD *)(v23 + 56), 0LL, 0LL, 0LL);
  }
  if ( v19 && (unsigned int)GreExtGetObjectW(v19, 92LL, (_WORD *)(a1 + 316)) )
    v16 = 1;
  if ( v18 )
    DeleteMetricsFont(v19);
  return v15 & v16 & (unsigned int)GetScaledLogFontForDpi(5LL, v3);
}
