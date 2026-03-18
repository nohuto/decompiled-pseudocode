/*
 * XREFs of HmgShareLockCheck @ 0x1C0020DC0
 * Callers:
 *     GreSetBitmapOwner @ 0x1C0019F20 (GreSetBitmapOwner.c)
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     GreDCSelectBrush @ 0x1C001DC40 (GreDCSelectBrush.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C001EEA0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0063428 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDeletePalette @ 0x1C0093780 (bDeletePalette.c)
 *     GreDCSelectPen @ 0x1C0098770 (GreDCSelectPen.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00DB63C (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  _DWORD *v3; // r14
  __int16 v4; // ebx^2
  __int64 v5; // rsi
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // ebx
  GdiHandleManager *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // r8
  unsigned __int16 *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = HIWORD(a1);
  v24 = 0LL;
  v25 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v25 )
    return v5;
  v6 = v24;
  if ( *((_BYTE *)v24 + 14) == a2 && v24[6] == v4 )
  {
    v7 = *(_DWORD *)v24 & 0xFFFFFF;
    if ( v7 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v24,
                                    1)
             + 13) == HIWORD(v7) )
          v7 = (unsigned __int16)v7;
      }
      else
      {
        v7 = *v24;
      }
    }
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    if ( v7 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16)
      || (v7 >= v9
        ? (v10 = *(_QWORD *)(v8 + 8LL * (((v7 - v9) >> 16) + 1) + 8), v7 += -65536 * ((v7 - v9) >> 16) - v9)
        : (v10 = *(_QWORD *)(v8 + 8)),
          v7 >= *(_DWORD *)(v10 + 20)) )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v7 >> 8))
                     + 16LL * (unsigned __int8)v7
                     + 8);
    }
    ++*(_DWORD *)(v5 + 8);
    if ( a2 == 5 )
    {
      v21 = *(_QWORD *)(v5 + 680);
      v22 = 0LL;
    }
    else
    {
      if ( a2 != 16 )
        goto LABEL_14;
      v21 = *(_QWORD *)(v5 + 136);
      v22 = 2LL;
    }
    TrackObjectReferenceIncrement(v22, v21);
  }
LABEL_14:
  v11 = *v6 & 0xFFFFFF;
  if ( v11 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v6,
                                  1)
           + 13) == HIWORD(v11) )
        v11 = (unsigned __int16)v11;
    }
    else
    {
      v11 = *(unsigned __int16 *)v6;
    }
  }
  v12 = gpHandleManager;
  v13 = *((_QWORD *)gpHandleManager + 2);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v11 < v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
  {
    if ( v11 >= v14 )
    {
      v15 = *(_QWORD *)(v13 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
      v11 += -65536 * ((v11 - v14) >> 16) - v14;
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
    }
    if ( v11 < *(_DWORD *)(v15 + 20) )
      v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                      + 16LL * (unsigned __int8)v11
                      + 8);
  }
  v16 = (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000;
  if ( v16 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v3,
                                  1)
           + 13) == HIWORD(v16) )
      {
        v16 = (unsigned __int16)v16;
      }
      else if ( *(_DWORD *)v12 > 0x10000u )
      {
        GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v12 + 2), (unsigned __int16)v16, v23);
      }
    }
    else
    {
      v16 = (unsigned __int16)*v3;
    }
  }
  v17 = *((_QWORD *)v12 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v16 < v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    if ( v16 >= v18 )
    {
      v19 = *(_QWORD *)(v17 + 8LL * (((v16 - v18) >> 16) + 1) + 8);
      v16 += -65536 * ((v16 - v18) >> 16) - v18;
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v19 + 24LL * v16 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * ((unsigned __int64)v16 >> 8)) + 16LL * (unsigned __int8)v16,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v5;
}
