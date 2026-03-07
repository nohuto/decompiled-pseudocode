__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // r8d
  __int64 v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

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
  HmgpIncProcessHandleCountEx(a1);
  v10 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  v11 = *(_QWORD *)(v10 + 1912);
  result = SGDGetSessionState(v12);
  v15 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v15,
               (unsigned int)&LockRelease,
               v14,
               v11,
               (__int64)L"GreBaseGlobals.hsemHmgr");
  v16 = *(struct _ERESOURCE **)(v10 + 1912);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    return PsLeavePriorityRegion(v18, v17);
  }
  return result;
}
