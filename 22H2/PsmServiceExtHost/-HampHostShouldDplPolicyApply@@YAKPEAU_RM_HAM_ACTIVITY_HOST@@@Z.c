/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E610
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180003F64 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E4C4 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x18003C5E4 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003C6BC (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180077E7C (-HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x180077F24 (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x180077FA0 (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800780A8 (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@55@Z @ 0x18007D1D0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r13d
  char v3; // r15
  int IsManaged; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  char v9; // bl
  unsigned __int8 v10; // di
  int v11; // eax
  unsigned __int16 *v12; // rsi
  unsigned __int16 *i; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  wchar_t *v16; // r12
  struct EDP_ENTERPRISE_CONTEXT *v17; // rcx
  struct EDP_ENTERPRISE_CONTEXT *v19; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  void *v22; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int16 *v24; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+58h] BYREF

  v19 = 0LL;
  v2 = 0;
  v24 = 0LL;
  v3 = 3;
  IsManaged = HampSystemCdplIsManaged();
  LOBYTE(v5) = HampSystemEdpIsManaged();
  v8 = v5;
  if ( IsManaged )
  {
    if ( (int)HampSystemDplIsAppAllowedToRun(a1, &v23) < 0 )
    {
      v3 = 1;
      v9 = 8;
      goto LABEL_33;
    }
    if ( !v23 )
    {
      v10 = 1;
      v9 = 8;
      v3 = 2;
      goto LABEL_34;
    }
  }
  else
  {
    v3 = 0;
  }
  if ( !v8 )
  {
    v9 = 1;
LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
  {
    v9 = 0;
    goto LABEL_33;
  }
  v2 = 1;
  if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v19) < 0 )
  {
    v9 = 2;
    goto LABEL_33;
  }
  if ( (int)EdpUtilIsAppEnlightened(v19, &v23) < 0 )
  {
    v9 = 3;
    goto LABEL_33;
  }
  if ( v23 )
  {
    v9 = 4;
    goto LABEL_33;
  }
  v11 = HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &v24);
  v12 = v24;
  if ( v11 >= 0 )
  {
    if ( v24 && *v24 )
    {
      for ( i = v24; ; i = 0LL )
      {
        v16 = wcstok_s(i, L"|", &Context);
        if ( !v16 )
        {
          v9 = 8;
          goto LABEL_28;
        }
        v14 = 0;
        v15 = *(_QWORD *)v19;
        if ( *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          break;
LABEL_23:
        ;
      }
      while ( _wcsicmp(v16, *(const wchar_t **)(v15 + 16LL * v14 + 24)) )
      {
        ++v14;
        v15 = *(_QWORD *)v19;
        if ( v14 >= *(_DWORD *)(*(_QWORD *)v19 + 4LL) )
          goto LABEL_23;
      }
      v10 = 1;
      v9 = 7;
      goto LABEL_29;
    }
    v9 = 6;
  }
  else
  {
    v9 = 5;
  }
LABEL_28:
  v10 = 0;
LABEL_29:
  if ( v12 )
    EdpFree(v12);
LABEL_34:
  v17 = v19;
  if ( v19 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( (unsigned int)dword_1800B3218 > 5 )
  {
    v21 = *((_QWORD *)a1 - 4);
    v22 = (char *)a1 + 24;
    LOBYTE(v23) = v3;
    LOBYTE(v24) = v9;
    v25 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      (__int64)v17,
      byte_1800A0AA1,
      v6,
      v7,
      &v22,
      (__int64)&v21,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  return v10;
}
