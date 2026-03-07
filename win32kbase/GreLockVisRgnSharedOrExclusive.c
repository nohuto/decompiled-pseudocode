__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  bool v5; // bl
  __int64 v6; // rcx
  bool v7; // zf
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v12, a2);
    v3 = v12[0];
    if ( !v12[0] )
      return 0LL;
    v2 = *(_QWORD *)(v12[0] + 48LL);
    v13 = v2;
    v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13)
      && ((*(_DWORD *)(v3 + 36) & 0x200) == 0
       || (**(_BYTE **)(v3 + 976) & 1) != 0
       || (*(_DWORD *)(v3 + 36) & 0x8000) != 0);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v12);
    v7 = !v5;
  }
  else
  {
    v13 = a1;
    v7 = !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v13);
  }
  if ( v7 )
  {
    GreLockVisRgn(v2);
  }
  else
  {
    v8 = *(_QWORD **)(SGDGetSessionState(v6) + 24);
    v9 = v8[10];
    if ( v9 )
      ExEnterPriorityRegionAndAcquireResourceShared(v9);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDynamicModeChange", v8[10]);
    v10 = v8[15];
    if ( v10 )
      ExEnterPriorityRegionAndAcquireResourceShared(v10);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemGreLock", v8[15]);
    v11 = v8[11];
    if ( v11 )
      ExEnterPriorityRegionAndAcquireResourceShared(v11);
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"GreBaseGlobals.hsemDCVisRgn", v8[11]);
  }
  return 1LL;
}
