/*
 * XREFs of ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C03309AC
 * Callers:
 *     DxgkUpdateOverlay @ 0x1C0332840 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z @ 0x1C02C83EC (-DdiUpdateOverlay@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::UpdateOverlay(struct _EX_RUNDOWN_REF *this, struct _D3DKMT_UPDATEOVERLAY *a2)
{
  __int64 (__fastcall **v4)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  struct _EX_RUNDOWN_REF *Count; // rdx
  ULONG_PTR v7; // r10
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  __int64 v10; // r8
  UINT PrivateDriverDataSize; // eax
  void *v12; // rcx
  __int64 hAllocation; // r8
  size_t v14; // r8
  void *pPrivateDriverData; // rdx
  ULONG64 v16; // r9
  struct _EX_RUNDOWN_REF *v17[2]; // [rsp+50h] [rbp-78h] BYREF
  _DXGKARG_UPDATEOVERLAY v18; // [rsp+60h] [rbp-68h] BYREF

  v17[1] = this;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 274LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      274LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL))
    || v4[87] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[95] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[94] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v4[93] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    WdLogSingleEntry1(1LL, 275LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 275LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( LODWORD(this[4].Count) == -1 )
    return 0LL;
  memset(&v18, 0, sizeof(v18));
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(this[2].Count + 40),
    (DXGALLOCATIONREFERENCE *)v17,
    a2->OverlayInfo.hAllocation);
  if ( !v17[0] )
  {
    Count = (struct _EX_RUNDOWN_REF *)this[2].Count;
    goto LABEL_30;
  }
  v7 = this[2].Count;
  if ( *(_QWORD *)(*(_QWORD *)(v17[0][1].Count + 16) + 16LL) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) )
  {
    v9 = v17[0][6].Count;
    if ( (*(_DWORD *)(v9 + 4) & 8) != 0 && (v17[0][9].Count & 0x800) != 0 )
    {
      v18.OverlayInfo.hAllocation = *(HANDLE *)(v9 + 16);
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 2928LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 760) + 8LL)
                                                                              + 208LL))(
        *(_QWORD *)(v10 + 768),
        *(_QWORD *)(v17[0][6].Count + 8),
        &v18.OverlayInfo.SegmentId,
        &v18.OverlayInfo.PhysicalAddress,
        0LL);
      v18.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
      v18.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
      PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
      if ( PrivateDriverDataSize && a2->OverlayInfo.pPrivateDriverData )
      {
        v18.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
        v12 = (void *)operator new[](PrivateDriverDataSize, 0x4B677844u, 256LL);
        v18.OverlayInfo.pPrivateDriverData = v12;
        if ( !v12 )
        {
          hAllocation = v18.OverlayInfo.PrivateDriverDataSize;
          v8 = -1073741801LL;
          Count = this;
LABEL_31:
          WdLogSingleEntry3(3LL, Count, hAllocation, v8);
          goto LABEL_32;
        }
        v14 = v18.OverlayInfo.PrivateDriverDataSize;
        pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
        v16 = (ULONG64)pPrivateDriverData + v18.OverlayInfo.PrivateDriverDataSize;
        if ( v16 < (unsigned __int64)pPrivateDriverData || v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v12, pPrivateDriverData, v14);
      }
      else
      {
        a2->OverlayInfo.PrivateDriverDataSize = 0;
        a2->OverlayInfo.pPrivateDriverData = 0LL;
      }
      LODWORD(v8) = ADAPTER_RENDER::DdiUpdateOverlay(
                      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 2928LL),
                      this[5].Ptr,
                      &v18);
      if ( (int)v8 >= 0 )
        this[6].Count = (ULONG_PTR)v17[0];
      operator delete(v18.OverlayInfo.pPrivateDriverData);
      goto LABEL_32;
    }
    Count = (struct _EX_RUNDOWN_REF *)this[2].Count;
LABEL_30:
    hAllocation = a2->OverlayInfo.hAllocation;
    v8 = -1073741811LL;
    goto LABEL_31;
  }
  LODWORD(v8) = -1073741811;
  WdLogSingleEntry3(2LL, this[2].Count, v17[0], -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    this[2].Count,
    (__int64)v17[0],
    -1073741811LL,
    0LL,
    0LL);
LABEL_32:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v17);
  return (unsigned int)v8;
}
