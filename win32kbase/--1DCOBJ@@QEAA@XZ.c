/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0
 * Callers:
 *     GreRestoreDC @ 0x1C000D6C0 (GreRestoreDC.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C001F480 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00499E0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  __int64 v2; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  struct _DC_ATTR *v6; // rbx
  int *v7; // rcx
  int v8; // edx
  HDC v9; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rsi
  __int64 ProcessWow64Process; // rax
  int v13; // ecx
  unsigned __int64 v14; // rbx
  int v15; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    if ( !*((_DWORD *)this + 2) || (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
      goto LABEL_12;
    if ( *((_DWORD *)this + 3)
      || (v2 = SGDGetSessionState(this),
          (EntryFromObject = GdiHandleManager::GetEntryFromObject(
                               *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v2 + 24) + 8008LL),
                               *(struct OBJECT **)this)) == 0LL) )
    {
LABEL_11:
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
LABEL_12:
      v7 = *(int **)this;
      v8 = *((_DWORD *)this + 3);
      v15 = 0;
      v9 = *(HDC *)v7;
      HmgDecrementExclusiveReferenceCountEx(v7, v8, &v15);
      if ( v15 )
        GrepDeleteDC(v9, 0x2000000u);
      return;
    }
    v5 = *((_QWORD *)EntryFromObject + 2);
    if ( v5 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v4);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v13 = *((_DWORD *)v11 + 73);
        if ( ProcessWow64Process )
          v14 = (unsigned int)__ROR4__(v5, 32 - (v13 & 0x1F));
        else
          v14 = __ROR8__(v5, 64 - (v13 & 0x3Fu));
        v6 = (struct _DC_ATTR *)(*((unsigned int *)v11 + 73) ^ v14);
        goto LABEL_9;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v6 = 0LL;
LABEL_9:
    if ( v6 )
      DC::RestoreAttributes(*(DC **)this, v6);
    goto LABEL_11;
  }
}
