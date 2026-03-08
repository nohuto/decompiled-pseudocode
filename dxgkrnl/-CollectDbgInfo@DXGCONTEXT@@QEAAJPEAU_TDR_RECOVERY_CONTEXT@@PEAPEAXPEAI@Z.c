/*
 * XREFs of ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C02DF8D0
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02C9660 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCONTEXT::CollectDbgInfo(
        DXGCONTEXT *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  char *v8; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1671LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1671LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *a4 < 0x40 )
    return 2147483653LL;
  v8 = (char *)*a3;
  *(_DWORD *)v8 = 1953394499;
  *((_DWORD *)v8 + 1) = *((_DWORD *)this + 36);
  *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 200);
  *(_OWORD *)(v8 + 24) = *(_OWORD *)((char *)this + 216);
  *((_DWORD *)v8 + 10) = *((_DWORD *)this + 98);
  *((_DWORD *)v8 + 11) = *((_DWORD *)this + 99);
  *((_DWORD *)v8 + 12) = *((_DWORD *)this + 101);
  *((_DWORD *)v8 + 13) = *((_DWORD *)this + 106);
  *((_DWORD *)v8 + 14) = *((_DWORD *)this + 107);
  *((_DWORD *)v8 + 15) = *((_DWORD *)this + 108);
  *a3 = (char *)*a3 + 64;
  *a4 -= 64;
  return 0LL;
}
