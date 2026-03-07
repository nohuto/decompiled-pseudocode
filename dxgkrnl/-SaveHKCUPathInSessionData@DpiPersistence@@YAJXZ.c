NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  NTSTATUS result; // eax
  void *v9; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v11; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v3
    && (v6 = PsGetCurrentProcessSessionId(v2, v1, v4, v5),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, v6)) != 0LL) )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v9 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2342);
      if ( v9 )
      {
        operator delete(v9);
        *((_DWORD *)SessionDataForSpecifiedSession + 4682) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2342) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, KeyPath.MaximumLength);
      v11 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v11;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2, v1, v4, v5);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v17 = PsGetCurrentProcessSessionId(v14, v13, v15, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  return result;
}
