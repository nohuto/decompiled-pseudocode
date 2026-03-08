/*
 * XREFs of GrepDeleteDC @ 0x1C00549D0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0014BB4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreGetClipBox @ 0x1C001AB40 (GreGetClipBox.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0047D20 (NtGdiDeleteObjectApp.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C0054D30 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C006F338 (-vCleanupDCs@@YAXK@Z.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B5B70 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C00C4700 (GreDeleteDC.c)
 * Callees:
 *     UserReleaseDC @ 0x1C003DB80 (UserReleaseDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0054DA0 (--1DCOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C017E500 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0185B1C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall GrepDeleteDC(HDC a1, unsigned int a2)
{
  unsigned int v2; // esi
  HDC v4; // r15
  __int64 v5; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  DC *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 v14; // r15
  unsigned int v15; // r12d
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  struct _DC_ATTR *v24; // rbx
  int v25; // ebx
  int v26; // eax
  __int64 ProcessWow64Process; // rax
  int v29; // ecx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _DWORD *v34; // [rsp+50h] [rbp-20h]
  DC *v35; // [rsp+58h] [rbp-18h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h]
  unsigned int v38; // [rsp+C0h] [rbp+50h]

  v2 = 0;
  v36 = 0LL;
  v4 = a1;
  v35 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 3192LL)
    || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5)) == 0LL
    || !*CurrentProcessWin32Process )
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v35, v4);
    goto LABEL_66;
  }
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v35, v4);
  v9 = v35;
  if ( !v35 )
  {
LABEL_70:
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v35);
    return 0LL;
  }
  if ( (*((_DWORD *)v35 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v36) )
    {
LABEL_32:
      *((_DWORD *)v9 + 11) |= 2u;
      v9 = v35;
      LODWORD(v36) = 1;
      goto LABEL_33;
    }
    v10 = SGDGetSessionState(v8);
    v9 = v35;
    v11 = *(_QWORD *)(v10 + 24);
    v12 = *(_QWORD *)(v11 + 8008);
    v13 = (unsigned __int16)*(_DWORD *)v35 | (*(_DWORD *)v35 >> 8) & 0xFF0000;
    v34 = (_DWORD *)v12;
    if ( v13 >= 0x10000 )
    {
      if ( *(_DWORD *)v12 > 0x10000u )
      {
        v11 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *(GdiHandleEntryDirectory **)(v12 + 16),
                                     (unsigned __int16)*(_DWORD *)v35,
                                     1)
              + 13);
        if ( (_DWORD)v11 == HIWORD(v13) )
          v13 = (unsigned __int16)v13;
      }
      else
      {
        v13 = (unsigned __int16)*(_DWORD *)v35;
      }
    }
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_DWORD *)(v14 + 2056);
    v16 = v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16);
    v38 = v16;
    if ( v13 >= v16 )
    {
      v19 = 0LL;
    }
    else
    {
      if ( v13 >= v15 )
      {
        v11 = ((v13 - v15) >> 16) + 1;
        v17 = *(_QWORD *)(v14 + 8 * v11 + 8);
        v18 = v13 + -65536 * ((v13 - v15) >> 16) - v15;
      }
      else
      {
        v17 = *(_QWORD *)(v14 + 8);
        v18 = v13;
      }
      v19 = 0LL;
      if ( (unsigned int)v18 < *(_DWORD *)(v17 + 20) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
        if ( v11 )
        {
          v11 = 3LL * (unsigned int)v18;
          v19 = *(_QWORD *)v17 + 24LL * (unsigned int)v18;
        }
      }
    }
    if ( v13 >= 0x10000 )
    {
      v11 = (__int64)v34;
      if ( *v34 > 0x10000u )
      {
        v11 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     (GdiHandleEntryDirectory *)v14,
                                     (unsigned __int16)v13,
                                     1)
              + 13);
        v16 = v38;
        if ( (_DWORD)v11 == HIWORD(v13) )
          v13 = (unsigned __int16)v13;
      }
      else
      {
        v13 = (unsigned __int16)v13;
      }
    }
    if ( v13 >= v16
      || (v13 >= v15
        ? (v11 = ((v13 - v15) >> 16) + 1, v20 = *(_QWORD *)(v14 + 8 * v11 + 8),
                                          v13 += -65536 * ((v13 - v15) >> 16) - v15)
        : (v20 = *(_QWORD *)(v14 + 8)),
          v13 >= *(_DWORD *)(v20 + 20)) )
    {
      v7 = 0LL;
    }
    else
    {
      v11 = 2LL * (unsigned __int8)v13;
      v7 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                     + 16LL * (unsigned __int8)v13
                     + 8);
    }
    if ( (DC *)v7 != v9 || !v19 )
    {
LABEL_31:
      v4 = a1;
      goto LABEL_32;
    }
    v21 = *(_QWORD *)(v19 + 16);
    if ( v21 )
    {
      v22 = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
      v23 = v22;
      if ( v22 && *v22 )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*v22);
        v7 = *((unsigned int *)v23 + 73);
        v29 = *((_DWORD *)v23 + 73);
        if ( ProcessWow64Process )
          v30 = (unsigned int)__ROR4__(v21, 32 - (v29 & 0x1F));
        else
          v30 = __ROR8__(v21, 64 - (v29 & 0x3Fu));
        v9 = v35;
        v24 = (struct _DC_ATTR *)(v7 ^ v30);
LABEL_28:
        if ( v24 )
        {
          if ( !(unsigned int)DC::SaveAttributes(v9, v24) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v35 + 3);
            v35 = 0LL;
            goto LABEL_70;
          }
          v9 = v35;
        }
        goto LABEL_31;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      v9 = v35;
    }
    v24 = 0LL;
    goto LABEL_28;
  }
LABEL_33:
  if ( (*((_DWORD *)v9 + 130) & 4) == 0 )
    goto LABEL_34;
  DC::vMarkTransformDirty(v9);
LABEL_66:
  v9 = v35;
LABEL_34:
  if ( !v9 )
    goto LABEL_70;
  v25 = 0;
  if ( (a2 & 0x2000000) != 0 )
  {
    a2 = *((_DWORD *)v9 + 9) & 0x3C00000;
  }
  else
  {
    *((_DWORD *)v9 + 9) |= a2 & 0x3C00000;
    v9 = v35;
  }
  v26 = *((_DWORD *)v9 + 9);
  if ( (v26 & 8) != 0 )
  {
    if ( (a2 & 0x400000) != 0 )
    {
      *((_DWORD *)v9 + 9) = v26 & 0xFFFFFFF7;
      v9 = v35;
    }
    else
    {
      v25 = 1;
    }
  }
  if ( (a2 & 0x2000000) != 0 && !(unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)v9, v7) )
  {
    EngSetLastError(0x139Fu);
    goto LABEL_70;
  }
  if ( v25 )
  {
    XDCOBJ::bCleanDC(&v35, (a2 & 0x1000000) != 0);
    DCOBJ::~DCOBJ((DCOBJ *)&v35);
    LOBYTE(v2) = (unsigned int)UserReleaseDC((__int64)v4, v31, v32, v33) != 0;
    return v2;
  }
  else
  {
    XDCOBJ::vDelete(&v35, a2);
    DCOBJ::~DCOBJ((DCOBJ *)&v35);
    return 1LL;
  }
}
