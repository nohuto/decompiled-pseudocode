/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C00F0E0C
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C00A033C (_SystemParametersInfoForDpi.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     DeleteMetricsFont @ 0x1C008A250 (DeleteMetricsFont.c)
 *     GetDPIServerInfoForDpi @ 0x1C008A410 (GetDPIServerInfoForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00F0FA0 (GetDPIMETRICSForDpiUnsafe.c)
 *     CreateScaledFont @ 0x1C01BF458 (CreateScaledFont.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(int a1, unsigned int a2, __int64 a3)
{
  __int64 DPIMETRICSForDpiUnsafe; // r9
  BOOL v7; // ebp
  int v8; // ecx
  int ScaledFont; // esi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  INT v14; // r8d
  struct HLFONT__ *v15; // rbx
  __int64 v17; // rcx

  DPIMETRICSForDpiUnsafe = 0LL;
  v7 = 0;
  if ( !a1 || (v8 = a1 - 1) == 0 || (unsigned int)(v8 - 1) <= 1 )
    DPIMETRICSForDpiUnsafe = GetDPIMETRICSForDpiUnsafe(a2);
  ScaledFont = 0;
  if ( !a1 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v15 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 64);
      goto LABEL_16;
    }
    v17 = *(_QWORD *)(Get96DpiMetrics() + 64);
LABEL_32:
    v15 = 0LL;
    ScaledFont = CreateScaledFont(v17, 0LL, 0LL, 0LL);
    goto LABEL_16;
  }
  v10 = a1 - 1;
  if ( !v10 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v15 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 32);
      goto LABEL_16;
    }
    v17 = *(_QWORD *)(Get96DpiMetrics() + 32);
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v15 = *(struct HLFONT__ **)DPIMETRICSForDpiUnsafe;
      goto LABEL_16;
    }
    v17 = *(_QWORD *)Get96DpiMetrics();
    goto LABEL_32;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v15 = *(struct HLFONT__ **)(DPIMETRICSForDpiUnsafe + 56);
      goto LABEL_16;
    }
    v17 = *(_QWORD *)(Get96DpiMetrics() + 56);
    goto LABEL_32;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      *(_OWORD *)a3 = *(_OWORD *)(gpsi + 5004LL);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(gpsi + 5020LL);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(gpsi + 5036LL);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(gpsi + 5052LL);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(gpsi + 5068LL);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(gpsi + 5084LL);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(gpsi + 5092LL);
      v14 = *(unsigned __int16 *)(gpsi + 6998LL);
      if ( a2 != v14 )
      {
        *(_DWORD *)(a3 + 4) = EngMulDiv(*(_DWORD *)(a3 + 4), a2, v14);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, a2, *(unsigned __int16 *)(gpsi + 6998LL));
      }
      return 1;
    }
    return v7;
  }
  v15 = *(struct HLFONT__ **)(GetDPIServerInfoForDpi(a2) + 8);
LABEL_16:
  if ( v15 )
    v7 = GreExtGetObjectW((HBRUSH)v15, 92LL, a3) != 0;
  if ( ScaledFont )
    DeleteMetricsFont(v15);
  return v7;
}
