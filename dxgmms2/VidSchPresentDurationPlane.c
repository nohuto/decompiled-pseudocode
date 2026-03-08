/*
 * XREFs of VidSchPresentDurationPlane @ 0x1C00402C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039A94 (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchPresentDurationPlane(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[4]; // [rsp+50h] [rbp-38h] BYREF
  __int16 v16; // [rsp+70h] [rbp-18h]

  v4 = a2;
  if ( !a4 || !a1 )
  {
    WdLogSingleEntry2(1LL, a4, a1);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, unsigned int *, __int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid params. pPlaneIndex:0x%I64x, pVidSchGlobal:0x%I64x",
      a4,
      a1,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v8 = *(_DWORD *)(a1 + 40);
  if ( a2 >= v8 )
  {
    WdLogSingleEntry2(1LL, a2, v8);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid VidPnSourceId:0x%I64x specified. MaxSources:0x%I64x",
      v4,
      *(unsigned int *)(a1 + 40),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 152);
    if ( *a4 >= v9 )
    {
      WdLogSingleEntry2(1LL, *a4, v9);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid PlaneIndex:0x%I64x specified. MaxOverlayPlanes:0x%I64x.",
        *a4,
        *(unsigned int *)(a1 + 152),
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  _mm_lfence();
  v16 = 0;
  v15[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v15);
  v10 = *(_QWORD *)(a1 + 8 * v4 + 3200);
  v11 = *(_DWORD *)(v10 + 3036);
  if ( a3 )
  {
    WdLogSingleEntry4(4LL, *a4, v4, v11, *(unsigned int *)(v10 + 3032));
    if ( (byte_1C00769C4 & 1) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(
        v12,
        &EventSetPresentDurationPlane,
        v13,
        v4,
        *(_DWORD *)(v10 + 3036),
        *(_DWORD *)(v10 + 3032),
        *a4);
    *(_DWORD *)(v10 + 3036) = *a4;
  }
  else
  {
    *a4 = v11;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v15);
  return 0LL;
}
