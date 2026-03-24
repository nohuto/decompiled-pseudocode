/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031810
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001D0C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x1C001D7B0 (bDeleteBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C002E710 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002ED00 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgMarkLazyDelete @ 0x1C0034A50 (HmgMarkLazyDelete.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  char v3; // r12
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  GdiHandleManager *v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  char v21; // al
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+20h] [rbp-48h]
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v6 = 0LL;
  v37 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v37);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (CurrentProcess = PsGetCurrentProcess(v9, v8),
         ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v33 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v33 = 0LL;
  }
  *((_DWORD *)this + 2) = 1;
  v10 = gpHandleManager;
  v11 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  if ( v11 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == ((unsigned __int16)v4 | (v4 >> 8) & 0xFF0000) >> 16 )
        v11 = (unsigned __int16)v4;
    }
    else
    {
      v11 = (unsigned __int16)v4;
    }
  }
  v12 = *((_QWORD *)v10 + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v11 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v14 = ((v11 - v13) >> 16) + 1;
    if ( v11 < v13 )
      v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
    if ( (_DWORD)v14 )
      v11 += ((1 - (_DWORD)v14) << 16) - v13;
    v16 = 0LL;
    if ( v11 < *(_DWORD *)(v15 + 20) )
    {
      v17 = 16LL * (unsigned __int8)v11;
      v34 = 8 * ((unsigned __int64)v11 >> 8);
      v35 = v17 + *(_QWORD *)(**(_QWORD **)(v15 + 24) + v34);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v35, 0LL);
      if ( v11 < *(_DWORD *)(v15 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + v34) + v17 + 8) )
      {
        *(_DWORD *)(*(_QWORD *)v15 + 24LL * v11 + 8) |= 1u;
        v16 = 24LL * v11 + *(_QWORD *)v15;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v35, 0LL);
        KeLeaveCriticalRegion();
      }
      v3 = a3;
    }
    *(_QWORD *)this = v16;
    if ( v16 )
    {
      _m_prefetchw((const void *)(v16 + 8));
      v18 = *(_DWORD *)(v16 + 8);
      v19 = v37;
      *((_DWORD *)this + 3) = v18;
      v20 = v18 & 0xFFFFFFFE;
      if ( v20 != (v19 & 0xFFFFFFFC) && v20 && (!v33 || v20 != *(_DWORD *)(v33 + 8)) )
        goto LABEL_51;
      v21 = *(_BYTE *)(v16 + 15);
      if ( (v21 & 0x20) != 0 )
        goto LABEL_51;
      if ( (v21 & 0x40) != 0 )
      {
        v26 = gpHandleManager;
        v27 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v16 & 0xFFFFFF);
        v28 = *((_QWORD *)v26 + 2);
        v29 = v27;
        v30 = *(_DWORD *)(v28 + 2056);
        if ( v27 < v30 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
        {
          v31 = ((v27 - v30) >> 16) + 1;
          if ( v27 < v30 )
            v31 = 0LL;
          v32 = *(_QWORD *)(v28 + 8 * v31 + 8);
          if ( (_DWORD)v31 )
            v29 = ((1 - (_DWORD)v31) << 16) - v30 + (unsigned int)v29;
          if ( (unsigned int)v29 < *(_DWORD *)(v32 + 20) )
            v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + 8 * (v29 >> 8)) + 16LL * (unsigned __int8)v29 + 8);
        }
        if ( !*(_WORD *)(v6 + 12) || *(struct _KTHREAD **)(v6 + 16) != KeGetCurrentThread() )
LABEL_51:
          HANDLELOCK::vUnlock(this);
      }
      goto LABEL_24;
    }
  }
  *((_DWORD *)this + 2) = 0;
  KeLeaveCriticalRegion();
LABEL_24:
  result = *((unsigned int *)this + 2);
  if ( (_DWORD)result && (*(_BYTE *)(*(_QWORD *)this + 14LL) != v3 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v4)) )
  {
    HANDLELOCK::vUnlock(this);
    return *((unsigned int *)this + 2);
  }
  return result;
}
