/*
 * XREFs of EngUnlockSurface @ 0x1C00449E0
 * Callers:
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B1D0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004ABC0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  unsigned int hsurf; // r14d
  PVOID *p_pvScan0; // rbx
  struct OBJECT *v3; // rdi
  char *v4; // rbp
  unsigned int v5; // r12d
  GdiHandleManager *v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r15
  struct _ENTRY *Entry; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  _DWORD *v18; // r14
  char v19; // al
  PVOID v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  GdiHandleManager *v23; // rbp
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+38h] [rbp-40h]

  if ( pso )
  {
    hsurf = (unsigned int)pso->hsurf;
    p_pvScan0 = &pso[-1].pvScan0;
    v3 = 0LL;
    v4 = 0LL;
    v5 = (unsigned __int16)hsurf | (hsurf >> 8) & 0xFF0000;
    v6 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(pso) + 24) + 8008LL);
    v7 = GdiHandleManager::DecodeIndex(v6, v5);
    v8 = *((_QWORD *)v6 + 2);
    Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v8, v7, 0);
    if ( Entry )
    {
      if ( *((_BYTE *)Entry + 14) == 5 && *((_WORD *)Entry + 6) == HIWORD(hsurf) )
      {
        v10 = GdiHandleManager::DecodeIndex(v6, v5);
        v11 = *(_DWORD *)(v8 + 2056);
        v12 = v10;
        if ( v10 < v11 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        {
          if ( v10 >= v11 )
            v13 = ((v10 - v11) >> 16) + 1;
          else
            v13 = 0;
          v14 = *(_QWORD *)(v8 + 8LL * v13 + 8);
          if ( v13 )
            v12 = ((1 - v13) << 16) - v11 + v10;
          if ( (unsigned int)v12 < *(_DWORD *)(v14 + 20) )
            v4 = *(char **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
        }
      }
    }
    if ( p_pvScan0 == (PVOID *)v4 )
    {
      v15 = *(_DWORD *)p_pvScan0;
      v16 = *(_DWORD *)p_pvScan0;
      v31 = 0LL;
      v32 = 0;
      HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v15 | (v16 >> 8) & 0xFF0000, 0, 0, 1);
      if ( v32 )
      {
        v18 = (_DWORD *)v31;
        v19 = *(_BYTE *)(v31 + 14);
        if ( v19 == 5 )
        {
          v20 = p_pvScan0[85];
          v21 = 0LL;
        }
        else
        {
          if ( v19 != 16 )
            goto LABEL_17;
          v20 = p_pvScan0[17];
          v21 = 2LL;
        }
        TrackObjectReferenceDecrement(v21, v20);
LABEL_17:
        --*((_DWORD *)p_pvScan0 + 2);
        v22 = *(_QWORD *)(SGDGetSessionState(v17) + 24);
        v23 = *(GdiHandleManager **)(v22 + 8008);
        v24 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v22) + 24) + 8008LL);
        v25 = GdiHandleManager::DecodeIndex(v24, *v18 & 0xFFFFFF);
        v26 = *((_QWORD *)v24 + 2);
        v27 = v25;
        v28 = *(_DWORD *)(v26 + 2056);
        if ( v25 < v28 + ((*(unsigned __int16 *)(v26 + 2) + 0xFFFF) << 16) )
        {
          if ( v25 >= v28 )
            v29 = ((v25 - v28) >> 16) + 1;
          else
            v29 = 0;
          v30 = *(_QWORD *)(v26 + 8LL * v29 + 8);
          if ( v29 )
            v27 = ((1 - v29) << 16) - v28 + (unsigned int)v27;
          if ( (unsigned int)v27 < *(_DWORD *)(v30 + 20) )
            v3 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v30 + 24) + 8 * (v27 >> 8))
                                   + 16LL * (unsigned __int8)v27
                                   + 8);
        }
        GdiHandleManager::ReleaseEntryLock(v23, v3);
        KeLeaveCriticalRegion();
      }
    }
  }
}
