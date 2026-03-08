/*
 * XREFs of bDeleteRegion @ 0x1C0053FA0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C006DC30 (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0045C0C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C004B500 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0051CB0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00542B0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall bDeleteRegion(HRGN a1)
{
  volatile signed __int32 *v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r15d
  int v4; // r12d
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  volatile signed __int32 *v18; // rdx
  __int64 v19; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // r14
  __int64 ProcessWow64Process; // rax
  int v23; // ecx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  int v28; // [rsp+58h] [rbp-28h]
  PVOID Entry[2]; // [rsp+68h] [rbp-18h] BYREF
  int v30; // [rsp+78h] [rbp-8h]
  unsigned int v31; // [rsp+C8h] [rbp+48h] BYREF
  struct GdiHandleEntryTable *v32; // [rsp+D0h] [rbp+50h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)Entry, a1, 0, 0);
  v1 = (volatile signed __int32 *)Entry[0];
  if ( !Entry[0] || *((_DWORD *)Entry[0] + 19) )
    goto LABEL_46;
  v2 = *(_DWORD *)Entry[0];
  v3 = 1;
  v27 = 0LL;
  v28 = 0;
  v4 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)v2 | (v2 >> 8) & 0xFF0000, 1, 0, 0);
  v6 = v28;
  if ( !v28 )
    goto LABEL_39;
  v7 = v27;
  if ( *(_BYTE *)(v27 + 14) != 4 || *(_WORD *)(v27 + 12) != HIWORD(v2) )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    v6 = v28;
  }
  if ( !v6 )
  {
LABEL_39:
    if ( (unsigned int)RGNOBJAPI::bDeleteHandle((struct HOBJ__ **)Entry) )
    {
      REGION::vDeleteREGION(Entry[0]);
      Entry[0] = 0LL;
      v1 = 0LL;
      if ( v5 )
        HmgFreeObjectAttr(v5);
      goto LABEL_33;
    }
    v1 = (volatile signed __int32 *)Entry[0];
LABEL_46:
    v3 = 0;
    goto LABEL_33;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
  v9 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)v8,
         (unsigned __int16)*v1 | ((unsigned __int32)*v1 >> 8) & 0xFF0000);
  v32 = 0LL;
  v31 = 0;
  v10 = *(_QWORD *)(v8 + 16);
  v11 = v9;
  v12 = 0LL;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex((GdiHandleEntryDirectory *)v10, v9, &v32, &v31)
    && v31 < *((_DWORD *)v32 + 5)
    && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v32 + 3) + 8 * ((unsigned __int64)v31 >> 8))
                 + 16LL * (unsigned __int8)v31
                 + 8) )
  {
    v12 = *(_QWORD *)v32 + 24LL * v31;
  }
  v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v8, v11);
  v14 = *(_DWORD *)(v10 + 2056);
  v15 = v14 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
  v16 = v13;
  if ( v13 >= (unsigned int)v15 )
    goto LABEL_45;
  if ( v13 >= v14 )
    v15 = ((v13 - v14) >> 16) + 1;
  else
    v15 = 0LL;
  v17 = *(_QWORD *)(v10 + 8LL * (unsigned int)v15 + 8);
  if ( (_DWORD)v15 )
    v16 = ((1 - (_DWORD)v15) << 16) - v14 + v13;
  if ( (unsigned int)v16 >= *(_DWORD *)(v17 + 20) )
  {
LABEL_45:
    v18 = 0LL;
  }
  else
  {
    v15 = 2LL * (unsigned __int8)v16;
    v18 = *(volatile signed __int32 **)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v16 >> 8))
                                      + 16LL * (unsigned __int8)v16
                                      + 8);
  }
  if ( v18 != v1 )
    v12 = 0LL;
  v19 = *(_QWORD *)(v12 + 16);
  if ( !v19 )
    goto LABEL_23;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
  v21 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
LABEL_23:
    v5 = 0LL;
LABEL_24:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    goto LABEL_30;
  }
  ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
  v23 = *((_DWORD *)v21 + 73);
  if ( ProcessWow64Process )
    v24 = (unsigned int)__ROR4__(v19, 32 - (v23 & 0x1F));
  else
    v24 = __ROR8__(v19, 64 - (v23 & 0x3Fu));
  v5 = *((unsigned int *)v21 + 73) ^ v24;
  if ( !v5 )
    goto LABEL_24;
  v25 = bPEBCacheHandle(2LL, v5, v12, &v27, Entry);
  v1 = (volatile signed __int32 *)Entry[0];
  v4 = v25;
  if ( !v25 )
    goto LABEL_24;
LABEL_30:
  if ( v28 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
  if ( !v4 )
    goto LABEL_39;
LABEL_33:
  if ( !v30 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)Entry);
  if ( v1 )
    _InterlockedDecrement(v1 + 3);
  return v3;
}
