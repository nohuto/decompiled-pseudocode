/*
 * XREFs of HmgShareLockCheckIgnoreStockBit @ 0x1C001FE90
 * Callers:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     EngLockSurface @ 0x1C0020170 (EngLockSurface.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     EngAssociateSurface @ 0x1C00B3FE0 (EngAssociateSurface.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheckIgnoreStockBit(unsigned int a1, char a2)
{
  _DWORD *v3; // r14
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // r8
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v11; // rdx
  unsigned int v12; // ebx
  GdiHandleManager *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r9d
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned int v19; // r8d
  __int64 v20; // r10
  bool v22; // r8
  unsigned __int16 *v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v24 )
  {
    v6 = v23;
    if ( *((_BYTE *)v23 + 14) == a2 && ((HIWORD(a1) ^ v23[6]) & 0xFFFFFF7F) == 0 )
    {
      v7 = *(_DWORD *)v23 & 0xFFFFFF;
      if ( v7 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v23,
                                      1)
               + 13) == HIWORD(v7) )
            v7 = (unsigned __int16)v7;
        }
        else
        {
          v7 = *v23;
        }
      }
      v8 = *((_QWORD *)gpHandleManager + 2);
      v9 = *(_DWORD *)(v8 + 2056);
      if ( v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16)
        || (v7 >= v9
          ? (v10 = *(_QWORD *)(v8 + 8LL * (((v7 - v9) >> 16) + 1) + 8), v7 += -65536 * ((v7 - v9) >> 16) - v9)
          : (v10 = *(_QWORD *)(v8 + 8)),
            v7 >= *(_DWORD *)(v10 + 20)) )
      {
        v5 = 0LL;
      }
      else
      {
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                       + 16LL * (unsigned __int8)v7
                       + 8);
      }
      ++*(_DWORD *)(v5 + 8);
      if ( a2 == 5 )
      {
        v11 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 680);
        if ( v11 && qword_1C028F9B8 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C028F9B8,
            v11,
            1);
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(2LL, *(_QWORD *)(v5 + 136));
      }
    }
    v12 = *v6 & 0xFFFFFF;
    if ( v12 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v6,
                                    1)
             + 13) == HIWORD(v12) )
          v12 = (unsigned __int16)v12;
      }
      else
      {
        v12 = *(unsigned __int16 *)v6;
      }
    }
    v13 = gpHandleManager;
    v14 = *((_QWORD *)gpHandleManager + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( v12 < v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v12 >= v15 )
      {
        v16 = *(_QWORD *)(v14 + 8LL * (((v12 - v15) >> 16) + 1) + 8);
        v12 += -65536 * ((v12 - v15) >> 16) - v15;
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
      }
      if ( v12 < *(_DWORD *)(v16 + 20) )
        v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                        + 16LL * (unsigned __int8)v12
                        + 8);
    }
    v17 = (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000;
    if ( v17 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v3,
                                    1)
             + 13) == HIWORD(v17) )
        {
          v17 = (unsigned __int16)v17;
        }
        else if ( *(_DWORD *)v13 > 0x10000u )
        {
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v13 + 2), (unsigned __int16)v17, v22);
        }
      }
      else
      {
        v17 = (unsigned __int16)*v3;
      }
    }
    v18 = *((_QWORD *)v13 + 2);
    v19 = *(_DWORD *)(v18 + 2056);
    if ( v17 < v19 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
    {
      if ( v17 >= v19 )
      {
        v20 = *(_QWORD *)(v18 + 8LL * (((v17 - v19) >> 16) + 1) + 8);
        v17 += -65536 * ((v17 - v19) >> 16) - v19;
      }
      else
      {
        v20 = *(_QWORD *)(v18 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v20 + 24LL * v17 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v17 >> 8)) + 16LL * (unsigned __int8)v17,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v5;
}
