/*
 * XREFs of CheckCallerMatchesSid @ 0x1C03BE504
 * Callers:
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03BEE7C (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006ADD4 (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1?SeReleaseSubjectContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006ADF4 (--1-$unique_storage@U-$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1-SeRelease.c)
 */

__int64 __fastcall CheckCallerMatchesSid(PSID Sid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rbx
  ULONG v4; // esi
  struct _ACL *Pool2; // rax
  struct _ACL *v6; // rbx
  NTSTATUS Acl; // eax
  __int64 v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  int AccessStatus; // [rsp+58h] [rbp-29h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-25h] BYREF
  struct _ACL *v14; // [rsp+60h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+68h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v17; // [rsp+90h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B8h] [rbp+37h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v17 = 0LL;
  v2 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  LODWORD(v3) = v2;
  if ( v2 >= 0 )
  {
    v4 = RtlLengthSid(Sid) + 20;
    Pool2 = (struct _ACL *)ExAllocatePool2(256LL, v4, 1265072196LL);
    v14 = Pool2;
    v6 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v4, 2u);
      v8 = Acl;
      if ( Acl < 0 || (v9 = RtlAddAccessAllowedAce(v6, 2u, 0x1F0000u, Sid), v8 = v9, v9 < 0) )
      {
        WdLogSingleEntry1(2LL, v8);
        LODWORD(v3) = v8;
LABEL_16:
        __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(&v14);
        goto LABEL_17;
      }
      v10 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
      v3 = v10;
      if ( v10 >= 0 )
      {
        if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
        {
          WdLogSingleEntry1(1LL, 2727LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"RtlValidSecurityDescriptor(&SecurityDescriptor)",
            2727LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        GrantedAccess = 0;
        AccessStatus = 0;
        GenericMapping.GenericAll = 2031616;
        GenericMapping.GenericRead = 0x20000;
        GenericMapping.GenericWrite = 0x20000;
        GenericMapping.GenericExecute = 0x20000;
        if ( SeAccessCheck(
               SecurityDescriptor,
               &SubjectContext,
               0,
               0x1F0000u,
               0,
               0LL,
               &GenericMapping,
               1,
               &GrantedAccess,
               &AccessStatus)
          || g_OSTestSigningEnabled )
        {
          LODWORD(v3) = 0;
        }
        else
        {
          LODWORD(v3) = AccessStatus;
        }
        goto LABEL_16;
      }
    }
    else
    {
      v3 = -1073741670LL;
    }
    WdLogSingleEntry1(2LL, v3);
    goto LABEL_16;
  }
  WdLogSingleEntry1(2LL, v2);
LABEL_17:
  wil::details::unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>(&p_SubjectContext);
  return (unsigned int)v3;
}
