/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0019970 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  unsigned int v4; // ebp
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 v14; // r14
  unsigned int v15; // edx
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r12
  _QWORD *v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  char v23; // al
  int v25; // edi
  __int64 CurrentThreadProcess; // rax
  struct OBJECT *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+70h] [rbp+8h]
  __int64 v31; // [rsp+88h] [rbp+20h]

  v4 = (unsigned int)a2;
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  v28 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v28);
  if ( (!(unsigned __int8)KeIsAttachedProcess()
     || (v25 = *(_DWORD *)SGDGetUserSessionState(v8, v7, v9, v10),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         v25 == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v11 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v11 = 0LL;
  }
  v31 = v11;
  *((_DWORD *)this + 2) = 1;
  v12 = (unsigned __int16)v4 | (v4 >> 8) & 0xFF0000;
  v13 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 8008LL);
  if ( v12 >= 0x10000 )
  {
    if ( *(_DWORD *)v13 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v13 + 16),
                                  (unsigned __int16)v4,
                                  1)
           + 13) == ((unsigned __int16)v4 | (v4 >> 8) & 0xFF0000) >> 16 )
        v12 = (unsigned __int16)v4;
    }
    else
    {
      v12 = (unsigned __int16)v4;
    }
  }
  v14 = *(_QWORD *)(v13 + 16);
  v15 = *(_DWORD *)(v14 + 2056);
  if ( v12 >= v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
  {
    *(_QWORD *)this = 0LL;
  }
  else
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
    v17 = 0LL;
    if ( v12 < *(_DWORD *)(v16 + 20) )
    {
      v18 = 16LL * (unsigned __int8)v12;
      v19 = *(_QWORD **)(v16 + 24);
      v29 = 8 * ((unsigned __int64)v12 >> 8);
      v30 = v18 + *(_QWORD *)(*v19 + v29);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v30, 0LL);
      if ( v12 < *(_DWORD *)(v16 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + v29) + v18 + 8) )
      {
        *(_DWORD *)(24LL * v12 + *(_QWORD *)v16 + 8) |= 1u;
        v17 = 24LL * v12 + *(_QWORD *)v16;
      }
      else
      {
        ExReleasePushLockExclusiveEx(v30, 0LL);
        KeLeaveCriticalRegion();
      }
      v11 = v31;
    }
    *(_QWORD *)this = v17;
    if ( v17 )
    {
      _m_prefetchw((const void *)(v17 + 8));
      v20 = *(_DWORD *)(v17 + 8);
      v21 = v28;
      *((_DWORD *)this + 3) = v20;
      v22 = v20 & 0xFFFFFFFE;
      if ( v22 != (v21 & 0xFFFFFFFC) && v22 && (!v11 || v22 != *(_DWORD *)(v11 + 8))
        || (v23 = *(_BYTE *)(v17 + 15), (v23 & 0x20) != 0)
        || (v23 & 0x40) != 0
        && ((v27 = HANDLELOCK::pObj(this), !*((_WORD *)v27 + 6))
         || *((struct _KTHREAD **)v27 + 2) != KeGetCurrentThread()) )
      {
        HANDLELOCK::vUnlock(this);
      }
      goto LABEL_22;
    }
  }
  *((_DWORD *)this + 2) = 0;
  KeLeaveCriticalRegion();
LABEL_22:
  if ( *((_DWORD *)this + 2)
    && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != HIWORD(v4)) )
  {
    HANDLELOCK::vUnlock(this);
  }
  return *((unsigned int *)this + 2);
}
