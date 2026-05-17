/*
 * XREFs of LdrpCorInitialize @ 0x180083294
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x18001733C (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x18001A838 (LdrpBuildSystem32FileName.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(_QWORD *a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  int Dll; // ebx
  int *v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-1B0h] BYREF
  int v14; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v15; // [rsp+48h] [rbp-1A0h]
  _WORD v16[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v17[15]; // [rsp+150h] [rbp-98h] BYREF
  char v18; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &v13) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &v13) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock, v3, v4);
  v15 = v16;
  v14 = 0x1000000;
  v16[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v14, (__int64)&LdrpMscoreeDllName);
    v6 = &v14;
  }
  else
  {
    v6 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, v17);
    Dll = LdrpLoadDll((__int64)v6, (int)v17, 1, (__int64)&v12);
    if ( v18 )
      RtlReleasePath(v17[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v12 + 48), "_CorExeMain", 0, (char **)&v13);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v12, 0);
        v10 = v12;
      }
      else
      {
        v9 = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        LdrpCorExeMainRoutine = v9;
        v10 = v12;
        *a1 = v12;
      }
      LdrpDereferenceModule(v10, v9, v7, v8);
    }
  }
  if ( v16 != v15 )
    NtdllpFreeStringRoutine((__int64)v15);
  return (unsigned int)Dll;
}
