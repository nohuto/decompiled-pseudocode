/*
 * XREFs of EngUnlockSurface @ 0x1C00205F0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C016E370 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  unsigned int hsurf; // ebx
  struct OBJECT *p_pvScan0; // rdi
  GdiHandleManager *v3; // r13
  _DWORD *v4; // r14
  char *v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rsi
  struct _ENTRY *Entry; // rax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // edx
  int *v14; // rbx
  int v15; // edx
  GdiHandleManager *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-40h]

  if ( pso )
  {
    hsurf = (unsigned int)pso->hsurf;
    p_pvScan0 = (struct OBJECT *)&pso[-1].pvScan0;
    v3 = gpHandleManager;
    v4 = 0LL;
    v5 = 0LL;
    v6 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000);
    v7 = *((_QWORD *)v3 + 2);
    Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v7, v6, 0);
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) == 5 && *((_WORD *)Entry + 6) == HIWORD(hsurf) )
      {
        v9 = GdiHandleManager::DecodeIndex(v3, (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000);
        v10 = *(_DWORD *)(v7 + 2056);
        if ( v9 < v10 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
        {
          if ( v9 >= v10 )
          {
            v11 = *(_QWORD *)(v7 + 8LL * (((v9 - v10) >> 16) + 1) + 8);
            v9 += -65536 * ((v9 - v10) >> 16) - v10;
          }
          else
          {
            v11 = *(_QWORD *)(v7 + 8);
          }
          if ( v9 < *(_DWORD *)(v11 + 20) )
            v5 = *(char **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                          + 16LL * (unsigned __int8)v9
                          + 8);
        }
      }
    }
    if ( p_pvScan0 == (struct OBJECT *)v5 )
    {
      v12 = *(_DWORD *)p_pvScan0;
      v13 = *(_DWORD *)p_pvScan0;
      v27 = 0LL;
      v28 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v12 | (v13 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v28 )
      {
        v14 = (int *)v27;
        TrackHmgrReferenceDecrement(*(_BYTE *)(v27 + 14), p_pvScan0);
        --*((_DWORD *)p_pvScan0 + 2);
        v15 = *v14;
        v16 = gpHandleManager;
        v17 = GdiHandleManager::DecodeIndex(gpHandleManager, v15 & 0xFFFFFF);
        v18 = *((_QWORD *)v16 + 2);
        v19 = v17;
        v20 = *(_DWORD *)(v18 + 2056);
        if ( v17 < v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
        {
          if ( v17 >= v20 )
          {
            v21 = *(_QWORD *)(v18 + 8LL * (((v17 - v20) >> 16) + 1) + 8);
            v19 = -65536 * ((v17 - v20) >> 16) - v20 + v17;
          }
          else
          {
            v21 = *(_QWORD *)(v18 + 8);
          }
          if ( (unsigned int)v19 < *(_DWORD *)(v21 + 20) )
            v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
        }
        v22 = GdiHandleManager::DecodeIndex(v16, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
        v23 = *((_QWORD *)v16 + 2);
        v24 = v22;
        v25 = *(_DWORD *)(v23 + 2056);
        if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
        {
          if ( v22 >= v25 )
          {
            v26 = *(_QWORD *)(v23 + 8LL * (((v22 - v25) >> 16) + 1) + 8);
            v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22;
          }
          else
          {
            v26 = *(_QWORD *)(v23 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v26 + 24 * v24 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24,
            0LL);
          KeLeaveCriticalRegion();
        }
        KeLeaveCriticalRegion();
      }
    }
  }
}
