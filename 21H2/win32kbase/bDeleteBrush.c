/*
 * XREFs of bDeleteBrush @ 0x1C00C82E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0021290 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0063670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DB8C8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C0019110 (bDeleteSurface.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E010 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0022F70 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00633F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C007FC7C (-vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0096FB8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     HmgFreeObjectAttr @ 0x1C00AD9C8 (HmgFreeObjectAttr.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00ADAA4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C00CD090 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, __int64 a3)
{
  int v3; // esi
  ULONG_PTR v5; // rbx
  unsigned int v6; // r13d
  int v7; // r15d
  __int64 v8; // r12
  _DWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r12
  _DWORD *v12; // rsi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v14; // rsi
  __int64 ProcessWow64Process; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  _DWORD *v27; // [rsp+40h] [rbp-A8h] BYREF
  int v28; // [rsp+48h] [rbp-A0h]
  _DWORD *v29; // [rsp+60h] [rbp-88h]
  _DWORD *v30; // [rsp+68h] [rbp-80h]
  struct OBJECT *EntryObject; // [rsp+70h] [rbp-78h]
  _QWORD v32[14]; // [rsp+78h] [rbp-70h] BYREF
  int v34; // [rsp+100h] [rbp+18h]

  v34 = a3;
  v3 = a3;
  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    v27 = 0LL;
    v28 = 0;
    LOBYTE(a3) = 16;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v27, a1, a3);
    if ( !v28 )
    {
LABEL_24:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
      goto LABEL_25;
    }
    v9 = v27;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v27 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    if ( v11 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
      v14 = CurrentProcessWin32Process;
      if ( !CurrentProcessWin32Process )
        KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
      ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
      v16 = *((unsigned int *)v14 + 73);
      v17 = *((_DWORD *)v14 + 73);
      if ( ProcessWow64Process )
        v12 = (_DWORD *)(v16 ^ (unsigned int)__ROR4__(v11, 32 - (v17 & 0x1F)));
      else
        v12 = (_DWORD *)(__ROR8__(v11, 64 - (v17 & 0x3Fu)) ^ v16);
    }
    else
    {
      v12 = 0LL;
    }
    v30 = v12;
    v8 = (__int64)v12;
    v29 = v12;
    if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v27) )
    {
      **((_DWORD **)EntryObject + 6) = 2;
    }
    else
    {
      if ( !v12 )
      {
LABEL_21:
        if ( v6 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
        v6 = 1;
        v3 = v34;
        goto LABEL_24;
      }
      if ( (*v12 & 1) == 0 )
      {
        v18 = *((_DWORD *)EntryObject + 10) & 0x400;
        if ( (*((_DWORD *)EntryObject + 10) & 0x10) != 0
          && (!v18 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v18 != 0, v12, v27, &v27, 0LL) )
        {
          v7 = 0;
        }
        v6 = v7;
        goto LABEL_21;
      }
    }
    v7 = 0;
    goto LABEL_21;
  }
LABEL_25:
  if ( !v7 )
    return v6;
  if ( (unsigned int)Feature_1827749177__private_IsEnabled() && v3 )
  {
    if ( v3 != 3 )
      goto LABEL_32;
    v20 = HmgRemoveObjectImpl(a1, 0, 1, 2, 16, 0LL);
  }
  else
  {
    v20 = HmgRemoveObject((__int64)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = v20;
LABEL_32:
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
      bDeleteSurface(v23);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v24 = *(_DWORD *)(v5 + 40);
      if ( v24 >= 0 )
      {
        RBRUSH::vRemoveRef(*(volatile signed __int32 **)(v5 + 120), ((unsigned int)v24 >> 30) & 1);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    v25 = *(_QWORD *)(v5 + 136);
    if ( v25 )
      ReleaseReferenceCountedObjectHandle(2LL, v25, v19);
    FreeBrushMemory(v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v32, (HBRUSH)a1);
    if ( !v32[0] || (*(_DWORD *)(v32[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v32);
  }
  return v6;
}
