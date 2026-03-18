/*
 * XREFs of HmgLockEx @ 0x1C00226A0
 * Callers:
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0018268 (-vCleanupRegions@@YAXK@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C0064440 (GreMakeBitmapNonStock.c)
 *     GreLockRegion @ 0x1C00BA430 (GreLockRegion.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00C18E0 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00D8EEC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  __int64 v5; // rdi
  int v6; // r15d
  char v7; // r12
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // r14
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned int v13; // edx
  __int64 v14; // r14
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  int v17; // ecx
  unsigned int v18; // ecx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v20; // edi
  __int64 v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // r8
  __int16 v24; // ax
  unsigned int v25; // ebx
  GdiHandleManager *v26; // rbp
  __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // r10
  int v35; // ebx
  __int64 CurrentThreadProcess; // rax
  int v37; // edx
  GdiHandleManager *v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  unsigned int v42; // r9d
  __int64 v43; // r8
  __int64 v44; // rdx
  char v45; // r8
  __int64 v46; // [rsp+20h] [rbp-68h]
  unsigned __int64 v47; // [rsp+28h] [rbp-60h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  _DWORD *v49; // [rsp+38h] [rbp-50h] BYREF
  int v50; // [rsp+40h] [rbp-48h]
  int v51; // [rsp+44h] [rbp-44h]
  __int64 v52; // [rsp+90h] [rbp+8h]
  __int64 v53; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v53 = 0LL;
  v5 = 0LL;
  v6 = a3;
  v7 = a2;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v53, a2, a3);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v35 = gSessionId,
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v35 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v46 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v46 = 0LL;
  }
  v9 = gpHandleManager;
  v50 = 1;
  v10 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v11 = *((_QWORD *)v9 + 2);
  v12 = v10;
  v13 = *(_DWORD *)(v11 + 2056);
  if ( v10 < v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
  {
    if ( v10 >= v13 )
    {
      v14 = *(_QWORD *)(v11 + 8LL * (((v10 - v13) >> 16) + 1) + 8);
      v12 = -65536 * ((v10 - v13) >> 16) - v13 + v10;
    }
    else
    {
      v14 = *(_QWORD *)(v11 + 8);
    }
    v15 = 0LL;
    if ( v12 < *(_DWORD *)(v14 + 20) )
    {
      v48 = 16LL * (unsigned __int8)v12;
      v47 = 8 * ((unsigned __int64)v12 >> 8);
      v52 = v48 + *(_QWORD *)(**(_QWORD **)(v14 + 24) + v47);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v52, 0LL);
      if ( v12 < *(_DWORD *)(v14 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + v47) + v48 + 8) )
      {
        v16 = 24LL * v12;
        *(_DWORD *)(*(_QWORD *)v14 + v16 + 8) |= 1u;
        v15 = (_DWORD *)(v16 + *(_QWORD *)v14);
      }
      else
      {
        ExReleasePushLockExclusiveEx(v52, 0LL);
        KeLeaveCriticalRegion();
      }
      v49 = v15;
      if ( v15 )
      {
        _m_prefetchw(v15 + 2);
        v17 = v15[2];
        v51 = v17;
        if ( !v6 )
        {
          v18 = v17 & 0xFFFFFFFE;
          if ( v18 != (v53 & 0xFFFFFFFC) && v18 && (!v46 || v18 != *(_DWORD *)(v46 + 8)) )
            goto LABEL_46;
          if ( (*((_BYTE *)v15 + 15) & 0x20) != 0 )
            goto LABEL_46;
        }
        if ( (*((_BYTE *)v15 + 15) & 0x40) == 0 )
          goto LABEL_17;
        v37 = *v15;
        v38 = gpHandleManager;
        v39 = GdiHandleManager::DecodeIndex(gpHandleManager, v37 & 0xFFFFFF);
        v40 = *((_QWORD *)v38 + 2);
        v41 = v39;
        v42 = *(_DWORD *)(v40 + 2056);
        if ( v39 >= v42 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16)
          || (v39 >= v42
            ? (v43 = *(_QWORD *)(v40 + 8LL * (((v39 - v42) >> 16) + 1) + 8),
               v41 = -65536 * ((v39 - v42) >> 16) - v42 + v39)
            : (v43 = *(_QWORD *)(v40 + 8)),
              (unsigned int)v41 >= *(_DWORD *)(v43 + 20)) )
        {
          v44 = 0LL;
        }
        else
        {
          v44 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v43 + 24) + 8 * (v41 >> 8)) + 16LL * (unsigned __int8)v41 + 8);
        }
        if ( !*(_WORD *)(v44 + 12) || *(struct _KTHREAD **)(v44 + 16) != KeGetCurrentThread() )
        {
LABEL_46:
          HANDLELOCK::vUnlock((HANDLELOCK *)&v49);
          if ( !v50 )
            return v5;
        }
        v15 = v49;
LABEL_17:
        if ( *((_BYTE *)v15 + 14) == v7
          && *((_WORD *)v15 + 6) == HIWORD(a1)
          && (!v6 || (*((_BYTE *)v15 + 15) & 0x20) != 0) )
        {
          CurrentThread = KeGetCurrentThread();
          v15 = v49;
          v20 = *v49 & 0xFFFFFF;
          if ( v20 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          *(unsigned __int16 *)v49,
                                          1)
                   + 13) == HIWORD(v20) )
                v20 = (unsigned __int16)v20;
            }
            else
            {
              v20 = *(unsigned __int16 *)v49;
            }
          }
          v21 = *((_QWORD *)gpHandleManager + 2);
          v22 = *(_DWORD *)(v21 + 2056);
          if ( v20 >= v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16)
            || (v20 >= v22
              ? (v23 = *(_QWORD *)(v21 + 8LL * (((v20 - v22) >> 16) + 1) + 8), v20 += -65536 * ((v20 - v22) >> 16) - v22)
              : (v23 = *(_QWORD *)(v21 + 8)),
                v20 >= *(_DWORD *)(v23 + 20)) )
          {
            v5 = 0LL;
          }
          else
          {
            v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v20 >> 8))
                           + 16LL * (unsigned __int8)v20
                           + 8);
          }
          v24 = *(_WORD *)(v5 + 12);
          if ( !v24 || *(struct _KTHREAD **)(v5 + 16) == CurrentThread )
          {
            *(_QWORD *)(v5 + 16) = CurrentThread;
            *(_WORD *)(v5 + 12) = v24 + 1;
          }
          else
          {
            v5 = 0LL;
          }
        }
        v25 = *v15 & 0xFFFFFF;
        if ( v25 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v25,
                                        1)
                 + 13) == HIWORD(v25) )
              v25 = (unsigned __int16)v25;
          }
          else
          {
            v25 = (unsigned __int16)v25;
          }
        }
        v26 = gpHandleManager;
        v27 = *((_QWORD *)gpHandleManager + 2);
        v28 = *(_DWORD *)(v27 + 2056);
        if ( v25 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
        {
          if ( v25 >= v28 )
          {
            v29 = *(_QWORD *)(v27 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
            v25 += -65536 * ((v25 - v28) >> 16) - v28;
          }
          else
          {
            v29 = *(_QWORD *)(v27 + 8);
          }
          if ( v25 < *(_DWORD *)(v29 + 20) )
            v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                            + 16LL * (unsigned __int8)v25
                            + 8);
        }
        v30 = (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000;
        if ( v30 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)*v4,
                                        1)
                 + 13) == HIWORD(v30) )
            {
              v30 = (unsigned __int16)v30;
            }
            else if ( *(_DWORD *)v26 > 0x10000u )
            {
              GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v26 + 2), (unsigned __int16)v30, v45);
            }
          }
          else
          {
            v30 = (unsigned __int16)*v4;
          }
        }
        v31 = *((_QWORD *)v26 + 2);
        v32 = *(_DWORD *)(v31 + 2056);
        if ( v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
        {
          if ( v30 >= v32 )
          {
            v33 = *(_QWORD *)(v31 + 8LL * (((v30 - v32) >> 16) + 1) + 8);
            v30 += -65536 * ((v30 - v32) >> 16) - v32;
          }
          else
          {
            v33 = *(_QWORD *)(v31 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v33 + 24LL * v30 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
            0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v5;
}
