/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C0061378
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C0061B40 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

void __fastcall vReleaseCurrentpMapProcForSurfaces(__int64 a1)
{
  unsigned int NextEntryIndex; // edi
  GdiHandleManager *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (_DWORD)a1 == 2 )
  {
    NextEntryIndex = 0;
    v12 = 0LL;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)a1, NextEntryIndex, &v12);
      if ( !NextEntryIndex )
        break;
      if ( *((_BYTE *)v12 + 14) == 5 )
      {
        v2 = gpHandleManager;
        v3 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
        v4 = *((_QWORD *)v2 + 2);
        v5 = v3;
        v6 = *(unsigned int *)(v4 + 2056);
        a1 = (unsigned int)v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
        if ( v3 < (unsigned int)a1 )
        {
          if ( v3 >= (unsigned int)v6 )
            a1 = ((v3 - (unsigned int)v6) >> 16) + 1;
          else
            a1 = 0LL;
          v7 = *(_QWORD *)(v4 + 8 * a1 + 8);
          if ( (_DWORD)a1 )
            v5 = ((1 - (_DWORD)a1) << 16) - (_DWORD)v6 + v3;
          if ( (unsigned int)v5 < *(_DWORD *)(v7 + 20) )
          {
            v8 = v5;
            v9 = v5 >> 8;
            a1 = 2LL * v8;
            v10 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * v9) + 8 * a1 + 8);
            if ( v10 )
            {
              if ( v10[31] )
              {
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, v9, v6, v7);
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
    }
  }
}
