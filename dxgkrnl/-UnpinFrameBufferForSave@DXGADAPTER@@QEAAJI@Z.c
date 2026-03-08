/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02B5BAC
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C00525D0 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0013590 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002A780 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1C006FBD0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  struct _MDL *v6; // rbp
  struct _DXGK_ADL *v7; // rdx
  char *v8; // rbx

  v3 = a2;
  if ( a2 < *((_DWORD *)this + 72) )
  {
    v5 = *((_QWORD *)this + 351) + 344LL * a2;
    v6 = *(struct _MDL **)(v5 + 72);
    if ( !v6 )
    {
      WdLogSingleEntry1(1LL, 11361LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pMdl != nullptr", 11361LL, 0LL, 0LL, 0LL, 0LL);
    }
    v7 = *(struct _DXGK_ADL **)(v5 + 80);
    if ( v7 )
      SysMmFreeAdl(*(struct SYSMM_ADAPTER_OBJECT **)(v5 + 96), v7);
    SysMmClosePhysicalObject(*(struct SYSMM_ADAPTER_OBJECT **)(v5 + 96), (__int64)v7, a3);
    SysMmUnreferencePhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)(v5 + 88));
    v8 = (char *)v6->StartVa + v6->ByteOffset;
    MmUnlockPages(v6);
    IoFreeMdl(v6);
    MmUnmapViewInSystemSpace(v8);
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    *(_QWORD *)(v5 + 80) = 0LL;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnpinFrameBufferForSave Invalid physical adapter index. Index=%u",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
