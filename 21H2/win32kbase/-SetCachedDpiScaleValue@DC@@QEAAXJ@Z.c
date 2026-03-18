/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C0169940
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0169B88 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  __int64 v4; // rsi
  struct _ENTRY *EntryFromObject; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v9; // r14
  __int64 ProcessWow64Process; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rcx

  v4 = *((_QWORD *)this + 122);
  if ( *(_DWORD *)(v4 + 136) != a2 )
  {
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
    if ( EntryFromObject )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&gDCOwnershipChangeLock, 0LL);
      if ( ((*((_DWORD *)EntryFromObject + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v7 = *((_QWORD *)EntryFromObject + 2);
        if ( v7 )
        {
          CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v6);
          v9 = CurrentProcessWin32Process;
          if ( !CurrentProcessWin32Process )
            KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v11 = *((unsigned int *)v9 + 73);
          v12 = *((_DWORD *)v9 + 73);
          if ( ProcessWow64Process )
            v13 = v11 ^ (unsigned int)__ROR4__(v7, 32 - (v12 & 0x1F));
          else
            v13 = __ROR8__(v7, 64 - (v12 & 0x3Fu)) ^ v11;
          if ( v13 )
            *(_DWORD *)(v13 + 136) = a2;
        }
      }
      ExReleasePushLockSharedEx(&gDCOwnershipChangeLock, 0LL);
      KeLeaveCriticalRegion();
      v4 = *((_QWORD *)this + 122);
    }
    *(_DWORD *)(v4 + 136) = a2;
  }
}
