/*
 * XREFs of SmpEstablishClientSecurity @ 0x14000E5E8
 * Callers:
 *     SmpApiCallback @ 0x140002A70 (SmpApiCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpEstablishClientSecurity(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v6; // edi
  NTSTATUS v7; // ebx
  void *TokenHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-70h] BYREF
  __int64 ThreadInformation; // [rsp+40h] [rbp-68h] BYREF
  _BYTE TokenInformation[8]; // [rsp+48h] [rbp-60h] BYREF
  int v13; // [rsp+50h] [rbp-58h]
  int v14; // [rsp+54h] [rbp-54h]
  int v15; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+64h] [rbp-44h]

  v3 = a2 + 24;
  v4 = *(_QWORD *)(a2 + 16);
  v6 = 2;
  if ( !v4 )
  {
    RtlAcquireSRWLockShared(a2 + 24);
    RtlReleaseSRWLockShared(v3);
    v4 = *(_QWORD *)(a2 + 16);
  }
  v7 = NtAlpcImpersonateClientOfPort(v4, a1, 0LL);
  if ( v7 >= 0 )
  {
    v7 = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 0xCu, 0, &TokenHandle);
    if ( v7 >= 0 )
    {
      v7 = NtQueryInformationToken(TokenHandle, TokenStatistics, TokenInformation, 0x38u, &ReturnLength);
      if ( v7 >= 0 && (v16 >= 2 || v15 != 2) && v13 == 999 && !v14 )
        v6 = 4;
      NtClose(TokenHandle);
    }
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  RtlAcquireSRWLockExclusive(v3);
  if ( (*(_DWORD *)a2 & 6) != 0 )
  {
    v7 = 0;
  }
  else if ( v7 >= 0 )
  {
    *(_DWORD *)a2 |= v6;
  }
  RtlReleaseSRWLockExclusive(v3);
  return (unsigned int)v7;
}
