/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXXZ @ 0x1C00CE504
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C006F140 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int NextEntryIndex; // edi
  __int64 v2; // rsi
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v12; // [rsp+30h] [rbp+8h] BYREF

  NextEntryIndex = 0;
  v12 = 0LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  while ( 1 )
  {
    v3 = *(GdiHandleManager **)(v2 + 8008);
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v3, NextEntryIndex, &v12);
    if ( !NextEntryIndex )
      break;
    if ( *((_BYTE *)v12 + 14) == 5 )
    {
      v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v3, NextEntryIndex);
      v5 = *((_QWORD *)v3 + 2);
      v6 = v4;
      v7 = *(_DWORD *)(v5 + 2056);
      if ( v4 < v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        if ( v4 >= v7 )
          v8 = ((v4 - v7) >> 16) + 1;
        else
          v8 = 0LL;
        v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
        if ( (_DWORD)v8 )
          v6 = ((1 - (_DWORD)v8) << 16) - v7 + v4;
        if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 20) )
        {
          v10 = 0LL;
        }
        else
        {
          v8 = 2LL * (unsigned __int8)v6;
          v10 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
        }
        if ( v10 && v10[31] )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( v10[33] == CurrentProcessWin32Process )
          {
            v10[33] = 0LL;
            v10[32] = 0LL;
          }
        }
      }
    }
  }
}
