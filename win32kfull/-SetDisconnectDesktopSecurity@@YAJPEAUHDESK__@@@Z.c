/*
 * XREFs of ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C00C1764
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00C1594 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SetDisconnectDesktopSecurity(HDESK Handle)
{
  void *v2; // rsi
  void *v3; // rdi
  ULONG v4; // eax
  void *v5; // rax
  void *v6; // rbp
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  void *SecurityDescriptor; // rax
  unsigned int v11; // [rsp+30h] [rbp-38h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-34h] BYREF

  v11 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v3 = 0LL;
  v4 = RtlLengthRequiredSid(1u);
  v5 = (void *)Win32AllocPoolWithQuotaZInit(v4, 1702064981LL);
  v6 = v5;
  if ( v5 )
  {
    *RtlSubAuthoritySid(v5, 0) = 18;
    v7 = RtlInitializeSid(v6, &IdentifierAuthority, 1u);
    if ( v7 >= 0 )
    {
      v8 = AllocAce(0LL, 0LL, 0LL, 983551LL, v6, &v11);
      v2 = (void *)v8;
      if ( v8 && (SecurityDescriptor = (void *)CreateSecurityDescriptor(v8, v11, 0LL), (v3 = SecurityDescriptor) != 0LL) )
        v7 = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
      else
        v7 = -1073741801;
    }
    Win32FreePool(v6);
    if ( v2 )
      Win32FreePool(v2);
    if ( v3 )
      Win32FreePool(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
