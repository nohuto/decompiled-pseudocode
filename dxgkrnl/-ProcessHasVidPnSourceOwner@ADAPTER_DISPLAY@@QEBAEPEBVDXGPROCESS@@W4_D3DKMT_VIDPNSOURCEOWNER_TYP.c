/*
 * XREFs of ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1C02B99C8
 * Callers:
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C033689C (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 8154LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8154LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *(_DWORD *)(a1 + 96);
  v5 = 0;
  if ( !v4 )
    return 0;
  v6 = *(_QWORD *)(a1 + 128);
  while ( 1 )
  {
    v7 = 4000LL * v5;
    v8 = *(_QWORD *)(v7 + v6 + 728);
    if ( v8 )
    {
      if ( a2 == *(_QWORD *)(v8 + 40) && !*(_DWORD *)(v8 + 464) && *(_DWORD *)(v7 + v6 + 736) == 3 )
        break;
    }
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
