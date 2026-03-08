/*
 * XREFs of bDeleteBrush @ 0x1C00D59D0
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001CC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001BD04 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001BD48 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0028810 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C0029640 (bDeleteSurface.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00438B0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgRemoveObject @ 0x1C0045C70 (HmgRemoveObject.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00542B0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00C1C1C (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00D43C0 (HmgFreeObjectAttr.c)
 *     Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C (Feature_1626422585__private_IsEnabledDeviceUsage.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C017E448 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C019A314 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // esi
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r12
  _DWORD *v11; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rsi
  __int64 ProcessWow64Process; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rcx
  int v24; // r8d
  volatile signed __int32 *v25; // rcx
  int v26; // r8d
  _DWORD *v28; // [rsp+68h] [rbp-70h] BYREF
  int v29; // [rsp+70h] [rbp-68h]
  _DWORD *v30; // [rsp+88h] [rbp-50h]
  _QWORD v31[9]; // [rsp+90h] [rbp-48h] BYREF

  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    v28 = 0LL;
    v29 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v28, a1, 16);
    if ( !v29 )
    {
LABEL_26:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
      goto LABEL_27;
    }
    v31[0] = HANDLELOCK::pObj((HANDLELOCK *)&v28);
    v10 = *((_QWORD *)v28 + 2);
    if ( v10 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v13 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( v13 )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*(_QWORD *)v13);
        v15 = *(unsigned int *)(v13 + 292);
        v16 = *(_DWORD *)(v13 + 292);
        if ( ProcessWow64Process )
          v11 = (_DWORD *)(v15 ^ (unsigned int)__ROR4__(v10, 32 - (v16 & 0x1F)));
        else
          v11 = (_DWORD *)(__ROR8__(v10, 64 - (v16 & 0x3Fu)) ^ v15);
LABEL_12:
        v8 = (__int64)v11;
        v30 = v11;
        if ( *((_DWORD *)HANDLELOCK::pObj((HANDLELOCK *)&v28) + 2) )
        {
          **(_DWORD **)(v31[0] + 48LL) = 2;
          v17 = 1;
LABEL_14:
          v7 = 0;
LABEL_23:
          if ( v17 )
            HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
          v6 = 1;
          goto LABEL_26;
        }
        if ( v11 )
        {
          v17 = 1;
          if ( (*v11 & 1) != 0 )
            goto LABEL_14;
          v18 = *(_DWORD *)(v31[0] + 40LL) & 0x400;
          if ( (*(_DWORD *)(v31[0] + 40LL) & 0x10) != 0
            && (!v18 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
            && (unsigned int)bPEBCacheHandle(v18 != 0, v11, v28, (__int64)&v28, 0LL) )
          {
            v7 = 0;
          }
        }
        v17 = v7;
        goto LABEL_23;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v11 = 0LL;
    goto LABEL_12;
  }
LABEL_27:
  if ( !v7 )
    return v6;
  if ( (unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() && a3 )
  {
    if ( a3 != 1 )
      goto LABEL_34;
    v20 = HmgRemoveObjectImpl(a1, 0, 1, 2, 16, 0LL);
  }
  else
  {
    v20 = HmgRemoveObject((__int64)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = v20;
LABEL_34:
  if ( v5 )
  {
    v21 = *(_DWORD *)(v5 + 40);
    if ( (v21 & 0x400) != 0 )
    {
      v22 = *(char **)(v5 + 152);
      if ( v22 )
      {
        if ( (v21 & 0x4000) == 0 )
          Win32FreePool(v22);
      }
    }
    v23 = *(_QWORD *)(v5 + 24);
    if ( v23 )
      bDeleteSurface(v23, v19);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v24 = *(_DWORD *)(v5 + 40);
      if ( v24 >= 0 )
      {
        v25 = *(volatile signed __int32 **)(v5 + 120);
        v26 = v24 & 0x40000000;
        if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v25, v26 != 0);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    if ( *(_QWORD *)(v5 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory((unsigned int *)v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v31, (HBRUSH)a1);
    if ( !v31[0] || (*(_DWORD *)(v31[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v31);
  }
  return v6;
}
