/*
 * XREFs of HmgLockEx @ 0x1C002F920
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C0015E30 (GreMakeBitmapNonStock.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001C150 (-vCleanupRegions@@YAXK@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00AACBC (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00C7DDC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002FDB0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002FF80 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLockEx(unsigned int a1, char a2, int a3)
{
  __int64 v4; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbx
  _QWORD *v19; // rax
  int v20; // ecx
  unsigned int v21; // ecx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v23; // edi
  __int64 v24; // rdx
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // r9
  __int16 v28; // ax
  unsigned int v29; // ebx
  GdiHandleManager *v30; // rsi
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r9
  _DWORD *v35; // rdx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r10
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v46; // edx
  GdiHandleManager *v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  unsigned int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // r10
  __int64 v54; // rdx
  __int64 v55; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-60h]
  __int64 v57; // [rsp+30h] [rbp-58h]
  _DWORD *v58; // [rsp+38h] [rbp-50h] BYREF
  int v59; // [rsp+40h] [rbp-48h]
  int v60; // [rsp+44h] [rbp-44h]
  __int64 v61; // [rsp+90h] [rbp+8h]

  v55 = 0LL;
  v4 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v55);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v9, v8),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v10 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = gpHandleManager;
  v59 = 1;
  v12 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v13 = *((_QWORD *)v11 + 2);
  v14 = v12;
  v15 = *(_DWORD *)(v13 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_53;
  v16 = ((v12 - v15) >> 16) + 1;
  if ( v12 < v15 )
    v16 = 0LL;
  v17 = *(_QWORD *)(v13 + 8 * v16 + 8);
  if ( (_DWORD)v16 )
    v14 = ((1 - (_DWORD)v16) << 16) - v15 + v12;
  v18 = 0LL;
  if ( v14 < *(_DWORD *)(v17 + 20) )
  {
    v57 = 16LL * (unsigned __int8)v14;
    v19 = *(_QWORD **)(v17 + 24);
    v56 = 8 * ((unsigned __int64)v14 >> 8);
    v61 = v57 + *(_QWORD *)(*v19 + v56);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v61, 0LL);
    if ( v14 < *(_DWORD *)(v17 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + v56) + v57 + 8) )
    {
      *(_DWORD *)(*(_QWORD *)v17 + 24LL * v14 + 8) |= 1u;
      v18 = 24LL * v14 + *(_QWORD *)v17;
    }
    else
    {
      ExReleasePushLockExclusiveEx(v61, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v58 = (_DWORD *)v18;
  if ( !v18 )
    goto LABEL_53;
  _m_prefetchw((const void *)(v18 + 8));
  v20 = *(_DWORD *)(v18 + 8);
  v60 = v20;
  if ( !a3 )
  {
    v21 = v20 & 0xFFFFFFFE;
    if ( v21 != (v55 & 0xFFFFFFFC) && v21 && (!v10 || v21 != *(_DWORD *)(v10 + 8)) )
      goto LABEL_54;
    if ( (*(_BYTE *)(v18 + 15) & 0x20) != 0 )
      goto LABEL_54;
  }
  if ( (*(_BYTE *)(v18 + 15) & 0x40) == 0 )
    goto LABEL_19;
  v46 = *(_DWORD *)v18;
  v47 = gpHandleManager;
  v48 = GdiHandleManager::DecodeIndex(gpHandleManager, v46 & 0xFFFFFF);
  v49 = *((_QWORD *)v47 + 2);
  v50 = v48;
  v51 = *(_DWORD *)(v49 + 2056);
  if ( v48 >= v51 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
    goto LABEL_74;
  v52 = ((v48 - v51) >> 16) + 1;
  if ( v48 < v51 )
    v52 = 0LL;
  v53 = *(_QWORD *)(v49 + 8 * v52 + 8);
  if ( (_DWORD)v52 )
    v50 = ((1 - (_DWORD)v52) << 16) - v51 + v48;
  if ( (unsigned int)v50 >= *(_DWORD *)(v53 + 20) )
LABEL_74:
    v54 = 0LL;
  else
    v54 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * (v50 >> 8)) + 16LL * (unsigned __int8)v50 + 8);
  if ( !*(_WORD *)(v54 + 12) || *(struct _KTHREAD **)(v54 + 16) != KeGetCurrentThread() )
  {
LABEL_54:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v58);
    if ( !v59 )
      return v4;
  }
  v18 = (__int64)v58;
LABEL_19:
  if ( *(_BYTE *)(v18 + 14) == a2 && *(_WORD *)(v18 + 12) == HIWORD(a1) && (!a3 || (*(_BYTE *)(v18 + 15) & 0x20) != 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = (__int64)v58;
    v23 = *v58 & 0xFFFFFF;
    if ( v23 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v58,
                                    1)
             + 13) == HIWORD(v23) )
          v23 = (unsigned __int16)v23;
      }
      else
      {
        v23 = *(unsigned __int16 *)v58;
      }
    }
    v24 = *((_QWORD *)gpHandleManager + 2);
    v25 = *(_DWORD *)(v24 + 2056);
    if ( v23 >= v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
      goto LABEL_83;
    v26 = ((v23 - v25) >> 16) + 1;
    if ( v23 < v25 )
      v26 = 0LL;
    v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
    if ( (_DWORD)v26 )
      v23 += ((1 - (_DWORD)v26) << 16) - v25;
    if ( v23 >= *(_DWORD *)(v27 + 20) )
LABEL_83:
      v4 = 0LL;
    else
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v23 >> 8))
                     + 16LL * (unsigned __int8)v23
                     + 8);
    v28 = *(_WORD *)(v4 + 12);
    if ( !v28 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
    {
      *(_QWORD *)(v4 + 16) = CurrentThread;
      *(_WORD *)(v4 + 12) = v28 + 1;
    }
    else
    {
      v4 = 0LL;
    }
  }
  v29 = *(_DWORD *)v18 & 0xFFFFFF;
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v29,
                                  1)
           + 13) == HIWORD(v29) )
        v29 = (unsigned __int16)v29;
    }
    else
    {
      v29 = (unsigned __int16)v29;
    }
  }
  v30 = gpHandleManager;
  v31 = *((_QWORD *)gpHandleManager + 2);
  v32 = *(_DWORD *)(v31 + 2056);
  if ( v29 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    goto LABEL_87;
  v33 = ((v29 - v32) >> 16) + 1;
  if ( v29 < v32 )
    v33 = 0LL;
  v34 = *(_QWORD *)(v31 + 8 * v33 + 8);
  if ( (_DWORD)v33 )
    v29 += ((1 - (_DWORD)v33) << 16) - v32;
  if ( v29 >= *(_DWORD *)(v34 + 20) )
LABEL_87:
    v35 = 0LL;
  else
    v35 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v34 + 24) + 8 * ((unsigned __int64)v29 >> 8))
                     + 16LL * (unsigned __int8)v29
                     + 8);
  v36 = (unsigned __int16)*v35;
  v37 = v36 | (*v35 >> 8) & 0xFF0000;
  if ( v37 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v36,
                                  1)
           + 13) == HIWORD(v37) )
        v37 = (unsigned __int16)v37;
    }
    else
    {
      v37 = (unsigned __int16)v36;
    }
  }
  v38 = *((_QWORD *)v30 + 2);
  v39 = *(_DWORD *)(v38 + 2056);
  if ( v37 < v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
  {
    v40 = ((v37 - v39) >> 16) + 1;
    if ( v37 < v39 )
      v40 = 0LL;
    v41 = *(_QWORD *)(v38 + 8 * v40 + 8);
    if ( (_DWORD)v40 )
      v37 += ((1 - (_DWORD)v40) << 16) - v39;
    *(_DWORD *)(*(_QWORD *)v41 + 24LL * v37 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v37 >> 8)) + 16LL * (unsigned __int8)v37,
      0LL);
    KeLeaveCriticalRegion();
  }
LABEL_53:
  KeLeaveCriticalRegion();
  return v4;
}
