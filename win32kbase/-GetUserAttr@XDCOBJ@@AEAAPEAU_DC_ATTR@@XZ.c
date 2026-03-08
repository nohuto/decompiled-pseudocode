/*
 * XREFs of ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C004AC60
 * Callers:
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0053730 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

struct _DC_ATTR *__fastcall XDCOBJ::GetUserAttr(XDCOBJ *this)
{
  XDCOBJ *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r14
  GdiHandleManager *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rbp
  struct _ENTRY *Entry; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v20; // rdx
  int v21; // ecx

  v1 = this;
  v2 = SGDGetSessionState(this);
  v3 = *(_DWORD **)v1;
  v4 = *(GdiHandleManager **)(*(_QWORD *)(v2 + 24) + 8008LL);
  v5 = GdiHandleManager::DecodeIndex(v4, (unsigned __int16)**(_DWORD **)v1 | (**(_DWORD **)v1 >> 8) & 0xFF0000);
  v6 = *((_QWORD *)v4 + 2);
  LODWORD(v1) = v5;
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v6, v5, 0);
  v8 = GdiHandleManager::DecodeIndex(v4, (unsigned int)v1);
  v9 = *(_DWORD *)(v6 + 2056);
  v10 = v9 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16);
  v11 = v8;
  if ( v8 >= (unsigned int)v10 )
  {
    v13 = 0LL;
LABEL_19:
    v14 = 0LL;
    goto LABEL_6;
  }
  if ( v8 >= v9 )
  {
    v10 = ((v8 - v9) >> 16) + 1;
    v12 = *(_QWORD *)(v6 + 8 * v10 + 8);
    v11 = -65536 * ((v8 - v9) >> 16) - v9 + v8;
  }
  else
  {
    v12 = *(_QWORD *)(v6 + 8);
  }
  v13 = 0LL;
  if ( (unsigned int)v11 >= *(_DWORD *)(v12 + 20) )
    goto LABEL_19;
  v10 = 2LL * (unsigned __int8)v11;
  v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
LABEL_6:
  if ( v14 != v3 || !Entry )
    return 0LL;
  v15 = *((_QWORD *)Entry + 2);
  if ( v15 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
    v17 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    {
      ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
      v20 = *((unsigned int *)v17 + 73);
      v21 = *((_DWORD *)v17 + 73);
      if ( ProcessWow64Process )
        return (struct _DC_ATTR *)(v20 ^ (unsigned int)__ROR4__(v15, 32 - (v21 & 0x1F)));
      else
        return (struct _DC_ATTR *)(v20 ^ __ROR8__(v15, 64 - (v21 & 0x3Fu)));
    }
    else
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return (struct _DC_ATTR *)v13;
}
