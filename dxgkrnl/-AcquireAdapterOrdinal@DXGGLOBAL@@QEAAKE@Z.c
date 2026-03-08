/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1C01F0460
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C01A5238 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(struct _RTL_BITMAP *this, char a2)
{
  unsigned int v4; // edi
  ULONG v5; // eax
  ULONG ClearBitsAndSet; // ebp
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)&this[49], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = -1;
  if ( a2 && this[53].SizeOfBitMap )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(this + 53, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v4 = DXGGLOBAL::GetMaximumGlobalAdapterCount((DXGGLOBAL *)this) + ClearBitsAndSet;
      goto LABEL_4;
    }
    DxgkLogCodePointPacket(0x74u, 2u, this[53].SizeOfBitMap, 0, 0LL);
  }
  v5 = RtlFindClearBitsAndSet(this + 52, 1u, 0);
  if ( v5 == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 1u, this[52].SizeOfBitMap, 0, 0LL);
    WdLogSingleEntry1(3LL, 1024LL);
  }
  else
  {
    v4 = v5;
  }
LABEL_4:
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v4;
}
