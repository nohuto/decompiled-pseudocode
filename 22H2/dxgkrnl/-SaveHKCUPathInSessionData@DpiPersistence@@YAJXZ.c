/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01EA108
 * Callers:
 *     DxgkInitializeDpi @ 0x1C01EA0F0 (DxgkInitializeDpi.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0003B8C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0003C90 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int v3; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  NTSTATUS result; // eax
  void *v6; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v8; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v2
    && (v3 = PsGetCurrentProcessSessionId(v1),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, v3)) != 0LL) )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v6 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2342);
      if ( v6 )
      {
        operator delete(v6);
        *((_DWORD *)SessionDataForSpecifiedSession + 4682) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2342) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, KeyPath.MaximumLength);
      v8 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v8;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v11 = PsGetCurrentProcessSessionId(v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  return result;
}
