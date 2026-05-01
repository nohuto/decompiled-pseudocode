/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003FF9C
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003FEE0 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180011CD4 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011DF0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x180037310 (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180040128 (-HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180040198 (-HampPdcStart@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 result; // rax
  ULONG SecurityDescriptorSize; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE v5[384]; // [rsp+50h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v5);
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 288,
             SystemStateChangedWnfName,
             0LL,
             HampManagerSystemStateChangedCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
      (char *)a1 + 296,
      DplKeyStateChangedWnfName,
      0LL,
      HampManagerDplKeyStateChangedCallback,
      a1,
      0LL,
      0,
      0);
    result = HampPdcStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 336));
    if ( (int)result >= 0 )
    {
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"O:SYD:(A;;GA;;;SY)",
             1u,
             (PSECURITY_DESCRIPTOR *)a1 + 92,
             &SecurityDescriptorSize) )
      {
        result = NtCreateWnfStateName(&v4, 2LL, 0LL, 0LL, 0LL, 4, *((_QWORD *)a1 + 92));
        if ( (int)result >= 0 )
        {
          *((_QWORD *)a1 + 91) = v4;
          result = HampOplockWatchStart(a1);
          if ( (int)result >= 0 )
          {
            result = HampSystemQueryPolicyInfo(a1, L"UiPausing", (struct ExecutionModel::_ResourceSetInfo *)v5);
            if ( (int)result >= 0 )
            {
              HampRmPopulateExternalResourceAccessData((struct ExecutionModel::_ResourceSetInfo *)v5, (ULONG *)a1 + 174);
              return 0LL;
            }
          }
        }
      }
      else
      {
        return 3221225473LL;
      }
    }
  }
  return result;
}
