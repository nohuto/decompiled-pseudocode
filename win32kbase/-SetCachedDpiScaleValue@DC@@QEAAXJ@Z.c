void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  char *v4; // r12
  __int64 v5; // rsi
  struct _ENTRY *EntryFromObject; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rsi
  __int64 ProcessWow64Process; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx

  v4 = (char *)this + 976;
  if ( *(_DWORD *)(*((_QWORD *)this + 122) + 136LL) != a2 )
  {
    v5 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    EntryFromObject = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(v5 + 8008), this);
    if ( EntryFromObject )
    {
      v7 = v5 + 2336;
      if ( v5 != -2336 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v5 + 2336, 0LL);
      }
      if ( ((*((_DWORD *)EntryFromObject + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v9 = *((_QWORD *)EntryFromObject + 2);
        if ( v9 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
          v11 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          if ( v11 )
          {
            ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v11);
            v13 = *(unsigned int *)(v11 + 292);
            v14 = *(_DWORD *)(v11 + 292);
            if ( ProcessWow64Process )
              v15 = v13 ^ (unsigned int)__ROR4__(v9, 32 - (v14 & 0x1F));
            else
              v15 = __ROR8__(v9, 64 - (v14 & 0x3Fu)) ^ v13;
            if ( v15 )
              *(_DWORD *)(v15 + 136) = a2;
          }
          else
          {
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
          }
        }
      }
      if ( v7 )
      {
        ExReleasePushLockSharedEx(v7, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    *(_DWORD *)(*(_QWORD *)v4 + 136LL) = a2;
  }
}
