char IsAllowedToCallMiracast(void)
{
  signed int v0; // r13d
  PSID *v1; // r14
  PSID *v2; // r12
  void *v3; // rdi
  char v4; // bl
  int v5; // eax
  HANDLE v6; // rsi
  PUCHAR v7; // rax
  ULONG v9; // eax
  void *v10; // rax
  ULONG *v11; // r15
  ULONG v12; // ebx
  PULONG v13; // rax
  ULONG ReturnLength[6]; // [rsp+30h] [rbp-18h] BYREF
  ULONG TokenInformationLength; // [rsp+90h] [rbp+48h] BYREF
  HANDLE TokenHandle; // [rsp+98h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+A0h] [rbp+58h] BYREF
  int v18; // [rsp+A8h] [rbp+60h]

  v0 = 0;
  v1 = 0LL;
  TokenHandle = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = OpenThreadToken(&TokenHandle);
  v6 = TokenHandle;
  if ( v5 >= 0 )
  {
    TokenInformation = 0;
    ReturnLength[0] = 0;
    if ( ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, ReturnLength) >= 0 )
    {
      if ( TokenInformation )
      {
        LODWORD(TokenHandle) = 0;
        ZwQueryInformationToken(v6, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenHandle);
        v1 = (PSID *)operator new[]((unsigned int)TokenHandle, 0x4B677844u, 256LL);
        if ( v1 )
        {
          if ( ZwQueryInformationToken(v6, TokenAppContainerSid, v1, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
          {
            v9 = RtlLengthRequiredSid(8u);
            v10 = (void *)operator new[](v9, 0x4B677844u, 256LL);
            v3 = v10;
            if ( v10 )
            {
              if ( RtlInitializeSid(v10, &IdentifierAuthority, 8u) >= 0 )
              {
                v18 = 0;
                v11 = (ULONG *)&unk_1C00B5E50;
                while ( 1 )
                {
                  do
                  {
                    v12 = *v11;
                    v13 = RtlSubAuthoritySid(v3, v0++);
                    ++v11;
                    *v13 = v12;
                  }
                  while ( v0 < 8 );
                  v0 = 0;
                  if ( RtlEqualSid(*v1, v3) )
                    goto LABEL_6;
                  if ( (unsigned int)++v18 >= 6 )
                  {
                    v4 = 0;
                    break;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        TokenInformationLength = 0;
        ZwQueryInformationToken(v6, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
        v2 = (PSID *)operator new[](TokenInformationLength, 0x4B677844u, 256LL);
        if ( ZwQueryInformationToken(v6, TokenIntegrityLevel, v2, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          v7 = RtlSubAuthorityCountSid(*v2);
          if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v7 - 1) >= 0x1000 )
LABEL_6:
            v4 = 1;
        }
      }
    }
  }
  if ( v6 )
    ZwClose(v6);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v4;
}
