/*
 * XREFs of ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000B190
 * Callers:
 *     ?GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001580 (-GdiNodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01B1C68 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01C4FB0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02CC178 (DxgkCreateLightweightDeviceAndContext.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_RENDER::NodeSupportsGpuVa(ADAPTER_RENDER *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  char v4; // cl
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r8

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  v5 = *(_QWORD *)(v3 + 2808) + 344LL * a2;
  v6 = *(_QWORD *)(v5 + 32);
  if ( !v6 )
    return 0;
  v7 = 74LL * a3;
  if ( *(_BYTE *)(v7 + v6 + 72) || *(_BYTE *)(v7 + v6 + 73) || (*(_DWORD *)(v5 + 16) & 0x40) != 0 )
    return 1;
  return v4;
}
