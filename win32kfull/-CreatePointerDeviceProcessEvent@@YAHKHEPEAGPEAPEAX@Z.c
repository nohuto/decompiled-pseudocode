/*
 * XREFs of ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C0079794
 * Callers:
 *     CreatePointerDeviceProcessEvents @ 0x1C0079724 (CreatePointerDeviceProcessEvents.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0079B00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CreatePointerDeviceProcessEvent(
        ACCESS_MASK AccessMask,
        int a2,
        BOOLEAN a3,
        unsigned __int16 *a4,
        void **a5)
{
  BOOL v6; // edi
  struct _ACL *v7; // rbx
  ULONG v8; // eax
  void *v9; // rax
  void *v10; // r15
  ULONG v11; // eax
  void *v12; // rax
  void *v13; // rsi
  ULONG v14; // ebx
  ULONG v15; // r12d
  struct _ACL *v16; // rax
  struct _ACL *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  BOOLEAN InitialState[4]; // [rsp+20h] [rbp-E0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp-78h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v28; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v7 = 0LL;
  *(_DWORD *)v28.Value = 0;
  *(_WORD *)&v28.Value[4] = 256;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  v8 = RtlLengthRequiredSid(1u);
  v9 = (void *)Win32AllocPoolWithQuotaZInit(v8, 1702064981LL);
  v10 = v9;
  if ( v9 )
  {
    *RtlSubAuthoritySid(v9, 0) = 18;
    if ( RtlInitializeSid(v10, &IdentifierAuthority, 1u) >= 0 )
    {
      v11 = RtlLengthRequiredSid(1u);
      v12 = (void *)Win32AllocPoolWithQuotaZInit(v11, 1702064981LL);
      v13 = v12;
      if ( v12 )
      {
        *RtlSubAuthoritySid(v12, 0) = 0;
        if ( RtlInitializeSid(v13, &v28, 1u) >= 0 )
        {
          v14 = RtlLengthSid(v10);
          v15 = v14 + RtlLengthSid(v13) + 40;
          v16 = (struct _ACL *)Win32AllocPoolZInit(v15 + 40LL, 2020635477LL);
          v7 = v16;
          if ( v16 )
          {
            v17 = v16 + 5;
            if ( RtlCreateAcl(v16 + 5, v15, 2u) >= 0
              && RtlAddAccessAllowedAce(v17, 2u, AccessMask, v13) >= 0
              && RtlAddAccessAllowedAce(v17, 2u, 0x1F0003u, v10) >= 0
              && RtlCreateSecurityDescriptor(v7, 1u) >= 0
              && RtlSetDaclSecurityDescriptor(v7, 1u, v17, 0) >= 0 )
            {
              if ( *(_DWORD *)SGDGetUserSessionState(v18) )
              {
                *(_DWORD *)InitialState = *(_DWORD *)SGDGetUserSessionState(v19);
                if ( StringCchPrintfW(
                       SourceString,
                       0x100uLL,
                       L"%ws\\%ld\\BaseNamedObjects\\%ws",
                       L"\\Sessions",
                       *(_DWORD *)InitialState,
                       a4) >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 192;
                  ObjectAttributes.SecurityDescriptor = v7;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  v6 = ZwCreateEvent(a5, 0x1F0003u, &ObjectAttributes, (EVENT_TYPE)(a2 == 0), a3) >= 0;
                }
              }
            }
          }
        }
        Win32FreePool(v13);
      }
    }
    Win32FreePool(v10);
    if ( v7 )
      Win32FreePool(v7);
  }
  return v6;
}
