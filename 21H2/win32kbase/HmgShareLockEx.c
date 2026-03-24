/*
 * XREFs of HmgShareLockEx @ 0x1C002D5E0
 * Callers:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003796C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C009915C (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 *     GreMarkDCUnreadable @ 0x1C00B6E28 (GreMarkDCUnreadable.c)
 *     bInitICM @ 0x1C029A608 (bInitICM.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002F590 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00302B0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockEx(unsigned int a1, char a2, int a3)
{
  __int16 v4; // ebx^2
  __int64 v5; // rbp
  _DWORD *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // r9
  unsigned int v13; // ebx
  GdiHandleManager *v14; // rdi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  _DWORD *v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r10
  unsigned __int16 *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  v25 = 0LL;
  v4 = HIWORD(a1);
  v26 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, a3);
  if ( v26 )
  {
    v7 = v25;
    if ( *((_BYTE *)v25 + 14) == a2 && v25[6] == v4 )
    {
      v8 = *(_DWORD *)v25 & 0xFFFFFF;
      if ( v8 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v25,
                                      1)
               + 13) == HIWORD(v8) )
            v8 = (unsigned __int16)v8;
        }
        else
        {
          v8 = *v25;
        }
      }
      v9 = *((_QWORD *)gpHandleManager + 2);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
        goto LABEL_42;
      v11 = ((v8 - v10) >> 16) + 1;
      if ( v8 < v10 )
        v11 = 0LL;
      v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
      if ( (_DWORD)v11 )
        v8 += ((1 - (_DWORD)v11) << 16) - v10;
      if ( v8 >= *(_DWORD *)(v12 + 20) )
LABEL_42:
        v5 = 0LL;
      else
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * ((unsigned __int64)v8 >> 8))
                       + 16LL * (unsigned __int8)v8
                       + 8);
      ++*(_DWORD *)(v5 + 8);
      if ( a2 == 5 )
      {
        TrackObjectReferenceIncrement(0LL, *(_QWORD *)(v5 + 680));
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v5 + 136));
      }
    }
    v13 = *v7 & 0xFFFFFF;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v7,
                                    1)
             + 13) == HIWORD(v13) )
          v13 = (unsigned __int16)v13;
      }
      else
      {
        v13 = *(unsigned __int16 *)v7;
      }
    }
    v14 = gpHandleManager;
    v15 = *((_QWORD *)gpHandleManager + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v13 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
      goto LABEL_47;
    v17 = ((v13 - v16) >> 16) + 1;
    if ( v13 < v16 )
      v17 = 0LL;
    v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v13 += ((1 - (_DWORD)v17) << 16) - v16;
    if ( v13 >= *(_DWORD *)(v18 + 20) )
LABEL_47:
      v19 = 0LL;
    else
      v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                       + 16LL * (unsigned __int8)v13
                       + 8);
    v20 = (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000;
    if ( v20 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v19,
                                    1)
             + 13) == HIWORD(v20) )
          v20 = (unsigned __int16)v20;
      }
      else
      {
        v20 = (unsigned __int16)*v19;
      }
    }
    v21 = *((_QWORD *)v14 + 2);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( v20 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      v23 = ((v20 - v22) >> 16) + 1;
      if ( v20 < v22 )
        v23 = 0LL;
      v24 = *(_QWORD *)(v21 + 8 * v23 + 8);
      if ( (_DWORD)v23 )
        v20 += ((1 - (_DWORD)v23) << 16) - v22;
      *(_DWORD *)(*(_QWORD *)v24 + 24LL * v20 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v5;
}
