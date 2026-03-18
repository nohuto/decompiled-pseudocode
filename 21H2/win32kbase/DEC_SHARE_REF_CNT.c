/*
 * XREFs of DEC_SHARE_REF_CNT @ 0x1C0021390
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C002F514 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0061D70 (bMigrateSurfaceForConversion.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00633F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0063670 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00D8E60 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEA.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00D8EC0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXP.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00DA46C (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00DA4A0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall DEC_SHARE_REF_CNT(unsigned int *a1)
{
  unsigned int v1; // eax
  unsigned int v3; // edx
  _DWORD *v4; // rbx
  unsigned int v5; // ebp
  _DWORD *v6; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  GdiHandleManager *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  int v23; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = *a1;
  v4 = 0LL;
  v22 = 0LL;
  v23 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v22, (unsigned __int16)v1 | (v3 >> 8) & 0xFF0000, 0, 0, 1);
  if ( !v23 )
    return 0LL;
  v5 = a1[2];
  v6 = (_DWORD *)v22;
  v7 = *(_BYTE *)(v22 + 14);
  if ( v7 == 5 )
  {
    v8 = *((_QWORD *)a1 + 85);
    v9 = 0LL;
LABEL_4:
    TrackObjectReferenceDecrement(v9, v8);
    goto LABEL_5;
  }
  if ( v7 == 16 )
  {
    v8 = *((_QWORD *)a1 + 17);
    v9 = 2LL;
    goto LABEL_4;
  }
LABEL_5:
  --a1[2];
  v10 = gpHandleManager;
  v11 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
  v12 = *((_QWORD *)v10 + 2);
  v13 = v11;
  v14 = *(_DWORD *)(v12 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(_QWORD *)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v13 = -65536 * ((v11 - v14) >> 16) - v14 + v11;
    }
    else
    {
      v15 = *(_QWORD *)(v12 + 8);
    }
    if ( (unsigned int)v13 < *(_DWORD *)(v15 + 20) )
      v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v13 >> 8)) + 16LL * (unsigned __int8)v13 + 8);
  }
  v16 = GdiHandleManager::DecodeIndex(v10, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
  v17 = *((_QWORD *)v10 + 2);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v16 >= v19 )
    {
      v20 = *(_QWORD *)(v17 + 8LL * (((v16 - v19) >> 16) + 1) + 8);
      v18 = -65536 * ((v16 - v19) >> 16) - v19 + v16;
    }
    else
    {
      v20 = *(_QWORD *)(v17 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v20 + 24 * v18 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
