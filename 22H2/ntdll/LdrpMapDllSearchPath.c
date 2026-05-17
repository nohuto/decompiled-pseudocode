/*
 * XREFs of LdrpMapDllSearchPath @ 0x180060AD0
 * Callers:
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD7E8 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     LdrpSearchPath @ 0x18006032C (LdrpSearchPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180060A70 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180060DA0 (LdrpFreeUnicodeString.c)
 *     LdrpAppCompatRedirect @ 0x180060DD8 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x180060FD4 (LdrpFindExistingModule.c)
 *     LdrpHashUnicodeString @ 0x180061070 (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x1800610A4 (LdrpMapDllNtFileName.c)
 *     LdrpLoadContextReplaceModule @ 0x1800617BC (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CEE64 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  __int64 *v6; // r15
  int v7; // eax
  int ExistingModule; // ebx
  int v9; // eax
  __int128 v10; // xmm1
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v19; // [rsp+98h] [rbp-68h]
  _WORD v20[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v22; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v15 = 0LL;
  v12 = 0;
  v19 = v20;
  v4 = 0;
  v18 = 0x1000000;
  v20[0] = 0;
  v13 = 0;
  v17 = 0LL;
  v14 = 0LL;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(*(void **)(v1 + 80), v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1, v21);
    v6 = v21;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v21);
    v6 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (const void **)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           (__int16 **)&v17,
           &v18,
           (__int64)&v16,
           (unsigned __int16 *)&v14,
           &v12,
           (__int64)&v13);
    ExistingModule = v7;
    if ( v12 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v14, (unsigned int)&v16, (unsigned int)&v18, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v13 |= 1u;
      v9 = LdrpHashUnicodeString(&v16);
      *(_DWORD *)(v2 + 264) = v9;
      ExistingModule = LdrpFindExistingModule(
                         (unsigned int)&v16,
                         (unsigned int)&v14,
                         *(_DWORD *)(a1 + 32),
                         v9,
                         (__int64)&v15);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v10 = v16;
    *(_OWORD *)(v2 + 72) = v14;
    *(_OWORD *)(v2 + 88) = v10;
    v14 = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v18);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v20 != v19 )
      NtdllpFreeStringRoutine((__int64)v19);
    v18 = 0x1000000;
    v19 = v20;
    v20[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v15 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v13, a1);
  }
  if ( v20 != v19 )
    NtdllpFreeStringRoutine((__int64)v19);
  v18 = 0x1000000;
  v19 = v20;
  v20[0] = 0;
  LdrpFreeUnicodeString(&v14);
  if ( v22 )
    RtlReleasePath(v21[0]);
  return (unsigned int)ExistingModule;
}
