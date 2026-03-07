__int64 __fastcall GreIntersectClipRect(HDC a1, LONG a2, LONG top, LONG a4, LONG a5)
{
  LONG left; // esi
  LONG right; // ebx
  __int64 v8; // rcx
  DC *v9; // rdi
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // r10d
  unsigned int v14; // esi
  unsigned int v15; // r12d
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  DC *v22; // rdx
  __int64 v23; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v25; // rsi
  struct _DC_ATTR *v26; // rbx
  __int64 v27; // rcx
  LONG bottom; // edx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r15d
  __int64 v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rsi
  unsigned int v36; // r10d
  unsigned int v37; // r14d
  unsigned int v38; // r12d
  __int64 v39; // r8
  __int64 v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r8
  DC *v45; // rdx
  __int64 v46; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // rsi
  struct _DC_ATTR *v49; // rbx
  HDC v50; // r14
  int v51; // eax
  unsigned int v52; // edx
  BOOL v53; // esi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rbx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned int v61; // r9d
  __int64 v62; // r8
  _DWORD *v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // r10
  unsigned int v66; // edx
  unsigned int v67; // r8d
  __int64 v68; // r10
  __int64 ProcessWow64Process; // rax
  __int64 v71; // rdx
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rdx
  bool v75; // zf
  int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // eax
  DC *v81; // [rsp+58h] [rbp-39h] BYREF
  int v82[2]; // [rsp+60h] [rbp-31h]
  __int64 v83; // [rsp+68h] [rbp-29h] BYREF
  int v84; // [rsp+70h] [rbp-21h]
  int v85; // [rsp+74h] [rbp-1Dh]
  __int64 v86; // [rsp+78h] [rbp-19h] BYREF
  int v87; // [rsp+80h] [rbp-11h]
  struct _RECTL v88; // [rsp+90h] [rbp-1h] BYREF

  left = a2;
  right = a4;
  v81 = 0LL;
  *(_QWORD *)v82 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v81, a1);
  v9 = v81;
  if ( !v81 )
    goto LABEL_92;
  if ( (*((_DWORD *)v81 + 11) & 2) != 0 )
    goto LABEL_25;
  if ( !v82[1] )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v8) + 24) + 8008LL);
    v11 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v10,
            (unsigned __int16)*(_DWORD *)v9 | (*(_DWORD *)v9 >> 8) & 0xFF0000u);
    v12 = *(_QWORD *)(v10 + 16);
    v13 = v11;
    v14 = *(_DWORD *)(v12 + 2056);
    v15 = v14 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16);
    if ( v11 >= v15 )
    {
      v17 = 0LL;
    }
    else
    {
      if ( v11 >= v14 )
      {
        v16 = *(_QWORD *)(v12 + 8LL * (((v11 - v14) >> 16) + 1) + 8);
        v11 += -65536 * ((v11 - v14) >> 16) - v14;
      }
      else
      {
        v16 = *(_QWORD *)(v12 + 8);
      }
      v17 = 0LL;
      if ( v11 < *(_DWORD *)(v16 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                     + 16LL * (unsigned __int8)v11
                     + 8) )
      {
        v17 = *(_QWORD *)v16 + 24LL * v11;
      }
    }
    v18 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v10, v13);
    v20 = v18;
    if ( v18 >= v15
      || (v18 >= v14
        ? (v19 = ((v18 - v14) >> 16) + 1,
           v21 = *(_QWORD *)(v12 + 8 * v19 + 8),
           v20 = -65536 * ((v18 - v14) >> 16) - v14 + v18)
        : (v21 = *(_QWORD *)(v12 + 8)),
          (unsigned int)v20 >= *(_DWORD *)(v21 + 20)) )
    {
      v22 = 0LL;
    }
    else
    {
      v19 = 2LL * (unsigned __int8)v20;
      v22 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v20 >> 8)) + 16LL * (unsigned __int8)v20 + 8);
    }
    if ( v22 != v9 || !v17 )
      goto LABEL_23;
    v23 = *(_QWORD *)(v17 + 16);
    if ( v23 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v19);
      v25 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v71 = *((unsigned int *)v25 + 73);
        v72 = *((_DWORD *)v25 + 73);
        if ( ProcessWow64Process )
          v26 = (struct _DC_ATTR *)(v71 ^ (unsigned int)__ROR4__(v23, 32 - (v72 & 0x1F)));
        else
          v26 = (struct _DC_ATTR *)(v71 ^ __ROR8__(v23, 64 - (v72 & 0x3Fu)));
        goto LABEL_21;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v26 = 0LL;
