__int64 __fastcall AdjustCcdDatabasePermissions(int a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  ULONG v7; // r15d
  int v8; // eax
  __int64 v9; // rdi
  ULONG v10; // eax
  void *Pool2; // rax
  PSECURITY_DESCRIPTOR v12; // rbx
  NTSTATUS v13; // eax
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v15; // rdx
  PACL v16; // rcx
  ULONG v17; // ebx
  NTSTATUS v18; // eax
  unsigned __int8 v19; // al
  ULONG v20; // eax
  ULONG v21; // edi
  struct _ACL *v22; // rax
  struct _ACL *v23; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  ULONG v30; // eax
  void *v31; // rax
  PVOID v32; // rbx
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  unsigned int *v35; // rbx
  unsigned int v36; // r14d
  void *v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdi
  unsigned __int8 DaclDefaulted[8]; // [rsp+50h] [rbp-39h] BYREF
  PVOID Ace; // [rsp+58h] [rbp-31h] BYREF
  ULONG Size; // [rsp+60h] [rbp-29h] BYREF
  ULONG Size_4; // [rsp+64h] [rbp-25h] BYREF
  PACL Dacl; // [rsp+68h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-19h] BYREF
  int v46; // [rsp+78h] [rbp-11h] BYREF
  PVOID AceList; // [rsp+80h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp-1h] BYREF
  struct _ACL *v49; // [rsp+90h] [rbp+7h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v51; // [rsp+B8h] [rbp+2Fh]
  unsigned __int8 DaclPresent; // [rsp+100h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    WdLogSingleEntry0(1LL);
    return 0LL;
  }
  v7 = 0;
  v46 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, (__int64)&v46);
  LODWORD(v9) = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    goto LABEL_61;
  }
  v10 = 336;
  SecurityDescriptor = 0LL;
  for ( Size_4 = 336; ; v10 = Size_4 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v10, 1265072196LL);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      &SecurityDescriptor,
      Pool2);
    v12 = SecurityDescriptor;
    if ( !SecurityDescriptor )
    {
      LODWORD(v9) = -1073741801;
      goto LABEL_58;
    }
    v13 = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Size_4, &Size_4);
    LODWORD(v9) = v13;
    if ( v13 != -1073741789 )
      break;
  }
  if ( v13 < 0 )
  {
LABEL_58:
    v15 = (int)v9;
    goto LABEL_59;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v12, &DaclPresent, &Dacl, DaclDefaulted);
  v9 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
    goto LABEL_11;
  if ( !DaclPresent || (v16 = Dacl) == 0LL )
  {
    v9 = -1073741275LL;
LABEL_11:
    v15 = v9;
LABEL_59:
    WdLogSingleEntry1(2LL, v15);
    goto LABEL_60;
  }
  DaclPresent = 0;
  v17 = 0;
  if ( !Dacl->AceCount )
    goto LABEL_22;
  while ( 1 )
  {
    Ace = 0LL;
    v18 = RtlGetAce(v16, v17, &Ace);
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_11;
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
      break;
    v16 = Dacl;
    if ( ++v17 >= Dacl->AceCount )
    {
      v19 = DaclPresent;
      goto LABEL_21;
    }
  }
  v16 = Dacl;
  v19 = 1;
  DaclPresent = 1;
LABEL_21:
  if ( !v19 )
  {
LABEL_22:
    Ace = 0LL;
    v51 = 0LL;
    memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
    if ( v16->AclSize < 8u )
    {
      WdLogSingleEntry1(1LL, 2567LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Dacl->AclSize >= sizeof(ACL)", 2567LL, 0LL, 0LL, 0LL, 0LL);
    }
    v20 = RtlLengthSid(a4);
    v21 = v20 + Dacl->AclSize + 8;
    v22 = (struct _ACL *)ExAllocatePool2(256LL, v21, 1265072196LL);
    v49 = v22;
    v23 = v22;
    if ( v22 )
    {
      Acl = RtlCreateAcl(v22, v21, 2u);
      v9 = Acl;
      if ( Acl < 0 )
        goto LABEL_55;
      AceList = 0LL;
      v25 = RtlGetAce(Dacl, 0, &AceList);
      v9 = v25;
      if ( v25 < 0 )
        goto LABEL_55;
      v26 = RtlAddAce(v23, 2u, 0, AceList, Dacl->AclSize - 8);
      v9 = v26;
      if ( v26 < 0 )
        goto LABEL_55;
      v27 = RtlAddAccessAllowedAceEx(v23, 2u, 2u, 0x2001Fu, a4);
      v9 = v27;
      if ( v27 < 0 )
        goto LABEL_55;
      v28 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
      v9 = v28;
      if ( v28 < 0 )
        goto LABEL_55;
      v29 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v23, 0);
      v9 = v29;
      if ( v29 < 0 )
        goto LABEL_55;
      if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor)
        || (v30 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor), Size = v30, v30 < 0x28) )
      {
        v9 = -1073741595LL;
        goto LABEL_55;
      }
      v31 = (void *)ExAllocatePool2(256LL, v30, 1265072196LL);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        &Ace,
        v31);
      if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&Ace) )
      {
        v32 = Ace;
        memset(Ace, 0, Size);
        v33 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v32, &Size);
        v9 = v33;
        if ( v33 >= 0 )
        {
          v34 = ZwSetSecurityObject(Handle, 4u, v32);
          v9 = v34;
          if ( v34 >= 0 )
          {
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v49);
            goto LABEL_39;
          }
        }
LABEL_55:
        WdLogSingleEntry1(2LL, v9);
        __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
        __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v49);
        goto LABEL_60;
      }
    }
    v9 = -1073741670LL;
    goto LABEL_55;
  }
LABEL_39:
  v35 = 0LL;
  v36 = 544;
  Ace = 0LL;
  do
  {
LABEL_40:
    if ( !v35 )
    {
      v37 = (void *)ExAllocatePool2(256LL, v36, 1265072196LL);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        &Ace,
        v37);
      v35 = (unsigned int *)Ace;
      if ( !Ace )
      {
        LODWORD(v9) = -1073741670;
        WdLogSingleEntry1(2LL, -1073741670LL);
        goto LABEL_53;
      }
    }
    Size = 0;
    v38 = ZwEnumerateKey(Handle, v7, KeyBasicInformation, v35, v36 - 2, &Size);
    v39 = v38;
    if ( v38 != -2147483643 && v38 != -1073741789 )
      break;
    v36 = Size + 2;
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      &Ace,
      0LL);
    v35 = (unsigned int *)Ace;
  }
  while ( (_DWORD)v39 == -2147483643 || (_DWORD)v39 == -1073741789 );
  if ( (int)v39 >= 0 )
  {
    *((_WORD *)v35 + ((unsigned __int64)v35[3] >> 1) + 8) = 0;
    AdjustCcdDatabasePermissions(Handle, v35 + 4, a3 + 1, a4);
LABEL_50:
    ++v7;
    goto LABEL_40;
  }
  if ( (_DWORD)v39 != -2147483622 )
  {
    WdLogSingleEntry1(1LL, v39);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Failed to enumerate key with status 0x%I64x",
      v39,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_50;
  }
  LODWORD(v9) = 0;
LABEL_53:
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&Ace);
LABEL_60:
  __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&SecurityDescriptor);
LABEL_61:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(&Handle);
  return (unsigned int)v9;
}
