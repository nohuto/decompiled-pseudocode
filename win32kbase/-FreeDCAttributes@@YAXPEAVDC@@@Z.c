void __fastcall FreeDCAttributes(struct DC *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v5; // rbx
  struct _DC_ATTR *v6; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v8; // rdi
  __int64 ProcessWow64Process; // rax
  int v10; // ecx
  unsigned __int64 v11; // rbx

  v2 = SGDGetSessionState(a1);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v2 + 24) + 8008LL),
                      a1);
  v5 = *((_QWORD *)EntryFromObject + 2);
  if ( v5 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v3);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    {
      ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
      v10 = *((_DWORD *)v8 + 73);
      if ( ProcessWow64Process )
        v11 = (unsigned int)__ROR4__(v5, 32 - (v10 & 0x1F));
      else
        v11 = __ROR8__(v5, 64 - (v10 & 0x3Fu));
      v6 = (struct _DC_ATTR *)(*((unsigned int *)v8 + 73) ^ v11);
      if ( v6 )
      {
        *((_QWORD *)EntryFromObject + 2) = 0LL;
        if ( (*((_DWORD *)a1 + 11) & 2) == 0 )
          DC::SaveAttributes(a1, v6);
        HmgFreeDcAttr(v6);
      }
    }
    else
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
}
