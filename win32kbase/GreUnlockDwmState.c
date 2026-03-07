__int64 __fastcall GreUnlockDwmState(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v2 = *(_QWORD *)(v1 + 72);
  result = SGDGetSessionState(v3);
  v6 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v6 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    result = McTemplateK0pz_EtwWriteTransfer(
               v6,
               (unsigned int)&LockRelease,
               v5,
               v2,
               (__int64)L"GreBaseGlobals.hsemDwmState");
  v7 = *(struct _ERESOURCE **)(v1 + 72);
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    return PsLeavePriorityRegion(v9, v8);
  }
  return result;
}
