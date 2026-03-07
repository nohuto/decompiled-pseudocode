__int64 __fastcall GreDecQuotaCount(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // r8d
  __int64 v14; // rcx
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 1912);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)(v3 + 1912);
  v7 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_DWORD *)(v7 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v7, v6, v8, v5, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  --*(_DWORD *)(a1 + 60);
  v9 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
  v10 = *(_QWORD *)(v9 + 1912);
  result = SGDGetSessionState(v11);
  v14 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v14 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v14,
               (unsigned int)&LockRelease,
               v13,
               v10,
               (__int64)L"GreBaseGlobals.hsemHmgr");
  v15 = *(struct _ERESOURCE **)(v9 + 1912);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    return PsLeavePriorityRegion(v17, v16);
  }
  return result;
}
