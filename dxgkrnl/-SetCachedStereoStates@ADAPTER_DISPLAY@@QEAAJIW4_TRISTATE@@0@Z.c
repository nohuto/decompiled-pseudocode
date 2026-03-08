/*
 * XREFs of ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C02BABF8
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCachedStereoStates(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rsi
  unsigned int v8; // eax
  __int64 v10; // rcx

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 6494LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 6494LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *(_DWORD *)(a1 + 96);
  if ( (unsigned int)v5 < v8 )
  {
    v10 = 4000 * v5;
    *(_DWORD *)(v10 + *(_QWORD *)(a1 + 128) + 1132) = a3;
    *(_DWORD *)(v10 + *(_QWORD *)(a1 + 128) + 1136) = a4;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid VidPN source ID 0x%I64x (only %I64d are supported)",
      v5,
      *(unsigned int *)(a1 + 96),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
