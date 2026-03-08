/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C02B5CF8
 * Callers:
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C01EA480 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03085B0 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1C02BFE8C (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C02C4B70 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __int64 v6; // rdi
  UINT v7; // eax
  int v8; // eax
  int v9; // eax
  UINT v10; // esi
  int v11; // eax
  struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v13; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0;
  v4 = a2[3];
  v6 = v4;
  if ( *((_DWORD *)this + v4 + 1155) < *((_DWORD *)this + v4 + 1157) )
  {
    *((_DWORD *)this + v4 + 1157) = 0;
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 166) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      if ( (_DWORD)v4 == 1 && *((int *)this + 638) >= 8960 )
        *((_DWORD *)this + v4 + 1155) = 1;
    }
    else
    {
      v7 = *a2;
      *(_QWORD *)&v13.NoninvasiveTypes.Notifications.0 = 0LL;
      v13.DiagnosticCategory.Value = v7;
      v8 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v13);
      v3 = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry3(3LL, v13.DiagnosticCategory.Value, v8, 3LL);
      }
      else if ( ((v13.NoninvasiveTypes.Notifications.Value | v13.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v13.DiagnosticCategory.Value,
          v13.NoninvasiveTypes.Notifications.Value,
          v13.InvasiveTypes.Notifications.Value,
          2LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Ignoring diagnostics query for category 0x%.8x which reported non-zero reserved fields, Non-Invasive:"
                    " %.8x, Invasive: %.8x",
          v13.DiagnosticCategory.Value,
          v13.NoninvasiveTypes.Notifications.Value,
          v13.InvasiveTypes.Notifications.Value,
          2LL,
          0LL);
      }
      else if ( (v13.InvasiveTypes.Notifications.Value & v13.NoninvasiveTypes.Notifications.Value) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v13.DiagnosticCategory.Value,
          v13.NoninvasiveTypes.Notifications.Value,
          v13.InvasiveTypes.Notifications.Value,
          1LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Ignoring diagnostics query for category 0x%.8x which reported overlapping types, Non-Invasive: %.8x, Invasive: %.8x",
          v13.DiagnosticCategory.Value,
          v13.NoninvasiveTypes.Notifications.Value,
          v13.InvasiveTypes.Notifications.Value,
          1LL,
          0LL);
      }
      else
      {
        *((_DWORD *)this + v6 + 1155) = v13.NoninvasiveTypes.Notifications.Value | v13.InvasiveTypes.Notifications.Value;
      }
    }
  }
  v9 = *((_DWORD *)this + v6 + 1155);
  v10 = v9 & a2[1];
  if ( v9 && *((_DWORD *)this + v6 + 1157) != v10 )
  {
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 166) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      || (v13.DiagnosticCategory.Value = *(_QWORD *)a2,
          v13.NoninvasiveTypes.Notifications.Value = v10,
          v11 = DXGADAPTER::DdiControlDiagnosticReporting(this, (struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *)&v13),
          v3 = v11,
          v11 >= 0) )
    {
      *((_DWORD *)this + v6 + 1157) = v10;
    }
    else
    {
      WdLogSingleEntry4(3LL, *a2, a2[1], v11, 4LL);
    }
  }
  return v3;
}
