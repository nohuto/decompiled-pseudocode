__int64 __fastcall GreAcquireHmgrSemaphore(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx

  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 1912);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2, v1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)(v3 + 1912);
  result = SGDGetSessionState(v2);
  v9 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v9 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz_EtwWriteTransfer(v9, v7, v8, v5, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  }
  return result;
}
