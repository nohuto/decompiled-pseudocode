/*
 * XREFs of CmPostCallbackNotificationEx @ 0x1406BD240
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotification @ 0x1406BD1E4 (CmPostCallbackNotification.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     NtSetValueKey @ 0x1407A9030 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1407AC040 (CmpSecurityMethod.c)
 *     NtRenameKey @ 0x140A0B350 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x1402630C0 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD v11[2]; // [rsp+48h] [rbp-9h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  __int128 v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+37h]

  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() || (_QWORD *)*a6 == a6 )
    return a3;
  v15 = 0LL;
  v11[0] = v12;
  v11[1] = a5;
  v12[0] = a2;
  v12[1] = a3;
  v13 = a3;
  v12[2] = a4;
  v14 = 0LL;
  CmpCallCallBacksEx(a1, (unsigned int)v12, (unsigned __int64)v11 & -(__int64)(a5 != 0), 0, a1, a2, (__int64)a6);
  return (unsigned int)v13;
}
