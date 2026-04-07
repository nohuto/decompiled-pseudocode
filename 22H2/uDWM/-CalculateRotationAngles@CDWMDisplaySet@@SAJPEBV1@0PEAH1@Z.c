/*
 * XREFs of ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x180080504
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003720C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800391D0 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z @ 0x1800805F4 (-DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::CalculateRotationAngles(
        const struct CDWMDisplaySet *a1,
        const struct CDWMDisplaySet *a2,
        int *a3,
        int *a4)
{
  int ClonePrimaryDisplaysNoRef; // eax
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]
  int v20; // [rsp+68h] [rbp-8h]

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v13 = 0LL;
  ClonePrimaryDisplaysNoRef = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef((__int64)a1, (__int64)&v17);
  v8 = ClonePrimaryDisplaysNoRef;
  if ( ClonePrimaryDisplaysNoRef >= 0 )
  {
    v9 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v17 + 208LL));
    v10 = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef((__int64)a2, (__int64)&v13);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v11 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v13 + 208LL));
      *a4 = v11;
      *a3 = v11 - v9;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x297u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ClonePrimaryDisplaysNoRef, 0x291u);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v17);
  return v8;
}