LABEL_21:
    if ( !v26 || (unsigned int)DC::SaveAttributes(v9, v26) )
    {
LABEL_23:
      left = a2;
      right = a4;
      goto LABEL_24;
    }
    _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    v9 = 0LL;
    v81 = 0LL;
LABEL_92:
    EngSetLastError(6u);
LABEL_93:
    v32 = 0;
    goto LABEL_40;
  }
LABEL_24:
  *((_DWORD *)v9 + 11) |= 2u;
  v82[0] = 1;
LABEL_25:
  if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(v9);
  if ( *((unsigned __int16 *)v9 + 6) > 1u )
  {
    v77 = *((_QWORD *)v9 + 6);
    if ( v77 )
      v78 = *(_DWORD *)(v77 + 40);
    else
      v78 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(12LL, v78, *((unsigned __int16 *)v9 + 6));
    goto LABEL_92;
  }
  v27 = *((_QWORD *)v9 + 122);
  v84 = *(_DWORD *)(v27 + 208);
  v85 = *(_DWORD *)(v27 + 108) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v83, (struct XDCOBJ *)&v81, 0x204u, 0x80000000);
  bottom = a5;
  v88.left = left;
  v88.top = top;
  v29 = *(_DWORD *)(v83 + 32);
  v88.right = right;
  v88.bottom = a5;
  if ( (v29 & 1) != 0 )
  {
    if ( (v29 & 0x43) != 0x43 )
    {
      bCvtPts1(v83, &v88.left, 2LL);
      bottom = v88.bottom;
      right = v88.right;
      top = v88.top;
      left = v88.left;
    }
    if ( v85 )
    {
      ++left;
      ++right;
      v88.left = left;
      v88.right = right;
    }
    if ( left > right )
    {
      v88.left = right;
      v88.right = left;
    }
    if ( top > bottom )
    {
      v88.top = bottom;
      v88.bottom = top;
    }
    v30 = DC::iCombine(v9, &v88, 1);
    goto LABEL_38;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (a5 & 0xF8000000) != 0 && (a5 & 0xF8000000) != 0xF8000000
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_93;
  }
  v30 = DC::iCombine(v9, (struct EXFORMOBJ *)&v83, &v88, 1);
LABEL_38:
  v32 = v30;
  if ( v30 > 1 )
    v32 = 3;
LABEL_40:
  if ( !v9 )
    return v32;
  if ( v82[0] && (*((_DWORD *)v9 + 11) & 2) != 0 )
  {
    if ( v82[1] )
      goto LABEL_63;
    v33 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v31) + 24) + 8008LL);
    v34 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v33,
            (unsigned __int16)*(_DWORD *)v9 | (*(_DWORD *)v9 >> 8) & 0xFF0000u);
    v35 = *(_QWORD *)(v33 + 16);
    v36 = v34;
    v37 = *(_DWORD *)(v35 + 2056);
    v38 = v37 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16);
    if ( v34 >= v38 )
    {
      v40 = 0LL;
    }
    else
    {
      if ( v34 >= v37 )
      {
        v39 = *(_QWORD *)(v35 + 8LL * (((v34 - v37) >> 16) + 1) + 8);
        v34 += -65536 * ((v34 - v37) >> 16) - v37;
      }
      else
      {
        v39 = *(_QWORD *)(v35 + 8);
      }
      v40 = 0LL;
      if ( v34 < *(_DWORD *)(v39 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v34 >> 8))
                     + 16LL * (unsigned __int8)v34
                     + 8) )
      {
        v40 = *(_QWORD *)v39 + 24LL * v34;
      }
    }
    v41 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v33, v36);
    v43 = v41;
    if ( v41 >= v38
      || (v41 >= v37
        ? (v42 = ((v41 - v37) >> 16) + 1,
           v44 = *(_QWORD *)(v35 + 8 * v42 + 8),
           v43 = -65536 * ((v41 - v37) >> 16) - v37 + v41)
        : (v44 = *(_QWORD *)(v35 + 8)),
          (unsigned int)v43 >= *(_DWORD *)(v44 + 20)) )
    {
      v45 = 0LL;
    }
    else
    {
      v42 = 2LL * (unsigned __int8)v43;
      v45 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * (v43 >> 8)) + 16LL * (unsigned __int8)v43 + 8);
    }
    if ( v45 != v9 || !v40 )
      goto LABEL_63;
    v46 = *(_QWORD *)(v40 + 16);
    if ( v46 )
    {
      v47 = (_QWORD *)PsGetCurrentProcessWin32Process(v42);
      v48 = v47;
      if ( v47 && *v47 )
      {
        v73 = PsGetProcessWow64Process(*v47);
        v74 = *((unsigned int *)v48 + 73);
        v75 = v73 == 0;
        v76 = *((_DWORD *)v48 + 73);
        if ( v75 )
          v49 = (struct _DC_ATTR *)(v74 ^ __ROR8__(v46, 64 - (v76 & 0x3Fu)));
        else
          v49 = (struct _DC_ATTR *)(v74 ^ (unsigned int)__ROR4__(v46, 32 - (v76 & 0x1F)));
LABEL_61:
        if ( v49 )
          DC::RestoreAttributes(v9, v49);
LABEL_63:
        *((_DWORD *)v9 + 11) &= ~2u;
        goto LABEL_64;
      }
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
    v49 = 0LL;
    goto LABEL_61;
  }
