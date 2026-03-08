/*
 * XREFs of ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0056684
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0054D30 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0050300 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall XDCOBJ::RestoreAttributesHelper(DC **this)
{
  __int64 v2; // rax
  DC *v3; // r15
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // r14
  unsigned int v7; // ebx
  struct _ENTRY *Entry; // rbp
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  DC *v14; // rdx
  __int64 v15; // rbx
  struct _DC_ATTR *v16; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v18; // rdi
  __int64 ProcessWow64Process; // rax
  int v20; // ecx
  unsigned __int64 v21; // rbx

  if ( !*((_DWORD *)this + 3) )
  {
    v2 = SGDGetSessionState(this);
    v3 = *this;
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8008LL);
    v5 = GdiHandleManager::DecodeIndex(
           (GdiHandleEntryDirectory **)v4,
           (unsigned __int16)*(_DWORD *)*this | (*(_DWORD *)*this >> 8) & 0xFF0000u);
    v6 = *(_QWORD *)(v4 + 16);
    v7 = v5;
    Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v6, v5, 0);
    v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v4, v7);
    v10 = v9;
    v11 = *(_DWORD *)(v6 + 2056);
    v12 = v11 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16);
    if ( v9 >= (unsigned int)v12 )
      goto LABEL_24;
    if ( v9 >= v11 )
      v12 = ((v9 - v11) >> 16) + 1;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(v6 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v10 += ((1 - (_DWORD)v12) << 16) - v11;
    if ( v10 >= *(_DWORD *)(v13 + 20) )
    {
LABEL_24:
      v14 = 0LL;
    }
    else
    {
      v12 = 2LL * (unsigned __int8)v10;
      v14 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                   + 16LL * (unsigned __int8)v10
                   + 8);
    }
    if ( v14 == v3 && Entry )
    {
      v15 = *((_QWORD *)Entry + 2);
      if ( v15 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v12);
        v18 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
        {
          ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
          v20 = *((_DWORD *)v18 + 73);
          if ( ProcessWow64Process )
            v21 = (unsigned int)__ROR4__(v15, 32 - (v20 & 0x1F));
          else
            v21 = __ROR8__(v15, 64 - (v20 & 0x3Fu));
          v16 = (struct _DC_ATTR *)(*((unsigned int *)v18 + 73) ^ v21);
          goto LABEL_13;
        }
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
      v16 = 0LL;
LABEL_13:
      if ( v16 )
        DC::RestoreAttributes(*this, v16);
    }
  }
}
