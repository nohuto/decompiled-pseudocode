/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0302E08
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C0302AA8 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C03033A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0003C90 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C0184F64 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C03030B0 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int v10; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  const struct _UNICODE_STRING *v12; // r9
  int v13; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned __int16 *v18; // [rsp+28h] [rbp-29h]
  unsigned __int16 *v19; // [rsp+28h] [rbp-29h]
  unsigned int v20; // [rsp+30h] [rbp-21h]
  unsigned int v21; // [rsp+30h] [rbp-21h]
  struct _UNICODE_STRING v22; // [rsp+58h] [rbp+7h] BYREF
  struct _UNICODE_STRING v23; // [rsp+68h] [rbp+17h] BYREF
  struct _UNICODE_STRING v24; // [rsp+78h] [rbp+27h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+37h] BYREF
  struct _UNICODE_STRING v26; // [rsp+98h] [rbp+47h] BYREF

  v22 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v22, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v24 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v24, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v18) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v24, &v22, v6, v18, v20);
    v5 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to write DPI value to HKLM. Writing to HKCU anyway. (Status = 0x%I64x)",
        v5,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v9
      && (v10 = PsGetCurrentProcessSessionId(v8),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, v10)) != 0LL) )
    {
      v23 = 0LL;
      v26 = 0LL;
      v23 = *DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0);
      if ( _mm_srli_si128((__m128i)v23, 8).m128i_u64[0] )
      {
        RtlInitUnicodeString(&v26, L"Control Panel\\Desktop\\PerMonitorSettings\\");
        LODWORD(v19) = a3;
        v13 = DpiPersistence::WriteDwordToParticularRegValue(&v23, &v26, &v22, v12, v19, v21);
        v5 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry1(2LL, v13);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to write DPI value to HKCU. (Status = 0x%I64x)",
            v5,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        if ( v23.Length )
        {
          WdLogSingleEntry1(1LL, 774LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKCURootName.Length == 0", 774LL, 0LL, 0LL, 0LL, 0LL);
        }
        WdLogSingleEntry1(3LL, 775LL);
      }
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
      LODWORD(v5) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v16 = PsGetCurrentProcessSessionId(v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v16,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  operator delete(v22.Buffer);
  return (unsigned int)v5;
}
