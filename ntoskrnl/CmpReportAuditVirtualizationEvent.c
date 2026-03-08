/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x140A18D84
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140768C00 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A15598 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     SeReportSecurityEventWithSubCategory @ 0x140299040 (SeReportSecurityEventWithSubCategory.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     SeSetAuditParameter @ 0x1402CCF10 (SeSetAuditParameter.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpEffectiveTokenForSubject @ 0x140768D98 (CmpEffectiveTokenForSubject.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1, __int64 a2)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v5; // rdi
  int AllocatedFullProcessImageName; // ebx
  __int64 v7; // r8
  ULONG v8; // r12d
  __int64 v9; // r8
  ULONG v10; // r8d
  ULONG v11; // r14d
  _KPROCESS *CurrentThreadProcess; // rax
  ULONG v13; // r8d
  NTSTATUS v14; // eax
  PVOID v16; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Data; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v20; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+80h] [rbp-80h] BYREF

  memset(&AuditParameters, 0, sizeof(AuditParameters));
  P = 0LL;
  DestinationString = 0LL;
  p_UnicodeString = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  Data = *(_QWORD *)(CmpEffectiveTokenForSubject((__int64 *)a2, 0LL) + 24);
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v8 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_18;
  if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
  {
    v16 = 0LL;
    CmpConstructNameWithStatus(a1, &v16, v7);
    v5 = (UNICODE_STRING *)v16;
    if ( !v16 )
    {
LABEL_5:
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_18;
    }
    AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString, v9);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      p_UnicodeString = &UnicodeString;
LABEL_11:
      AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v8, p_UnicodeString);
      v10 = ++AuditParameters.ParameterCount;
      if ( AllocatedFullProcessImageName >= 0 )
      {
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v10, v5);
        v11 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                            (__int64)CurrentThreadProcess,
                                            (__int64)&P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            AllocatedFullProcessImageName = SeSetAuditParameter(
                                              &AuditParameters,
                                              SeAdtParmTypePtr,
                                              v11,
                                              *(PVOID *)(a2 + 24));
            v13 = ++AuditParameters.ParameterCount;
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v14 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v13, P);
              ++AuditParameters.ParameterCount;
              AllocatedFullProcessImageName = v14;
              if ( v14 >= 0 )
              {
                AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                  0,
                                                  &DestinationString,
                                                  0LL,
                                                  &AuditParameters,
                                                  0x75u);
                if ( AllocatedFullProcessImageName >= 0 )
                  AllocatedFullProcessImageName = 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v16 = 0LL;
    CmpConstructNameWithStatus(a1, &v16, v7);
    p_UnicodeString = (UNICODE_STRING *)v16;
    if ( !v16 )
      goto LABEL_5;
    RtlInitUnicodeString(&v20, 0LL);
    AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, (__m128i *)&v20, a2, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      v5 = &UnicodeString;
      goto LABEL_11;
    }
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v5 == &UnicodeString )
  {
    RtlFreeUnicodeString(&UnicodeString);
  }
  else if ( v5 )
  {
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)AllocatedFullProcessImageName;
}
