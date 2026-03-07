__int64 __fastcall GreLockVisRgnShared(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 result; // rax
  int v13; // r8d
  __int64 v14; // rcx

  v1 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  v2 = v1[10];
  if ( v2 )
    ExEnterPriorityRegionAndAcquireResourceShared(v2);
  v3 = v1[10];
  v4 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v4,
      (unsigned int)&LockAcquireShared,
      v5,
      v3,
      (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  v6 = v1[15];
  if ( v6 )
    ExEnterPriorityRegionAndAcquireResourceShared(v6);
  v7 = v1[15];
  v8 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
  if ( *(_DWORD *)(v8 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v8,
      (unsigned int)&LockAcquireShared,
      v9,
      v7,
      (__int64)L"GreBaseGlobals.hsemGreLock");
  v10 = v1[11];
  if ( v10 )
    ExEnterPriorityRegionAndAcquireResourceShared(v10);
  v11 = v1[11];
  result = SGDGetSessionState(v10);
  v14 = *(_QWORD *)(result + 24);
  if ( *(_DWORD *)(v14 + 180) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz_EtwWriteTransfer(
               v14,
               (unsigned int)&LockAcquireShared,
               v13,
               v11,
               (__int64)L"GreBaseGlobals.hsemDCVisRgn");
  }
  return result;
}
