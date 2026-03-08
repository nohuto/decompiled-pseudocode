/*
 * XREFs of HmgDecrementExclusiveReferenceCountEx @ 0x1C00499E0
 * Callers:
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0054D30 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HmgDecrementExclusiveReferenceCountEx(int *a1, int a2, int *a3)
{
  _DWORD *v4; // rdi
  unsigned int v6; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  GdiHandleManager *v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // rdx
  unsigned __int16 *v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v4 = 0LL;
  *a3 = 0;
  v6 = *a1;
  v8 = *a1;
  v23 = 0LL;
  v24 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)v6 | (v8 >> 8) & 0xFF0000, 0, a2, 1);
  if ( v24 )
  {
    if ( (*((_BYTE *)v23 + 15) & 8) == 0 || a1[2] || (v10 = 1, *((_WORD *)a1 + 6) != 1) )
      v10 = 0;
    *a3 = v10;
    _InterlockedDecrement(a1 + 3);
    v11 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
    v12 = *(GdiHandleManager **)(v11 + 8008);
    v13 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v11) + 24) + 8008LL);
    v14 = *(_DWORD *)v23 & 0xFFFFFF;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(*(GdiHandleEntryDirectory **)(v13 + 16), *v23, 1)
             + 13) == HIWORD(v14) )
          v14 = (unsigned __int16)v14;
      }
      else
      {
        v14 = *v23;
      }
    }
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      if ( v14 >= v16 )
      {
        v17 = *(_QWORD *)(v15 + 8LL * (((v14 - v16) >> 16) + 1) + 8);
        v14 += -65536 * ((v14 - v16) >> 16) - v16;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
      }
      if ( v14 < *(_DWORD *)(v17 + 20) )
        v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                        + 16LL * (unsigned __int8)v14
                        + 8);
    }
    v18 = GdiHandleManager::DecodeIndex(v12, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
    v19 = *((_QWORD *)v12 + 2);
    v20 = v18;
    v21 = *(_DWORD *)(v19 + 2056);
    if ( v18 < v21 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      if ( v18 >= v21 )
      {
        v22 = *(_QWORD *)(v19 + 8LL * (((v18 - v21) >> 16) + 1) + 8);
        v20 = -65536 * ((v18 - v21) >> 16) - v21 + v18;
      }
      else
      {
        v22 = *(_QWORD *)(v19 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v22 + 24 * v20 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
