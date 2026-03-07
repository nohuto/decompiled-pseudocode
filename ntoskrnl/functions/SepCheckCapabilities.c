__int64 __fastcall SepCheckCapabilities(PACCESS_TOKEN Token, unsigned int a2, PSID *a3, __int64 a4, char *a5)
{
  char *v5; // r13
  unsigned int v6; // r14d
  unsigned int v8; // r12d
  NTSTATUS v10; // edi
  PSID *v11; // rcx
  char v12; // bl
  char IsLpacCapabilitySid; // al
  PSID v14; // rax
  BOOLEAN v15; // al
  PSID v16; // rbx
  PULONG v17; // rbx
  PULONG v18; // rax
  PVOID v20; // [rsp+20h] [rbp-30h] BYREF
  PSID *v21; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID v23; // [rsp+38h] [rbp-18h] BYREF
  PSID i; // [rsp+40h] [rbp-10h]
  PVOID TokenInformation; // [rsp+A8h] [rbp+58h] BYREF

  v5 = a5;
  v6 = 0;
  P = 0LL;
  v8 = a2;
  v23 = 0LL;
  LODWORD(TokenInformation) = 0;
  LODWORD(v20) = 0;
  *a5 = 0;
  v10 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( v10 >= 0 )
  {
    if ( !(_DWORD)TokenInformation )
    {
      *v5 = 1;
      goto LABEL_28;
    }
    v10 = SeQueryInformationToken(Token, TokenCapabilities, &P);
    if ( v10 >= 0 )
    {
      v10 = SeQueryInformationToken(Token, TokenIsLessPrivilegedAppContainer, &v20);
      if ( v10 >= 0 )
      {
        v11 = (PSID *)P;
        v12 = 1;
        v21 = (PSID *)P;
        LODWORD(a5) = 0;
        if ( !v8 )
          goto LABEL_27;
        while ( 1 )
        {
          v12 = 0;
          if ( (_DWORD)v20 || (IsLpacCapabilitySid = SepIsLpacCapabilitySid(*a3), v11 = v21, !IsLpacCapabilitySid) )
          {
            HIDWORD(v20) = *(_DWORD *)P;
            if ( HIDWORD(v20) )
            {
              v14 = *a3;
              for ( i = *a3; ; v14 = i )
              {
                v15 = RtlEqualSid(v11[2 * v6 + 1], v14);
                v11 = v21;
                if ( v15 && LODWORD(v21[2 * v6 + 2]) == *((_DWORD *)a3 + 2) )
                {
                  v8 = a2;
                  v6 = 0;
                  goto LABEL_24;
                }
                if ( ++v6 >= HIDWORD(v20) )
                  break;
              }
              v8 = a2;
            }
            if ( *((_BYTE *)*a3 + 1) != 9 || *RtlSubAuthoritySid(*a3, 0) != 3 )
              goto LABEL_27;
            v6 = 0;
            if ( !v23 )
            {
              v10 = SeQueryInformationToken(Token, TokenAppContainerSid, &v23);
              if ( v10 < 0 )
                break;
            }
            v16 = *(PSID *)v23;
            if ( *RtlSubAuthorityCountSid(*(PSID *)v23) < 8u
              || (v17 = RtlSubAuthoritySid(v16, 1u),
                  v18 = RtlSubAuthoritySid(*a3, 1u),
                  RtlCompareMemory(v18, v17, 0x1CuLL) != 28) )
            {
              v12 = 0;
LABEL_27:
              *v5 = v12;
              break;
            }
            v11 = v21;
          }
LABEL_24:
          a3 += 2;
          v12 = 1;
          LODWORD(a5) = (_DWORD)a5 + 1;
          if ( (unsigned int)a5 >= v8 )
            goto LABEL_27;
        }
      }
    }
  }
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)v10;
}
