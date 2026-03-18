/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C001D3D8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C001D35C (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x1C001D1FC (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeatureReporting_ReportUsageToServiceDirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // bx
  unsigned int v4; // esi
  int *v5; // rax
  unsigned int v6; // edi
  int v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch]
  _BYTE v10[24]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]

  v3 = a2;
  v4 = a3;
  v5 = wil_details_FeatureReporting_RecordUsageInCache(
         (__int64)v10,
         (volatile signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData,
         a3,
         SHIDWORD(a2));
  v6 = 0;
  v11 = *(_OWORD *)v5;
  v12 = *((_QWORD *)v5 + 2);
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, void **, __int128 *))&WPP_MAIN_CB.SectorSize)(
      46499066LL,
      v4,
      1LL,
      &WPP_MAIN_CB.Dpc.DpcData,
      &v11);
  if ( (v3 & 0x400) != 0 && v4 != 254 )
  {
    v8 = 46499066;
    v9 = (unsigned __int16)v4;
    if ( (v3 & 0x800) != 0 )
      HIWORD(v9) |= 1u;
    RtlNotifyFeatureUsage(&v8);
  }
  LOBYTE(v6) = (_DWORD)v12 == 0;
  return v6;
}
