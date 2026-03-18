/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0186A04
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B7900 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0003D50 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003E88 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGDEVICE *this, const struct DXGALLOCATION *a2)
{
  unsigned int v4; // ebx
  struct DXGALLOCATION *v5; // r9

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 3736LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocation->m_pAllocation->m_Primary",
      3736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3737LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3741LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceSharedOwner()",
      3741LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v4 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3742LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3742LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGDEVICE::TestAndSetDisplayedPrimary(this, v4, a2, v5);
  DXGDEVICE::RemovePrimaryAllocation(this, v4, a2);
}
