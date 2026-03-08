/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C00502A0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  __int64 v4; // rax
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v9; // rdi
  __int64 ProcessWow64Process; // rax
  __int64 v11; // rdx
  int v12; // ecx

  v4 = SGDGetSessionState(a1);
  EntryFromObject = GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v4 + 24) + 8008LL),
                      a1);
  DC::RestoreAttributes(a1, a2);
  v7 = 0LL;
  if ( a2 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v6);
    v9 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v11 = *((unsigned int *)v9 + 73);
    v12 = *((_DWORD *)v9 + 73);
    if ( ProcessWow64Process )
      v7 = (unsigned int)__ROR4__((unsigned int)a2 ^ v11, v12 & 0x1F);
    else
      v7 = __ROR8__((unsigned __int64)a2 ^ v11, v12 & 0x3F);
  }
  *((_QWORD *)EntryFromObject + 2) = v7;
}
