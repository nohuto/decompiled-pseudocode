/*
 * XREFs of ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0330418
 * Callers:
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E407C (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001560 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C02BB7E8 (-AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z.c)
 *     ?DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z @ 0x1C02C0808 (-DdiCreateOverlay@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGOVERLAY::Initialize(DXGOVERLAY *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // r13
  __int64 v9; // r13
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // r13
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // r8
  D3DKMT_HANDLE v19; // eax
  struct _EX_RUNDOWN_REF *v20[2]; // [rsp+50h] [rbp-49h] BYREF
  _DXGKARG_CREATEOVERLAY v21; // [rsp+60h] [rbp-39h] BYREF

  v5 = 0;
  if ( DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 696) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 760) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 752) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v4 + 744) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v6 = ADAPTER_RENDER::AcquireOverlayId(*(ADAPTER_RENDER **)(v4 + 2928), this);
    v7 = *((_QWORD *)this + 2);
    *((_DWORD *)this + 8) = v6;
    if ( v6 == -1 )
    {
      WdLogSingleEntry1(6LL, *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL));
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of overlay hardware on adapter 0x%I64x",
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225626LL;
    }
    v9 = *(_QWORD *)(v7 + 40);
    hAllocation = a2->OverlayInfo.hAllocation;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 248));
    v11 = (hAllocation >> 6) & 0xFFFFFF;
    if ( v11 < *(_DWORD *)(v9 + 296) )
    {
      v12 = *(_QWORD *)(v9 + 280);
      if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 5 )
          {
            v14 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v11);
LABEL_15:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v20, v14);
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 264));
            ExReleasePushLockSharedEx(v9 + 248, 0LL);
            KeLeaveCriticalRegion();
            if ( v20[0] )
            {
              v15 = *((_QWORD *)this + 2);
              if ( *(_QWORD *)(*(_QWORD *)(v20[0][1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) )
              {
                v16 = -1073741811;
                WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v20[0], -1073741811LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                  *((_QWORD *)this + 2),
                  (__int64)v20[0],
                  -1073741811LL,
                  0LL,
                  0LL);
                goto LABEL_26;
              }
              if ( (*(_DWORD *)(v20[0][6].Count + 4) & 8) != 0 && (v20[0][9].Count & 0x800) != 0 )
              {
                memset(&v21, 0, sizeof(v21));
                v21.VidPnSourceId = a2->VidPnSourceId;
                v21.OverlayInfo.hAllocation = *(HANDLE *)(v20[0][6].Count + 16);
                v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 2928LL);
                (*(void (__fastcall **)(_QWORD, _QWORD, UINT *, LARGE_INTEGER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v17 + 760) + 8LL)
                                                                                        + 208LL))(
                  *(_QWORD *)(v17 + 768),
                  *(_QWORD *)(v20[0][6].Count + 8),
                  &v21.OverlayInfo.SegmentId,
                  &v21.OverlayInfo.PhysicalAddress,
                  0LL);
                v21.OverlayInfo.DstRect = (RECT)a2->OverlayInfo.DstRect;
                v21.OverlayInfo.SrcRect = (RECT)a2->OverlayInfo.SrcRect;
                v21.OverlayInfo.PrivateDriverDataSize = a2->OverlayInfo.PrivateDriverDataSize;
                v21.OverlayInfo.pPrivateDriverData = a2->OverlayInfo.pPrivateDriverData;
                v16 = ADAPTER_RENDER::DdiCreateOverlay(
                        *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2928LL),
                        &v21,
                        v18);
                if ( v16 >= 0 )
                {
                  *((_QWORD *)this + 5) = v21.hOverlay;
                  *((struct _EX_RUNDOWN_REF **)this + 6) = v20[0];
                  v19 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 6u);
                  *((_DWORD *)this + 6) = v19;
                  if ( v19 )
                  {
                    a2->hOverlay = v19;
                    *((_DWORD *)this + 7) = 1;
LABEL_27:
                    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v20);
                    return v5;
                  }
                  v16 = -1073741801;
                  WdLogSingleEntry2(3LL, this, -1073741801LL);
                }
LABEL_26:
                v5 = v16;
                goto LABEL_27;
              }
            }
            v16 = -1073741811;
            WdLogSingleEntry3(3LL, this, a2->OverlayInfo.hAllocation, -1073741811LL);
            goto LABEL_26;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
    goto LABEL_15;
  }
  WdLogSingleEntry3(2LL, this, v4, -1073741637LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%I64x: Driver 0x%I64x didn't supply Overlay functions, returning 0x%I64x",
    (__int64)this,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
    -1073741637LL,
    0LL,
    0LL);
  return 3221225659LL;
}
