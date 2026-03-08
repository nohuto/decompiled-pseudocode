/*
 * XREFs of ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F4034
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F49D0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F2ED8 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1C02F33E0 (-CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02F40EC (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02F42BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1C02F44F8 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned int i; // esi
  unsigned __int64 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0;
  v2 = 512;
  v3 = *(_DWORD *)this;
  v11 = 512;
  if ( (_BYTE)v3 == 8 && (v3 & 0x100) != 0 )
    DISPLAYSTATECHECKER::LogDisplayBlackBoxData(this, &v12);
  DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(this);
  if ( (*(_DWORD *)this & 0x100) != 0 )
  {
    DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
      this,
      v6,
      (unsigned __int8)*(_DWORD *)this,
      v7,
      v9,
      v10,
      (enum DxgkrnlLiveDumpFailureReason *)&v11);
    v2 = v11;
    for ( i = 0; i < *((_DWORD *)this + 3522); ++i )
    {
      if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump((DISPLAYSTATECHECKER *)((char *)this + 3512 * i + 40)) < 0 )
        v2 |= 0x1000u;
    }
  }
  DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(this, a2, v2);
}
