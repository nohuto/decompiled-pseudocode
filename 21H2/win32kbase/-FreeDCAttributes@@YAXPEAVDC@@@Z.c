/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0024CD8
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0022E30 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     HmgFreeDcAttr @ 0x1C002655C (HmgFreeDcAttr.c)
 */

void __fastcall FreeDCAttributes(struct DC *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  struct _DC_ATTR *v8; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v10; // rdi
  __int64 ProcessWow64Process; // rax
  int v12; // ecx
  unsigned __int64 v13; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1);
  v7 = *((_QWORD *)EntryFromObject + 2);
  if ( v7 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v3, v2, v5, v6);
    v10 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v12 = *((_DWORD *)v10 + 73);
    if ( ProcessWow64Process )
      v13 = (unsigned int)__ROR4__(v7, 32 - (v12 & 0x1F));
    else
      v13 = __ROR8__(v7, 64 - (v12 & 0x3Fu));
    v8 = (struct _DC_ATTR *)(*((unsigned int *)v10 + 73) ^ v13);
    if ( v8 )
    {
      *((_QWORD *)EntryFromObject + 2) = 0LL;
      if ( (*((_DWORD *)a1 + 11) & 2) == 0 )
        DC::SaveAttributes(a1, v8);
      HmgFreeDcAttr(v8);
    }
  }
}
