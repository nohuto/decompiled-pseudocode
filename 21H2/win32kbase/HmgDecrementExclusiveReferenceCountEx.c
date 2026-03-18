/*
 * XREFs of HmgDecrementExclusiveReferenceCountEx @ 0x1C0021550
 * Callers:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00D9014 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall HmgDecrementExclusiveReferenceCountEx(int *a1, int a2, int *a3)
{
  _DWORD *v4; // rbx
  unsigned int v6; // eax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edi
  GdiHandleManager *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  bool v19; // r8
  unsigned __int16 *v20; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  *a3 = 0;
  v6 = *a1;
  v8 = *a1;
  v20 = 0LL;
  v21 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v6 | (v8 >> 8) & 0xFF0000, 0, a2, 1);
  if ( v21 )
  {
    if ( (*((_BYTE *)v20 + 15) & 8) == 0 || a1[2] || (v9 = 1, *((_WORD *)a1 + 6) != 1) )
      v9 = 0;
    *a3 = v9;
    _InterlockedDecrement(a1 + 3);
    v10 = *(_DWORD *)v20 & 0xFFFFFF;
    if ( v10 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v20,
                                    1)
             + 13) == HIWORD(v10) )
          v10 = (unsigned __int16)v10;
      }
      else
      {
        v10 = *v20;
      }
    }
    v11 = gpHandleManager;
    v12 = *((_QWORD *)gpHandleManager + 2);
    v13 = *(_DWORD *)(v12 + 2056);
    if ( v10 < v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    {
      if ( v10 >= v13 )
      {
        v14 = *(_QWORD *)(v12 + 8LL * (((v10 - v13) >> 16) + 1) + 8);
        v10 += -65536 * ((v10 - v13) >> 16) - v13;
      }
      else
      {
        v14 = *(_QWORD *)(v12 + 8);
      }
      if ( v10 < *(_DWORD *)(v14 + 20) )
        v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                        + 16LL * (unsigned __int8)v10
                        + 8);
    }
    v15 = (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000;
    if ( v15 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v15,
                                    1)
             + 13) == HIWORD(v15) )
        {
          v15 = (unsigned __int16)v15;
        }
        else if ( *(_DWORD *)v11 > 0x10000u )
        {
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v11 + 2), (unsigned __int16)v15, v19);
        }
      }
      else
      {
        v15 = (unsigned __int16)v15;
      }
    }
    v16 = *((_QWORD *)v11 + 2);
    v17 = *(_DWORD *)(v16 + 2056);
    if ( v15 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
    {
      if ( v15 >= v17 )
      {
        v18 = *(_QWORD *)(v16 + 8LL * (((v15 - v17) >> 16) + 1) + 8);
        v15 += -65536 * ((v15 - v17) >> 16) - v17;
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v15 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
