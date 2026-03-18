/*
 * XREFs of HmgUnlock @ 0x1C00B05A8
 * Callers:
 *     GreUnlockRegion @ 0x1C00B0590 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  __int16 v1; // ebx^2
  unsigned int v2; // edi
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v1 = HIWORD(a1);
  v12 = 0LL;
  v13 = 0;
  v2 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v12, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1LL, 0, 0);
  if ( v13 )
  {
    if ( *(_BYTE *)(v12 + 14) == 4 && *(_WORD *)(v12 + 12) == v1 )
    {
      v3 = gpHandleManager;
      v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v12 & 0xFFFFFF);
      v5 = *((_QWORD *)v3 + 2);
      v6 = v4;
      v7 = *(_DWORD *)(v5 + 2056);
      if ( v4 < v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        if ( v4 >= v7 )
          v8 = ((v4 - v7) >> 16) + 1;
        else
          v8 = 0;
        v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
        if ( v8 )
          v6 = ((1 - v8) << 16) - v7 + v4;
        if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
          if ( v10 )
          {
            if ( *(_WORD *)(v10 + 12) && *(struct _KTHREAD **)(v10 + 16) == KeGetCurrentThread() )
            {
              _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
              v2 = 1;
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
    if ( v13 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
  }
  return v2;
}
