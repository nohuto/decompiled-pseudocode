/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C03458A0
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01AB2B4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C034B544 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C0364970 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0364E20 (NtDxgkVailDisconnect.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006D690 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(struct _KTHREAD **this)
{
  DxgkCompositionObject *v2; // rcx

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1391LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 1391LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[74];
  if ( !v2 )
    return 0LL;
  DxgkCompositionObject::AddRef(v2);
  return this[74];
}
