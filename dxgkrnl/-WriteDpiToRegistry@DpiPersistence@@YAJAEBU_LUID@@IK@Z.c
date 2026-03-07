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
  DXGSESSIONMGR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  const struct _UNICODE_STRING *v15; // r9
  int v16; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned __int16 *v24; // [rsp+28h] [rbp-29h]
  unsigned __int16 *v25; // [rsp+28h] [rbp-29h]
  unsigned int v26; // [rsp+30h] [rbp-21h]
  unsigned int v27; // [rsp+30h] [rbp-21h]
  struct _UNICODE_STRING v28; // [rsp+58h] [rbp+7h] BYREF
  struct _UNICODE_STRING v29; // [rsp+68h] [rbp+17h] BYREF
  struct _UNICODE_STRING v30; // [rsp+78h] [rbp+27h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+37h] BYREF
  struct _UNICODE_STRING v32; // [rsp+98h] [rbp+47h] BYREF

  v28 = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v28, a4);
  if ( (int)v5 >= 0 )
  {
    DestinationString = 0LL;
    v30 = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v30, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v24) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v30, &v28, v6, v24, v26);
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
    v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v10
      && (v13 = PsGetCurrentProcessSessionId(v9, v8, v11, v12),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v13)) != 0LL) )
    {
      v29 = 0LL;
      v32 = 0LL;
      v29 = *DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0);
      if ( _mm_srli_si128((__m128i)v29, 8).m128i_u64[0] )
      {
        RtlInitUnicodeString(&v32, L"Control Panel\\Desktop\\PerMonitorSettings\\");
        LODWORD(v25) = a3;
        v16 = DpiPersistence::WriteDwordToParticularRegValue(&v29, &v32, &v28, v15, v25, v27);
        v5 = v16;
        if ( v16 < 0 )
        {
          WdLogSingleEntry1(2LL, v16);
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
        if ( v29.Length )
        {
          WdLogSingleEntry1(1LL, 774LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKCURootName.Length == 0", 774LL, 0LL, 0LL, 0LL, 0LL);
        }
        WdLogSingleEntry1(3LL, 775LL);
      }
    }
    else
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
      LODWORD(v5) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v22 = PsGetCurrentProcessSessionId(v19, v18, v20, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v22,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  operator delete(v28.Buffer);
  return (unsigned int)v5;
}
