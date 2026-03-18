/*
 * XREFs of GrepDeleteDC @ 0x1C003B5E0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0035FD4 (-vCleanupDCs@@YAXK@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C004005C (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0041980 (NtGdiDeleteObjectApp.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00624B4 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A0434 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreDeleteDC @ 0x1C00B5B40 (GreDeleteDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C003BC08 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C003BD8C (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C003BE90 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     UserReleaseDC @ 0x1C00AAFB0 (UserReleaseDC.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0150DB0 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0158E5C (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 */

__int64 __fastcall GrepDeleteDC(HDC a1, unsigned int a2)
{
  HDC v2; // rbp
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r12d
  _QWORD *CurrentProcessWin32Process; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  DC *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // rbp
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  struct _DC_ATTR *v25; // rbx
  int v26; // ebx
  int v27; // eax
  __int64 ProcessWow64Process; // rax
  int v30; // ecx
  __int64 v31; // rbx
  DC *v32; // [rsp+50h] [rbp-68h] BYREF
  int v33; // [rsp+58h] [rbp-60h]
  int v34; // [rsp+5Ch] [rbp-5Ch]
  _DWORD *v36; // [rsp+D8h] [rbp+20h]

  v2 = a1;
  DCOBJ::DCOBJ((DCOBJ *)&v32);
  v6 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 3192LL)
    || (CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5)) == 0LL
    || !*CurrentProcessWin32Process )
  {
    XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v32, v2);
    goto LABEL_66;
  }
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v32, v2);
  v10 = v32;
  if ( !v32 )
  {
LABEL_70:
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v32);
    return 0LL;
  }
  if ( (*((_DWORD *)v32 + 11) & 2) == 0 )
  {
    if ( v34 )
    {
LABEL_32:
      *((_DWORD *)v10 + 11) |= 2u;
      v10 = v32;
      v33 = 1;
      goto LABEL_33;
    }
    v11 = SGDGetSessionState(v9);
    v10 = v32;
    v12 = *(_QWORD *)(v11 + 24);
    v13 = *(_QWORD *)(v12 + 8008);
    v14 = (unsigned __int16)*(_DWORD *)v32 | (*(_DWORD *)v32 >> 8) & 0xFF0000;
    v36 = (_DWORD *)v13;
    if ( v14 >= 0x10000 )
    {
      if ( *(_DWORD *)v13 > 0x10000u )
      {
        v12 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     *(GdiHandleEntryDirectory **)(v13 + 16),
                                     (unsigned __int16)*(_DWORD *)v32,
                                     1)
              + 13);
        if ( (_DWORD)v12 == HIWORD(v14) )
          v14 = (unsigned __int16)v14;
      }
      else
      {
        v14 = (unsigned __int16)*(_DWORD *)v32;
      }
    }
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_DWORD *)(v15 + 2056);
    v17 = v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16);
    if ( v14 >= v17 )
    {
      v20 = 0LL;
    }
    else
    {
      if ( v14 >= v16 )
      {
        v12 = ((v14 - v16) >> 16) + 1;
        v18 = *(_QWORD *)(v15 + 8 * v12 + 8);
        v19 = v14 + -65536 * ((v14 - v16) >> 16) - v16;
      }
      else
      {
        v18 = *(_QWORD *)(v15 + 8);
        v19 = v14;
      }
      v20 = 0LL;
      if ( v19 < *(_DWORD *)(v18 + 20) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                        + 16LL * (unsigned __int8)v19
                        + 8);
        if ( v12 )
        {
          v12 = 3LL * v19;
          v20 = *(_QWORD *)v18 + 24LL * v19;
        }
      }
    }
    if ( v14 >= 0x10000 )
    {
      v12 = (unsigned __int16)v14;
      if ( *v36 > 0x10000u )
      {
        v12 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                     (GdiHandleEntryDirectory *)v15,
                                     (unsigned __int16)v14,
                                     1)
              + 13);
        if ( (_DWORD)v12 == HIWORD(v14) )
          v14 = (unsigned __int16)v14;
      }
      else
      {
        v14 = (unsigned __int16)v14;
      }
    }
    if ( v14 >= v17
      || (v14 >= v16
        ? (v12 = ((v14 - v16) >> 16) + 1, v21 = *(_QWORD *)(v15 + 8 * v12 + 8),
                                          v14 += -65536 * ((v14 - v16) >> 16) - v16)
        : (v21 = *(_QWORD *)(v15 + 8)),
          v14 >= *(_DWORD *)(v21 + 20)) )
    {
      v8 = 0LL;
    }
    else
    {
      v12 = 2LL * (unsigned __int8)v14;
      v8 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                     + 16LL * (unsigned __int8)v14
                     + 8);
    }
    if ( (DC *)v8 != v10 || !v20 )
    {
LABEL_31:
      v2 = a1;
      goto LABEL_32;
    }
    v22 = *(_QWORD *)(v20 + 16);
    if ( v22 )
    {
      v23 = (_QWORD *)PsGetCurrentProcessWin32Process(v12);
      v24 = v23;
      if ( v23 && *v23 )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*v23);
        v8 = *((unsigned int *)v24 + 73);
        v30 = *((_DWORD *)v24 + 73);
        if ( ProcessWow64Process )
          v31 = (unsigned int)__ROR4__(v22, 32 - (v30 & 0x1F));
        else
          v31 = __ROR8__(v22, 64 - (v30 & 0x3Fu));
        v10 = v32;
        v25 = (struct _DC_ATTR *)(v8 ^ v31);
LABEL_28:
        if ( v25 )
        {
          if ( !(unsigned int)DC::SaveAttributes(v10, v25) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v32 + 3);
            v32 = 0LL;
            goto LABEL_70;
          }
          v10 = v32;
        }
        goto LABEL_31;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      v10 = v32;
    }
    v25 = 0LL;
    goto LABEL_28;
  }
LABEL_33:
  if ( (*((_DWORD *)v10 + 130) & 4) == 0 )
    goto LABEL_34;
  DC::vMarkTransformDirty(v10);
LABEL_66:
  v10 = v32;
LABEL_34:
  if ( !v10 )
    goto LABEL_70;
  v26 = 0;
  if ( (a2 & 0x2000000) != 0 )
  {
    a2 = *((_DWORD *)v10 + 9) & 0x3C00000;
  }
  else
  {
    *((_DWORD *)v10 + 9) |= a2 & 0x3C00000;
    v10 = v32;
  }
  v27 = *((_DWORD *)v10 + 9);
  if ( (v27 & 8) != 0 )
  {
    if ( (a2 & 0x400000) != 0 )
    {
      *((_DWORD *)v10 + 9) = v27 & 0xFFFFFFF7;
      v10 = v32;
    }
    else
    {
      v26 = 1;
    }
  }
  if ( (a2 & 0x2000000) != 0 && !(unsigned int)HmgQueryRemoveAttempted(*(struct HOBJ__ **)v10, v8) )
  {
    EngSetLastError(0x139Fu);
    goto LABEL_70;
  }
  if ( v26 )
  {
    XDCOBJ::bCleanDC((XDCOBJ *)&v32, (a2 & 0x1000000) != 0);
    DCOBJ::~DCOBJ((DCOBJ *)&v32);
    LOBYTE(v6) = (unsigned int)UserReleaseDC(v2) != 0;
    return v6;
  }
  else
  {
    XDCOBJ::vDelete((XDCOBJ *)&v32, a2);
    DCOBJ::~DCOBJ((DCOBJ *)&v32);
    return 1LL;
  }
}
