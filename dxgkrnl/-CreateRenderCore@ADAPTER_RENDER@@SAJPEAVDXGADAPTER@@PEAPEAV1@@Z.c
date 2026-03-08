/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EBE14
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C003E788 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01E9DB4 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BBA68 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        struct DXGADAPTER *a1,
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall *v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rax
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx
  __int64 (__fastcall *v9)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // r8
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  ADAPTER_RENDER *v15; // rax
  ADAPTER_RENDER *v16; // rax
  ADAPTER_RENDER *v17; // rdi
  int v18; // esi
  __int64 result; // rax
  __int64 v20; // rbx
  const wchar_t *v21; // r9
  __int64 v22; // rbx
  const wchar_t *v23; // r9
  int v24; // edx
  unsigned int v25; // eax

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 480LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 480LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 481LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppRenderCore != NULL", 481LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)a1 + 209) )
    goto LABEL_60;
  if ( !*((_BYTE *)a1 + 440)
    || !*((_QWORD *)a1 + 57)
    || !*((_QWORD *)a1 + 59)
    || !*((_QWORD *)a1 + 60)
    || !*((_QWORD *)a1 + 89)
    || !*((_QWORD *)a1 + 90)
    || !*((_QWORD *)a1 + 61)
    || !*((_QWORD *)a1 + 65)
    || !*((_QWORD *)a1 + 66)
    || !*((_QWORD *)a1 + 67)
    || !*((_QWORD *)a1 + 71)
    || !*((_QWORD *)a1 + 72)
    || !*((_QWORD *)a1 + 75) && *((int *)a1 + 705) < 2000
    || !*((_QWORD *)a1 + 86) && (*((_DWORD *)a1 + 698) & 8) == 0
    || !*((_QWORD *)a1 + 88)
    || !*((_QWORD *)a1 + 74)
    || !*((_QWORD *)a1 + 92) )
  {
    if ( *((int *)a1 + 705) >= 1200 )
    {
      if ( !*((_QWORD *)a1 + 57)
        && !*((_QWORD *)a1 + 59)
        && !*((_QWORD *)a1 + 60)
        && !*((_QWORD *)a1 + 89)
        && !*((_QWORD *)a1 + 90)
        && !*((_QWORD *)a1 + 61)
        && !*((_QWORD *)a1 + 65)
        && !*((_QWORD *)a1 + 66)
        && !*((_QWORD *)a1 + 67)
        && !*((_QWORD *)a1 + 71)
        && !*((_QWORD *)a1 + 72)
        && !*((_QWORD *)a1 + 75)
        && !*((_QWORD *)a1 + 88)
        && !*((_QWORD *)a1 + 92)
        && !*((_QWORD *)a1 + 58)
        && !*((_QWORD *)a1 + 64)
        && !*((_QWORD *)a1 + 91)
        && !*((_QWORD *)a1 + 99)
        && !*((_QWORD *)a1 + 62)
        && !*((_QWORD *)a1 + 63)
        && !*((_QWORD *)a1 + 85)
        && !*((_QWORD *)a1 + 87)
        && !*((_QWORD *)a1 + 93)
        && !*((_QWORD *)a1 + 94)
        && !*((_QWORD *)a1 + 95) )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 545LL;
        result = 0LL;
        *a2 = 0LL;
        return result;
      }
      v20 = 539LL;
      WdLogSingleEntry1(2LL, 539LL);
      v21 = L"Not all the render relevant DDIs are NULL.";
      goto LABEL_142;
    }
    v20 = 557LL;
    WdLogSingleEntry1(2LL, 557LL);
    goto LABEL_119;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 509LL;
  v6 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))*((_QWORD *)a1 + 87);
  if ( !v6 )
  {
    *((_QWORD *)a1 + 87) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    v6 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  }
  v7 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))*((_QWORD *)a1 + 93);
  if ( !v7 )
  {
    *((_QWORD *)a1 + 93) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    v7 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  }
  v8 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))*((_QWORD *)a1 + 94);
  if ( !v8 )
  {
    *((_QWORD *)a1 + 94) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    v8 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  }
  v9 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))*((_QWORD *)a1 + 95);
  if ( !v9 )
  {
    *((_QWORD *)a1 + 95) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
    v9 = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  }
  if ( !*((_QWORD *)a1 + 85) )
    *((_QWORD *)a1 + 85) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)a1 + 62) )
    *((_QWORD *)a1 + 62) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)a1 + 63) )
    *((_QWORD *)a1 + 63) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( v6 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
LABEL_65:
    if ( v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && v8 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      && v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      goto LABEL_41;
    }
LABEL_103:
    v20 = 610LL;
    WdLogSingleEntry1(2LL, 610LL);
    v21 = L"Create, Update, Flip and DestroyOverlay should all be supplied if any one of them is";
LABEL_142:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, v20, 0LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( v7 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v8 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v9 != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    if ( v6 == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
      goto LABEL_103;
    goto LABEL_65;
  }
LABEL_41:
  v10 = *((_DWORD *)a1 + 638);
  if ( ((v10 - 4096) & 0xFFFFFCFF) == 0
    && v10 != 4352
    && (!*((_QWORD *)a1 + 58) || !*((_QWORD *)a1 + 64) || !*((_QWORD *)a1 + 91)) )
  {
    v20 = 630LL;
    WdLogSingleEntry1(2LL, 630LL);
    v21 = L"Miniport did not provide required DDIs for WDDM v1.x";
    goto LABEL_142;
  }
  v11 = *((_DWORD *)a1 + 567);
  if ( (v11 & 4) != 0 )
  {
    if ( !*((_QWORD *)a1 + 99) )
    {
      v22 = 639LL;
      WdLogSingleEntry1(2LL, 639LL);
      v23 = L"Miniport did not provide RenderKm function but reported PresentationCaps.SupportKernelModeCommandBuffer cap";
LABEL_111:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *((int *)a1 + 705) < 1105 )
    {
      WdLogSingleEntry1(3LL, a1);
      *((_DWORD *)a1 + 567) &= ~4u;
      v11 = *((_DWORD *)a1 + 567);
      *((_QWORD *)a1 + 99) = 0LL;
    }
    if ( (v11 & 0x20000000) != 0 )
    {
      v22 = 651LL;
      WdLogSingleEntry1(2LL, 651LL);
      v23 = L"Miniport set the NoCacheCoherentApertureMemory cap on non-ARM architecture";
      goto LABEL_111;
    }
  }
  if ( *((_DWORD *)a1 + 565) > 4u )
    *((_DWORD *)a1 + 565) = 4;
  if ( *((_DWORD *)a1 + 564)
    && (*((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))a1 + 62) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
     || *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))a1 + 63) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    v20 = 666LL;
    WdLogSingleEntry1(2LL, 666LL);
