/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0041980
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C003F908 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C009A7B8 (--1EPALOBJ@@QEAA@XZ.c)
 *     bDeleteFont @ 0x1C00C2308 (bDeleteFont.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00D1560 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BCC0 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HDC a1)
{
  unsigned int v3; // r15d
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r10
  unsigned int v9; // ebp
  unsigned int v10; // edx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  int v24; // edx
  _BYTE v25[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  struct _ERESOURCE *v28; // [rsp+98h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned int)a1 >> 16;
  v4 = BYTE2(a1) & 0x1F;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v6 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v7 = *(_QWORD *)(v5 + 8008);
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v7 > 0x10000u )
    {
      v5 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *(GdiHandleEntryDirectory **)(v7 + 16),
                                  (unsigned __int16)a1,
                                  1)
           + 13);
      if ( (_DWORD)v5 == HIWORD(v6) )
        v6 = (unsigned __int16)a1;
    }
    else
    {
      v6 = (unsigned __int16)a1;
    }
  }
  v8 = *(_QWORD *)(v7 + 16);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 2056);
  if ( v6 < v10 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    if ( v6 >= v10 )
    {
      v5 = ((v6 - v10) >> 16) + 1;
      v11 = *(_QWORD *)(v8 + 8 * v5 + 8);
      v6 += -65536 * ((v6 - v10) >> 16) - v10;
    }
    else
    {
      v11 = *(_QWORD *)(v8 + 8);
    }
    v12 = 0LL;
    if ( v6 < *(_DWORD *)(v11 + 20) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                     + 16LL * (unsigned __int8)v6
                     + 8);
      if ( v5 )
      {
        v5 = 3LL * v6;
        v12 = *(_QWORD *)v11 + 24LL * v6;
      }
    }
    if ( v12 )
    {
      v5 = *(unsigned __int8 *)(v12 + 14);
      if ( (_DWORD)v5 == v4 && *(_WORD *)(v12 + 12) == (_WORD)v3 && (*(_DWORD *)(v12 + 8) & 0xFFFFFFFE) == 0 )
      {
        LOBYTE(v9) = a1 != 0LL;
        return v9;
      }
    }
  }
  if ( v4 == 5 )
  {
    v18 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v19 = *(_QWORD *)(v18 + 80);
    if ( v19 )
      ExEnterPriorityRegionAndAcquireResourceShared(v19);
    v20 = *(_QWORD *)(v18 + 80);
    v21 = *(_QWORD *)(SGDGetSessionState(v19) + 24);
    if ( *(_DWORD *)(v21 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v21,
        (unsigned int)&LockAcquireShared,
        v22,
        v20,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v25);
    LOBYTE(v23) = 5;
    v26 = 0LL;
    v26 = HmgShareLockCheckIgnoreStockBit(a1, v23);
    if ( v26 )
      v9 = SURFREF::bDeleteSurface((SURFREF *)v25, v24);
    SURFREF::~SURFREF((SURFREF *)v25);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    return v9;
  }
  v13 = v4 - 1;
  if ( !v13 )
    return GrepDeleteDC(a1, 0);
  v14 = v13 - 3;
  if ( !v14 )
    return bDeleteRegion((HRGN)a1);
  v15 = v14 - 4;
  if ( !v15 )
  {
    v17 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 40LL);
    v28 = v17;
    if ( v17 )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v17);
    }
    EPALOBJ::EPALOBJ((EPALOBJ *)&v27, (HPALETTE)a1);
    if ( v27 && (*(_DWORD *)(v27 + 24) & 0x1000000) == 0 )
      v9 = XEPALOBJ::bDeletePalette(&v27, 0LL);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v27);
    SEMOBJ::vUnlock((SEMOBJ *)&v28);
    return v9;
  }
  v16 = v15 - 2;
  if ( !v16 )
    return bDeleteFont(a1, 0LL);
  if ( v16 == 6 )
    return bDeleteBrush((HBRUSH)a1);
  return 0LL;
}
