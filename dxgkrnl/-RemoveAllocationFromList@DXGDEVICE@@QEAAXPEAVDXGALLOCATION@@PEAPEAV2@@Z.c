/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C02E7A88
 * Callers:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02E7954 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(
        DXGDEVICE *this,
        struct DXGALLOCATION *a2,
        struct DXGALLOCATION **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGALLOCATION *v7; // rax

  if ( *((_DWORD *)this + 152) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8262LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_ExecutionState != DXGDEVICEEXECUTION_ACTIVE || GetRenderCore()->IsCoreResourceSharedOwner()",
      8262LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_QWORD *)a2 + 8);
  if ( v5 )
    *(_QWORD *)(v5 + 56) = *((_QWORD *)a2 + 7);
  v6 = *((_QWORD *)a2 + 7);
  v7 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
  if ( v6 )
    *(_QWORD *)(v6 + 64) = v7;
  else
    *a3 = v7;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
}
