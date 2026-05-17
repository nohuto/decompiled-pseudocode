/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x180061618
 * Callers:
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x180042E80 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x180050300 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 *     CompatCachepLookupCdb @ 0x180074584 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *result; // rax
  int v6; // eax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = result;
    if ( !result )
      return result;
    memmove(result, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v9);
    if ( !(_DWORD)result )
    {
      v6 = *a1 + 2;
      v10 = v4;
      v11 = v6;
      v12 = 0;
      EtwEventWrite(v9, (int)&DeprecatedDll, 1, (__int64)&v10);
      result = (wchar_t *)EtwNotificationUnregister(v9, 0LL, v7, v8);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v4);
  }
  return result;
}
