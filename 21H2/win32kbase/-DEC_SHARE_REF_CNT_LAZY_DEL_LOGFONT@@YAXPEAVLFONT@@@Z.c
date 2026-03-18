/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0020AE0
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(struct HOBJ__ **a1)
{
  struct OBJECT *v2; // rsi
  struct HOBJ__ *v3; // r14
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ebp
  _DWORD *v7; // rdi
  char v8; // al
  unsigned int v9; // ebx
  GdiHandleManager *v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r10
  GdiHandleManager *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // rax
  char v25; // bl
  struct HOBJ__ *v26; // rdx
  __int64 v27; // rcx
  bool v28; // r8
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+38h] [rbp-30h]

  if ( !a1 )
    return;
  v2 = 0LL;
  v3 = *a1;
  v4 = (unsigned __int16)*a1;
  v5 = (unsigned int)*a1 >> 8;
  v29 = 0LL;
  v30 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v29, v4 | v5 & 0xFF0000, 0, 0, 1);
  if ( !v30 )
    return;
  v6 = *((_DWORD *)a1 + 2);
  v7 = (_DWORD *)v29;
  v8 = *(_BYTE *)(v29 + 14);
  if ( v8 == 5 )
  {
    v26 = a1[85];
    v27 = 0LL;
LABEL_36:
    TrackObjectReferenceDecrement(v27, v26);
    goto LABEL_5;
  }
  if ( v8 == 16 )
  {
    v26 = a1[17];
    v27 = 2LL;
    goto LABEL_36;
  }
LABEL_5:
  --*((_DWORD *)a1 + 2);
  v9 = *v7 & 0xFFFFFF;
  if ( v9 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v7,
                                  1)
           + 13) == HIWORD(v9) )
        v9 = (unsigned __int16)v9;
    }
    else
    {
      v9 = *(unsigned __int16 *)v7;
    }
  }
  v10 = gpHandleManager;
  v11 = *((_QWORD *)gpHandleManager + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( v9 >= v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16)
    || (v9 >= v12
      ? (v13 = *(_QWORD *)(v11 + 8LL * (((v9 - v12) >> 16) + 1) + 8), v9 += -65536 * ((v9 - v12) >> 16) - v12)
      : (v13 = *(_QWORD *)(v11 + 8)),
        v9 >= *(_DWORD *)(v13 + 20)) )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v9 >> 8))
                     + 16LL * (unsigned __int8)v9
                     + 8);
  }
  v15 = (unsigned __int16)*v14 | (*v14 >> 8) & 0xFF0000;
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v14,
                                  1)
           + 13) == HIWORD(v15) )
      {
        v15 = (unsigned __int16)v15;
      }
      else if ( *(_DWORD *)v10 > 0x10000u )
      {
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v10 + 2), (unsigned __int16)v15, v28);
      }
    }
    else
    {
      v15 = (unsigned __int16)*v14;
    }
  }
  v16 = *((_QWORD *)v10 + 2);
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
  if ( (unsigned __int16)v6 == 1 )
  {
    v29 = 0LL;
    v30 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v29, v3, 0xAu);
    if ( v30 )
    {
      v19 = gpHandleManager;
      v20 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v29 & 0xFFFFFF);
      v21 = *((_QWORD *)v19 + 2);
      v22 = v20;
      v23 = *(_DWORD *)(v21 + 2056);
      if ( v20 < v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
      {
        if ( v20 >= v23 )
        {
          v24 = *(_QWORD *)(v21 + 8LL * (((v20 - v23) >> 16) + 1) + 8);
          v22 = -65536 * (((unsigned int)v22 - v23) >> 16) - v23 + (unsigned int)v22;
        }
        else
        {
          v24 = *(_QWORD *)(v21 + 8);
        }
        if ( (unsigned int)v22 < *(_DWORD *)(v24 + 20) )
          v2 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8))
                                 + 16LL * (unsigned __int8)v22
                                 + 8);
      }
      v25 = *((_BYTE *)GdiHandleManager::GetEntryFromObject(v19, v2) + 15);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
      if ( (v25 & 2) != 0 && qword_1C029AFE0 )
        qword_1C029AFE0(v3, 0LL);
      if ( v30 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v29);
    }
  }
}
