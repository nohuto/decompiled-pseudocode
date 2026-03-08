/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x1407445E8
 * Callers:
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140744670 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     RtlpIsAppContainer @ 0x1409BA41C (RtlpIsAppContainer.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE ExistingTokenHandle, const UNICODE_STRING *a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  char v8; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v9[3]; // [rsp+21h] [rbp-3Fh] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-3Ch] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v8 = 0;
  v9[0] = 0;
  UnicodeString = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &UnicodeString);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
  }
  else
  {
    *a3 = 0;
    if ( PolicyValueForSystemCapability >= 0 )
    {
      if ( RtlCompareUnicodeString(&UnicodeString, &stru_14000AC08, 0) )
      {
        if ( RtlCompareUnicodeString(&UnicodeString, &stru_14000ABF8, 0) )
        {
          IsAppContainer = -1073741823;
          goto LABEL_3;
        }
        RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
        *RtlSubAuthoritySid(Sid, 0) = 4;
      }
      else
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *RtlSubAuthoritySid(Sid, 0) = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 583;
      }
      IsAppContainer = RtlCheckTokenMembershipEx(ExistingTokenHandle, Sid, 2, &v8);
      if ( IsAppContainer >= 0 )
      {
        if ( v8 )
        {
          IsAppContainer = RtlpIsAppContainer(ExistingTokenHandle, v9);
          if ( IsAppContainer >= 0 )
          {
            if ( v9[0] )
              *a3 = 1;
          }
        }
      }
    }
  }
LABEL_3:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)IsAppContainer;
}
