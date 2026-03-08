/*
 * XREFs of ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1C02F33E0
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4034 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02C911C (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int128 v4; // xmm0
  __int64 v5; // r8
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned int LiveDumpWithDriverBlob; // eax
  int v9; // [rsp+50h] [rbp-28h] BYREF
  __int128 v10; // [rsp+54h] [rbp-24h]

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry1(1LL, 1397LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1397LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)this + 3488) )
  {
    v4 = *(_OWORD *)((char *)this + 28);
    v5 = *((int *)this + 6);
    *((_QWORD *)this + 433) = &v9;
    v6 = *(struct _DEVICE_OBJECT **)(v1 + 216);
    v9 = 16;
    v10 = v4;
    LiveDumpWithDriverBlob = DxgCreateLiveDumpWithDriverBlob(
                               v6,
                               0x1B8u,
                               v5,
                               0LL,
                               0LL,
                               0LL,
                               (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256));
    *((_QWORD *)this + 433) = 0LL;
    return LiveDumpWithDriverBlob;
  }
  return v2;
}
