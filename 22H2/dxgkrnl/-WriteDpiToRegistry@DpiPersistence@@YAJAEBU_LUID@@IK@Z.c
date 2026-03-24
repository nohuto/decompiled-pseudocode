/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A9CAC
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C02A97F0 (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A9EC0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C014AEA8 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C014B5AC (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  __int64 v14; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  const struct _UNICODE_STRING *v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 *v28; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v29; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING v30; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v31; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING v33; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v34; // [rsp+70h] [rbp-10h] BYREF

  v30 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v30, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v31 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v31, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v28) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v31, &v30, v6, v28);
    v5 = v7;
    if ( v7 < 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v10 + 24) = v5;
      WdLogEvent5_WdError(v10);
    }
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 102);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v17 = WdLogNewEntry5_WdError(v12, v11);
      LODWORD(v5) = -1073741811;
      *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v19, v18);
      v20 = v17;
      *(_QWORD *)(v17 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v20);
      goto LABEL_16;
    }
    v33 = 0LL;
    v34 = (struct _UNICODE_STRING)*((_OWORD *)SessionDataForSpecifiedSession + 1169);
    if ( _mm_srli_si128((__m128i)v34, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v33, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v29) = a3;
      v24 = DpiPersistence::WriteDwordToParticularRegValue(&v34, &v33, &v30, v23, v29);
      v5 = v24;
      if ( v24 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v20 + 24) = v5;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v34.Length )
      {
        v21 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v21 + 24) = 772LL;
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = WdLogNewEntry5_WdWarning(v12, v11, v14);
      *(_QWORD *)(v22 + 24) = 773LL;
      WdLogEvent5_WdWarning(v22);
    }
  }
LABEL_16:
  operator delete[](v30.Buffer);
  return (unsigned int)v5;
}
