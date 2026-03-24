/*
 * XREFs of GetScaledLogFontForDpi @ 0x1C0047AC4
 * Callers:
 *     GetWindowNCMetricsForDpi @ 0x1C0064180 (GetWindowNCMetricsForDpi.c)
 *     GetWindowNCMetrics @ 0x1C00E0CB0 (GetWindowNCMetrics.c)
 *     _SystemParametersInfoForDpi @ 0x1C010F92C (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetDPIServerInfoForDpi @ 0x1C0044EF8 (GetDPIServerInfoForDpi.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00481B0 (GetDPIMETRICSForDpiUnsafe.c)
 *     GreExtGetObjectW @ 0x1C0083108 (GreExtGetObjectW.c)
 *     DeleteMetricsFont @ 0x1C00E2290 (DeleteMetricsFont.c)
 *     CreateScaledFont @ 0x1C01EA410 (CreateScaledFont.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(unsigned int a1, unsigned int a2, __int64 a3)
{
  HSURF *DPIMETRICSForDpiUnsafe; // rax
  BOOL v7; // esi
  int ScaledFont; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  INT v13; // r8d
  HSURF v14; // rbx
  HSURF v16; // rcx

  DPIMETRICSForDpiUnsafe = 0LL;
  v7 = 0;
  if ( a1 <= 3 )
    DPIMETRICSForDpiUnsafe = (HSURF *)GetDPIMETRICSForDpiUnsafe(a2);
  ScaledFont = 0;
  if ( !a1 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[8];
      goto LABEL_13;
    }
    v16 = *(HSURF *)(Get96DpiMetrics() + 64);
    goto LABEL_30;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[4];
      goto LABEL_13;
    }
    v16 = *(HSURF *)(Get96DpiMetrics() + 32);
    goto LABEL_30;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = *DPIMETRICSForDpiUnsafe;
      goto LABEL_13;
    }
    v16 = *(HSURF *)Get96DpiMetrics();
    goto LABEL_30;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( DPIMETRICSForDpiUnsafe )
    {
      v14 = DPIMETRICSForDpiUnsafe[7];
      goto LABEL_13;
    }
    v16 = *(HSURF *)(Get96DpiMetrics() + 56);
LABEL_30:
    v14 = 0LL;
    ScaledFont = CreateScaledFont(v16, 0LL, 0LL, 0LL);
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      *(_OWORD *)a3 = *(_OWORD *)(gpsi + 5004LL);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(gpsi + 5020LL);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(gpsi + 5036LL);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(gpsi + 5052LL);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(gpsi + 5068LL);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(gpsi + 5084LL);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(gpsi + 5092LL);
      v13 = *(unsigned __int16 *)(gpsi + 6998LL);
      if ( a2 != v13 )
      {
        *(_DWORD *)(a3 + 4) = EngMulDiv(*(_DWORD *)(a3 + 4), a2, v13);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, a2, *(unsigned __int16 *)(gpsi + 6998LL));
      }
      return 1;
    }
    return v7;
  }
  v14 = *(HSURF *)(GetDPIServerInfoForDpi(a2) + 8);
LABEL_13:
  if ( v14 )
    v7 = GreExtGetObjectW(v14) != 0;
  if ( ScaledFont )
    DeleteMetricsFont(v14);
  return v7;
}