LABEL_119:
    v21 = L"Miniport did not provide required DDIs";
    goto LABEL_142;
  }
  v12 = *((_DWORD *)a1 + 570);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 4) == 0 && (v12 & 0x10) == 0 )
    {
      *((_DWORD *)a1 + 573) = 1;
      *((_DWORD *)a1 + 704) = 1;
      goto LABEL_52;
    }
    goto LABEL_112;
  }
  if ( *((int *)a1 + 638) >= 0x2000 )
    goto LABEL_52;
  v24 = *((_DWORD *)a1 + 573);
  if ( !v24 )
  {
LABEL_112:
    WdLogSingleEntry1(3LL, a1);
    return 3221225485LL;
  }
  v25 = v24 * *((_DWORD *)a1 + 72);
  if ( *((int *)a1 + 705) <= 2400 && v25 > 0x40 )
  {
    WdLogSingleEntry4(3LL, a1, 64LL, *((unsigned int *)a1 + 72), *((unsigned int *)a1 + 573));
    return 3221225485LL;
  }
  *((_DWORD *)a1 + 704) = v25;
LABEL_52:
  if ( *((_BYTE *)a1 + 2832)
    && *((int *)a1 + 638) >= 4608
    && (!*((_DWORD *)a1 + 686)
     || !*((_DWORD *)a1 + 687)
     || !*((_BYTE *)a1 + 2754)
     || (*((_DWORD *)a1 + 698) & 8) == 0
     && ((*((_DWORD *)a1 + 569) & 2) == 0 || (*((_DWORD *)a1 + 109) & 0x10) == 0 && (*((_DWORD *)a1 + 567) & 4) == 0)) )
  {
    v22 = 731LL;
    WdLogSingleEntry1(2LL, 731LL);
    v23 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 render features.";
    goto LABEL_111;
  }
  v13 = *((_DWORD *)a1 + 638);
  if ( v13 < 0x2000 )
  {
    if ( v13 < 4864 )
      goto LABEL_60;
  }
  else
  {
    v14 = *((unsigned int *)a1 + 569);
    if ( (v14 & 2) == 0 && (*((_DWORD *)a1 + 698) & 8) == 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver reports WDDM version 2.0 or higher but does not support FlipOnVSyncMmIo cap. The caps value is 0x%x",
        *((unsigned int *)a1 + 569),
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( !*((_QWORD *)a1 + 109) )
  {
    v22 = 753LL;
    WdLogSingleEntry1(2LL, 753LL);
    v23 = L"Driver reports WDDM 1.3 driver, but does not support node metadata.";
    goto LABEL_111;
  }
  if ( v13 >= 9216 && (*((_DWORD *)a1 + 571) & 0x800) != 0 && (!*((_QWORD *)a1 + 163) || !*((_QWORD *)a1 + 164)) )
  {
    v22 = 768LL;
    WdLogSingleEntry1(2LL, 768LL);
    v23 = L"Driver reports WDDM 2.4 driver with IoMmuSecureMode support, but does not support Begin/EndExclusiveAccess DDIs.";
    goto LABEL_111;
  }
LABEL_60:
  v15 = (ADAPTER_RENDER *)operator new[](0x780uLL, 0x4B677844u, 64LL);
  if ( v15 && (v16 = ADAPTER_RENDER::ADAPTER_RENDER(v15, a1), (v17 = v16) != 0LL) )
  {
    v18 = ADAPTER_RENDER::Initialize(v16);
    if ( v18 < 0 )
    {
      ADAPTER_RENDER::Destroy(v17);
      ADAPTER_RENDER::`scalar deleting destructor'(v17);
    }
    else
    {
      WdLogSingleEntry2(4LL, v17, a1);
      *a2 = v17;
    }
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating ADAPTER_RENDER class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
