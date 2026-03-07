_QWORD *__fastcall CreateServiceSid(_QWORD *a1, ULONG *a2)
{
  ULONG v4; // eax
  void *Pool2; // rax
  void *v6; // rbx
  ULONG i; // ebp
  ULONG v8; // edi
  PULONG v9; // rax
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+28h] [rbp-30h] BYREF

  v4 = RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(256LL, v4, 1265072196LL);
  v11 = Pool2;
  v6 = Pool2;
  if ( Pool2
    && (*(_DWORD *)IdentifierAuthority.Value = 0,
        *(_WORD *)&IdentifierAuthority.Value[4] = 1280,
        RtlInitializeSid(Pool2, &IdentifierAuthority, 6u) >= 0) )
  {
    for ( i = 0; i < 6; ++i )
    {
      v8 = *a2;
      v9 = RtlSubAuthoritySid(v6, i);
      ++a2;
      *v9 = v8;
    }
    v11 = 0LL;
    *a1 = v6;
  }
  else
  {
    *a1 = 0LL;
  }
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v11);
  return a1;
}
