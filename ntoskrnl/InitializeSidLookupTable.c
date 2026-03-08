/*
 * XREFs of InitializeSidLookupTable @ 0x140810910
 * Callers:
 *     SddlBaseInitialize @ 0x140384A24 (SddlBaseInitialize.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 */

char InitializeSidLookupTable()
{
  _DWORD *v0; // rbx
  unsigned int v1; // edi
  int v2; // edx
  char *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  ULONG v9; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  struct _SID_IDENTIFIER_AUTHORITY *p_IdentifierAuthority; // rdx
  PULONG v15; // rax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  __int16 v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h] BYREF
  __int16 v19; // [rsp+2Ch] [rbp-14h]
  int v20; // [rsp+30h] [rbp-10h] BYREF
  __int16 v21; // [rsp+34h] [rbp-Ch]
  struct _SID_IDENTIFIER_AUTHORITY v22; // [rsp+38h] [rbp-8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+68h] [rbp+28h] BYREF
  int v24; // [rsp+70h] [rbp+30h] BYREF
  __int16 v25; // [rsp+74h] [rbp+34h]
  struct _SID_IDENTIFIER_AUTHORITY v26; // [rsp+78h] [rbp+38h] BYREF

  *(_WORD *)&v22.Value[4] = 256;
  *(_DWORD *)v22.Value = 0;
  v0 = &unk_140C09A40;
  v20 = 0;
  v1 = 0;
  v18 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v16 = 0;
  *(_DWORD *)v26.Value = 0;
  v24 = 0;
  v21 = 512;
  v19 = 768;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v17 = 4096;
  *(_WORD *)&v26.Value[4] = 3840;
  v25 = 4608;
  do
  {
    if ( *((_BYTE *)v0 - 16) != 1 || !*(_QWORD *)v0 )
    {
      v2 = v0[3];
      v3 = (char *)&unk_140C09A50 + 104 * v1;
      *(_QWORD *)v0 = v3;
      v4 = v2 - 1;
      if ( !v4 )
      {
        RtlInitializeSid(v3, &v22, 1u);
        *RtlSubAuthoritySid(*(PSID *)v0, 0) = v0[2];
        goto LABEL_11;
      }
      v5 = v4 - 1;
      if ( !v5 )
      {
        p_IdentifierAuthority = (struct _SID_IDENTIFIER_AUTHORITY *)&v20;
        goto LABEL_20;
      }
      v6 = v5 - 2;
      if ( !v6 )
      {
        p_IdentifierAuthority = (struct _SID_IDENTIFIER_AUTHORITY *)&v18;
LABEL_20:
        RtlInitializeSid(v3, p_IdentifierAuthority, 1u);
        v9 = 0;
        goto LABEL_10;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        p_IdentifierAuthority = &IdentifierAuthority;
        goto LABEL_20;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
        RtlInitializeSid(v3, &IdentifierAuthority, 2u);
        *RtlSubAuthoritySid(*(PSID *)v0, 0) = 32;
        goto LABEL_9;
      }
      v11 = v8 - 2;
      if ( !v11 )
      {
        p_IdentifierAuthority = (struct _SID_IDENTIFIER_AUTHORITY *)&v16;
        goto LABEL_20;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        RtlInitializeSid(v3, &v26, 2u);
        *RtlSubAuthoritySid(*(PSID *)v0, 0) = 2;
LABEL_9:
        v9 = 1;
LABEL_10:
        *RtlSubAuthoritySid(*(PSID *)v0, v9) = v0[2];
LABEL_11:
        *((_BYTE *)v0 - 16) = 1;
        goto LABEL_12;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        RtlInitializeSid(v3, &IdentifierAuthority, 6u);
        *RtlSubAuthoritySid(*(PSID *)v0, 0) = 84;
        v15 = RtlSubAuthoritySid(*(PSID *)v0, 1u);
        *(_OWORD *)v15 = 0LL;
        v15[4] = 0;
        goto LABEL_11;
      }
      if ( v13 == 1 )
      {
        p_IdentifierAuthority = (struct _SID_IDENTIFIER_AUTHORITY *)&v24;
        goto LABEL_20;
      }
    }
LABEL_12:
    ++v1;
    v0 += 26;
  }
  while ( v1 < 0x41 );
  return 1;
}
