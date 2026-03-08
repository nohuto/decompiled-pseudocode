/*
 * XREFs of XilEndpoint_DestroySecureObject @ 0x1C0039068
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C003A520 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_DestroySecureObject(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v1 = *a1;
  if ( *a1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1[4] + 112LL);
    v5 = 0LL;
    v9 = 0;
    v7 = v1;
    v6 = 0LL;
    v8 = 34;
    result = SecureChannel_SendRequestSynchronously(v3, &v5, 40LL, 0LL, 0);
    *a1 = 0LL;
  }
  return result;
}
