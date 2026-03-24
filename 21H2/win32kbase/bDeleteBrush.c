/*
 * XREFs of bDeleteBrush @ 0x1C001C340
 * Callers:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001BC00 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C002D890 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0032310 (NtGdiDeleteObjectApp.c)
 *     GreDeleteObject @ 0x1C0038500 (GreDeleteObject.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CB9F8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x1C001BA00 (bDeleteSurface.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001CD44 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001CD78 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002C350 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002F290 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002FE60 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0030210 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00303A0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgRemoveObject @ 0x1C00311D0 (HmgRemoveObject.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0034CB0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0066EF4 (-vRemoveRef@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0082384 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C0098070 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C009AF04 (HmgFreeObjectAttr.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C00BE100 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C014D87C (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall bDeleteBrush(struct HOBJ__ *a1, int a2, int a3)
{
  ULONG_PTR v5; // rbx
  unsigned int v6; // r12d
  int v7; // esi
  _DWORD *v8; // r15
  _DWORD *v9; // r15
  int v10; // edx
  void *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edx
  _DWORD *v17; // [rsp+40h] [rbp-98h] BYREF
  int v18; // [rsp+48h] [rbp-90h]
  _DWORD *v19; // [rsp+60h] [rbp-78h]
  struct OBJECT *EntryObject; // [rsp+68h] [rbp-70h]
  _QWORD v21[13]; // [rsp+70h] [rbp-68h] BYREF

  v5 = 0LL;
  v6 = 1;
  v7 = 1;
  v8 = 0LL;
  if ( !a2 )
  {
    v17 = 0LL;
    v18 = 0;
    HANDLELOCK::bLockHobj((HANDLELOCK *)&v17, a1, 0x10u);
    if ( !v18 )
    {
LABEL_17:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
      goto LABEL_18;
    }
    v9 = v17;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *v17 & 0xFFFFFF);
    v8 = (_DWORD *)*((_QWORD *)v9 + 2);
    v19 = v8;
    if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v17) )
    {
      **((_DWORD **)EntryObject + 6) = 2;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        if ( v6 )
          HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
        v6 = 1;
        goto LABEL_17;
      }
      if ( (*v8 & 1) == 0 )
      {
        v10 = *((_DWORD *)EntryObject + 10) & 0x400;
        if ( (*((_DWORD *)EntryObject + 10) & 0x10) != 0
          && (!v10 || ((unsigned int)a1 & 0x7F0000) != 0x500000)
          && (unsigned int)bPEBCacheHandle(v10 != 0, v8, v17, &v17, 0LL) )
        {
          v7 = 0;
        }
        v6 = v7;
        goto LABEL_14;
      }
    }
    v7 = 0;
    goto LABEL_14;
  }
LABEL_18:
  if ( !v7 )
    return v6;
  if ( a3 )
  {
    if ( a3 != 3 )
      goto LABEL_24;
    v11 = HmgRemoveObjectImpl(a1, 0, 1, 2u, 16, 0LL);
  }
  else
  {
    v11 = (void *)HmgRemoveObject((_DWORD)a1, 0, 0, 0, 16, 0LL);
  }
  v5 = (ULONG_PTR)v11;
LABEL_24:
  if ( v5 )
  {
    v12 = *(_DWORD *)(v5 + 40);
    if ( (v12 & 0x400) != 0 )
    {
      v13 = *(_QWORD *)(v5 + 152);
      if ( v13 )
      {
        if ( (v12 & 0x4000) == 0 )
          Win32FreePool(v13);
      }
    }
    v14 = *(_QWORD *)(v5 + 24);
    if ( v14 )
      bDeleteSurface(v14);
    if ( *(_DWORD *)(v5 + 100) != -1 )
    {
      v15 = *(_DWORD *)(v5 + 40);
      if ( v15 >= 0 )
      {
        RBRUSH::vRemoveRef(*(_QWORD *)(v5 + 120), ((unsigned int)v15 >> 30) & 1);
        *(_QWORD *)(v5 + 120) = 0LL;
      }
    }
    if ( (*(_DWORD *)(v5 + 40) & 0x80u) != 0 )
      BRUSH::vDeleteIcmDIBs((BRUSH *)v5);
    if ( *(_QWORD *)(v5 + 136) )
      ReleaseReferenceCountedObjectHandle(2LL);
    FreeBrushMemory(v5);
    if ( !a2 && v8 )
      HmgFreeObjectAttr(v8);
  }
  else
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v21, (HBRUSH)a1);
    if ( !v21[0] || (*(_DWORD *)(v21[0] + 40LL) & 0x200) == 0 )
      v6 = 0;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v21);
  }
  return v6;
}
