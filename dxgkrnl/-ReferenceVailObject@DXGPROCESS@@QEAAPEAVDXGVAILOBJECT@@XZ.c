/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C0340E60
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346B84 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkVailConnect @ 0x1C035FEE0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C0360390 (NtDxgkVailDisconnect.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
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
