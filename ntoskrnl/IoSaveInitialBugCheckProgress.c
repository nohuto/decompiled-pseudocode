/*
 * XREFs of IoSaveInitialBugCheckProgress @ 0x14054E7F0
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405793F8 (KiUpdateBugcheckRecoveryProgress.c)
 * Callees:
 *     HalGetEnvironmentVariableEx @ 0x1402AF770 (HalGetEnvironmentVariableEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x14054FEA4 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 */

void __fastcall IoSaveInitialBugCheckProgress(int a1, __int64 a2)
{
  __int64 v3; // r9
  unsigned int *v4; // r8
  const wchar_t *v5; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  int v9; // [rsp+78h] [rbp+38h] BYREF

  v7 = a2;
  v6[0] = 0LL;
  v8 = 0;
  v9 = 8;
  if ( !BugCheckSaveInitialProgressCalled
    && IopReportBugCheckProgress
    && (unsigned __int8)IopBugCheckProgressEfiVariableServicesAvailable() )
  {
    BugCheckProgressEfiCalled = 1;
    if ( CrashdmpDumpBlock )
    {
      LODWORD(v6[0]) = a1;
      WORD2(v6[0]) = MEMORY[0xFFFFF780000002C4];
      HIWORD(v6[0]) = *(_WORD *)(CrashdmpDumpBlock + 1408) + 1;
      ((void (__fastcall *)(const wchar_t *, __int64 *, _QWORD *, __int64, int))IopReportBugCheckProgress)(
        L"BugCheckCode",
        BUGCHECK_EFI_GUID,
        v6,
        8LL,
        1);
      v3 = 8LL;
      v4 = (unsigned int *)&v7;
      v5 = L"BugCheckParameter1";
    }
    else
    {
      if ( (unsigned int)HalGetEnvironmentVariableEx(L"BugCheckCode", (int)BUGCHECK_EFI_GUID, (__int64)v6, &v9, 0LL) )
      {
LABEL_9:
        BugCheckProgressEfiCalled = 0;
        BugCheckSaveInitialProgressCalled = 1;
        return;
      }
      LODWORD(v6[0]) = a1;
      ++HIWORD(v6[0]);
      WORD2(v6[0]) = MEMORY[0xFFFFF780000002C4];
      v8 = v8 & 0xFFFBFE00 | 0x4004F;
      ((void (__fastcall *)(const wchar_t *, __int64 *, _QWORD *, __int64, int))IopReportBugCheckProgress)(
        L"BugCheckCode",
        BUGCHECK_EFI_GUID,
        v6,
        8LL,
        1);
      ((void (__fastcall *)(const wchar_t *, __int64 *, __int64 *, __int64, int))IopReportBugCheckProgress)(
        L"BugCheckParameter1",
        BUGCHECK_EFI_GUID,
        &v7,
        8LL,
        1);
      v3 = 4LL;
      v4 = &v8;
      v5 = L"BugCheckProgress";
    }
    ((void (__fastcall *)(const wchar_t *, __int64 *, unsigned int *, __int64, int))IopReportBugCheckProgress)(
      v5,
      BUGCHECK_EFI_GUID,
      v4,
      v3,
      1);
    goto LABEL_9;
  }
}
