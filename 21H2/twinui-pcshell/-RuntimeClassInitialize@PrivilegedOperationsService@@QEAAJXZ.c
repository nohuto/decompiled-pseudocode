/*
 * XREFs of ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x18029B9A4
 * Callers:
 *     ??$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802988F4 (--$MakeAndInitialize@VPrivilegedOperationsService@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180072488 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAVWeakRef@01@@Z @ 0x180298050 (--$AsWeak@VPrivilegedOperationsService@@@WRL@Microsoft@@YAJPEAVPrivilegedOperationsService@@PEAV.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x180299F00 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@.c)
 */

__int64 __fastcall PrivilegedOperationsService::RuntimeClassInitialize(PrivilegedOperationsService *this)
{
  __int64 *v2; // rax
  unsigned int v3; // eax
  __int64 *v4; // rcx
  unsigned int v5; // ebx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 **v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  PrivilegedOperationsService::s_this = this;
  v8 = &v7;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v8);
  Microsoft::WRL::AsWeak<PrivilegedOperationsService>((__int64)this, v2);
  v8 = (__int64 **)v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64 *))(*v7 + 8))(v7);
  v3 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
         (__int64 *)this + 21,
         (__int64 *)&v8);
  v4 = v7;
  v5 = v3;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  }
  return v5;
}
