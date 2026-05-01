/*
 * XREFs of ?IsServiceAvailable@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z @ 0x1801EE8B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___ @ 0x1801E84A0 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_de07712c181cbebffd3210a2d706196b___.c)
 */

__int64 __fastcall CImmersiveApp::IsServiceAvailable(__int64 a1, int a2, __int128 *a3, _DWORD *a4)
{
  __int128 v8; // xmm0
  _DWORD *v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+2Ch] [rbp-3Ch]

  *a4 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *a3;
  v10 = a4;
  v11 = a2;
  v12 = v8;
  CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_de07712c181cbebffd3210a2d706196b___(
    a1 + 208,
    (__int64)&v10);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
