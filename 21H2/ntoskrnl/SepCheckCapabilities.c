/*
 * XREFs of SepCheckCapabilities @ 0x140605560
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405FBE44 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x14026D6B0 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     SepIsLpacCapabilitySid @ 0x1406056D8 (SepIsLpacCapabilitySid.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCheckCapabilities(PACCESS_TOKEN Token, unsigned int a2, PSID *a3, __int64 a4, char *a5)
{
  unsigned int v5; // r14d
  char v7; // r15
  NTSTATUS InformationToken; // edi
  char v10; // bl
  PSID *v11; // rcx
  char IsLpacCapabilitySid; // al
  unsigned int v14; // r13d
  PSID v15; // rax
  BOOLEAN v16; // al
  PSID v17; // rbx
  PULONG v18; // rbx
  PULONG v19; // rax
  PVOID TokenInformation; // [rsp+20h] [rbp-30h] BYREF
  unsigned int i; // [rsp+28h] [rbp-28h]
  PSID *v22; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID v24; // [rsp+40h] [rbp-10h] BYREF
  PSID j; // [rsp+48h] [rbp-8h]
  char v27; // [rsp+A8h] [rbp+58h]

  v5 = 0;
  P = 0LL;
  v7 = 1;
  v24 = 0LL;
  v27 = 1;
  TokenInformation = 0LL;
  *a5 = 0;
  InformationToken = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( InformationToken >= 0 )
  {
    if ( (_DWORD)TokenInformation )
    {
      InformationToken = SeQueryInformationToken(Token, TokenCapabilities, &P);
      if ( InformationToken >= 0 )
      {
        InformationToken = SeQueryInformationToken(
                             Token,
                             TokenIsLessPrivilegedAppContainer,
                             (PVOID *)((char *)&TokenInformation + 4));
        if ( InformationToken >= 0 )
        {
          v10 = 1;
          v11 = (PSID *)P;
          v22 = (PSID *)P;
          for ( i = 0; i < a2; ++i )
          {
            v10 = 0;
            if ( HIDWORD(TokenInformation)
              || (IsLpacCapabilitySid = SepIsLpacCapabilitySid(*a3), v11 = v22, !IsLpacCapabilitySid) )
            {
              v14 = *(_DWORD *)P;
              if ( *(_DWORD *)P )
              {
                v15 = *a3;
                for ( j = *a3; ; v15 = j )
                {
                  v16 = RtlEqualSid(v11[2 * v5 + 1], v15);
                  v11 = v22;
                  if ( v16 && LODWORD(v22[2 * v5 + 2]) == *((_DWORD *)a3 + 2) )
                  {
                    v7 = v27;
                    v10 = 1;
                    v5 = 0;
                    goto LABEL_9;
                  }
                  if ( ++v5 >= v14 )
                    break;
                }
                v7 = v27;
              }
              if ( *((_BYTE *)*a3 + 1) != 9 || *RtlSubAuthoritySid(*a3, 0) != 3 )
                break;
              v5 = 0;
              if ( !v24 )
              {
                InformationToken = SeQueryInformationToken(Token, TokenAppContainerSid, &v24);
                if ( InformationToken < 0 )
                  goto LABEL_11;
              }
              v17 = *(PSID *)v24;
              if ( *RtlSubAuthorityCountSid(*(PSID *)v24) < 8u
                || (v18 = RtlSubAuthoritySid(v17, 1u),
                    v19 = RtlSubAuthoritySid(*a3, 1u),
                    RtlCompareMemory(v19, v18, 0x1CuLL) != 28) )
              {
                v7 = 0;
                v27 = 0;
              }
              v10 = v7;
              if ( !v7 )
                break;
              v11 = v22;
            }
            else
            {
              v10 = 1;
            }
LABEL_9:
            a3 += 2;
          }
          *a5 = v10;
        }
      }
    }
    else
    {
      *a5 = 1;
    }
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  return (unsigned int)InformationToken;
}
