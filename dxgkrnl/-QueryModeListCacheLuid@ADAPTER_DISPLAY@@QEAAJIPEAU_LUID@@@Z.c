/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0046024
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C02CF680 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  DXGADAPTER *v12; // rcx

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6341LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          2,
          -1,
          L"IsCoreResourceSharedOwner()",
          6341LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6342LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0LL,
          2,
          -1,
          L"VidPnSourceId < m_NumVidPnSources",
          6342LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_BYTE *)this + 292) )
    return 3221225473LL;
  v12 = this[16];
  if ( !*((_BYTE *)v12 + 4000 * v4 + 1116) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v12 + 4000 * v4 + 1124);
  return 0LL;
}