LABEL_64:
  v50 = *(HDC *)v9;
  v51 = (unsigned __int16)*(_QWORD *)v9;
  v52 = ((unsigned int)*(_QWORD *)v9 >> 8) & 0xFF0000;
  v86 = 0LL;
  v87 = 0;
  v53 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v86, v51 | v52, 0, v82[1], 1);
  if ( v87 )
  {
    if ( (*(_BYTE *)(v86 + 15) & 8) != 0 && !*((_DWORD *)v9 + 2) )
      v53 = *((_WORD *)v9 + 6) == 1;
    _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    v55 = *(_QWORD *)(SGDGetSessionState(v54) + 24);
    v56 = *(_QWORD *)(v55 + 8008);
    v57 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v55) + 24) + 8008LL);
    v58 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v57, *(_DWORD *)v86 & 0xFFFFFF);
    v59 = *(_QWORD *)(v57 + 16);
    v60 = v58;
    v61 = *(_DWORD *)(v59 + 2056);
    if ( v58 >= v61 + ((*(unsigned __int16 *)(v59 + 2) + 0xFFFF) << 16)
      || (v58 >= v61
        ? (v62 = *(_QWORD *)(v59 + 8LL * (((v58 - v61) >> 16) + 1) + 8), v60 = -65536 * ((v58 - v61) >> 16) - v61 + v58)
        : (v62 = *(_QWORD *)(v59 + 8)),
          (unsigned int)v60 >= *(_DWORD *)(v62 + 20)) )
    {
      v63 = 0LL;
    }
    else
    {
      v63 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * (v60 >> 8)) + 16LL * (unsigned __int8)v60 + 8);
    }
    v64 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v56,
            (unsigned __int16)*v63 | (*v63 >> 8) & 0xFF0000u);
    v65 = *(_QWORD *)(v56 + 16);
    v66 = v64;
    v67 = *(_DWORD *)(v65 + 2056);
    if ( v64 < v67 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16) )
    {
      if ( v64 >= v67 )
      {
        v68 = *(_QWORD *)(v65 + 8LL * (((v64 - v67) >> 16) + 1) + 8);
        v66 = -65536 * ((v64 - v67) >> 16) - v67 + v64;
      }
      else
      {
        v68 = *(_QWORD *)(v65 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v68 + 24LL * v66 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v68 + 24) + 8 * ((unsigned __int64)v66 >> 8)) + 16LL * (unsigned __int8)v66,
        0LL);
      KeLeaveCriticalRegion();
    }
    v86 = 0LL;
    v87 = 0;
    KeLeaveCriticalRegion();
  }
  if ( v53 )
    GrepDeleteDC(v50, 0x2000000u);
  return v32;
}
