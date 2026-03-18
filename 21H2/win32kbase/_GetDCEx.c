/*
 * XREFs of _GetDCEx @ 0x1C002B0A0
 * Callers:
 *     NtUserGetDC @ 0x1C00295D0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C0071A64 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C0071BC0 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C00BA400 (_GetDC.c)
 * Callees:
 *     GreIsRendering @ 0x1C0018890 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028800 (GreCreateRectRgnIndirect.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreSelectVisRgnShared @ 0x1C002FA90 (GreSelectVisRgnShared.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     HmgMarkUndeletable @ 0x1C0063C80 (HmgMarkUndeletable.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 *     CreateEmptyRgnPublic @ 0x1C006EF60 (CreateEmptyRgnPublic.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     GreSetLayout @ 0x1C009E0A0 (GreSetLayout.c)
 *     UpdateDCEInUseCount @ 0x1C00A62FC (UpdateDCEInUseCount.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00A9050 (IsDeleteHrgnClipSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C00ACCD0 (IsGreSelectRedirectionBitmapSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C00B3F48 (IsSpbCheckDceSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0167FBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C023E228 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // esi
  HRGN v7; // r12
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  const wchar_t *v10; // rcx
  struct _ERESOURCE *v11; // rbx
  __int64 v12; // r13
  _QWORD *v13; // rcx
  char v14; // al
  unsigned int v15; // edx
  _QWORD *v16; // r10
  unsigned int v17; // r8d
  char v18; // r9
  int v19; // ecx
  __int64 v20; // r14
  _QWORD *v21; // rdi
  unsigned int v22; // r14d
  __int64 *v23; // r12
  __int64 *i; // rbx
  char *v25; // r13
  char *v26; // rdi
  int v27; // ebx
  int v28; // eax
  bool v29; // zf
  HDC v30; // rcx
  _QWORD *v31; // rdi
  _QWORD *v32; // r13
  int v33; // edi
  int v34; // edx
  int v35; // edi
  __int64 v36; // rax
  unsigned __int64 v37; // xmm0_8
  __int64 v38; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v40; // rdi
  _DWORD *v41; // rdi
  unsigned int v42; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v44; // r14
  unsigned int v45; // r8d
  unsigned int v46; // edx
  unsigned int v47; // edx
  _BOOL8 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  _BOOL8 v51; // r9
  int v52; // ecx
  int v53; // ecx
  _QWORD *v55; // rdx
  __int64 v56; // r8
  unsigned __int8 v57; // cl
  int v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 **v63; // rdi
  __int64 *v64; // rbx
  int v65; // eax
  __int64 *v66; // rax
  void *v67; // rdx
  HRGN v68; // rdi
  struct HOBJ__ *RectRgnIndirect; // rax
  HDC v70; // rcx
  int v71; // ecx
  HRGN v72; // rax
  __int64 v73; // rdx
  __int64 CurrentProcessWin32Process; // rax
  HRGN v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // r8
  __int64 v83; // rax
  int v84; // eax
  struct HOBJ__ *v85; // rax
  HDC v86; // rcx
  int v87; // ecx
  HRGN v88; // rax
  __int64 v89; // r8
  int v90; // r9d
  unsigned int v91; // r8d
  int v92; // r9d
  _QWORD *v93; // [rsp+40h] [rbp-79h]
  __int64 v94; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v95; // [rsp+50h] [rbp-69h]
  HRGN v96; // [rsp+58h] [rbp-61h] BYREF
  __int64 v97; // [rsp+60h] [rbp-59h]
  _QWORD v98[6]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v99[15]; // [rsp+98h] [rbp-21h] BYREF
  __int64 v100; // [rsp+120h] [rbp+67h] BYREF
  HRGN EmptyRgnPublic; // [rsp+128h] [rbp+6Fh]
  int v102; // [rsp+130h] [rbp+77h] BYREF
  int v103; // [rsp+138h] [rbp+7Fh]

  EmptyRgnPublic = a2;
  v4 = 0LL;
  v6 = a3;
  v96 = 0LL;
  v7 = a2;
  v95 = 0LL;
  v97 = 0LL;
  v102 = 0;
  v103 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  v8 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (unsigned int)L"ghsemDynamicModeChange",
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v9 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v8, a2, a3);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  v10 = L"ghsemGreLock";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemGreLock",
      (_DWORD)a2,
      a3,
      (_DWORD)ghsemGreLock,
      2,
      (__int64)L"ghsemGreLock");
  v11 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v10, a2, a3);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      (unsigned int)L"ghsemDCVisRgn",
      (_DWORD)a2,
      a3,
      (_DWORD)ghsemDCVisRgn,
      3,
      (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
    a1 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 24LL);
  v93 = a1;
  v12 = 0LL;
  v13 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      a2 = (HRGN)v13[5];
      v14 = *((_BYTE *)a2 + 31);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v13 != a1 )
        break;
      if ( (*((_WORD *)a2 + 21) & 0x2FFF) != 0x29D )
      {
        v13 = (_QWORD *)v13[13];
        if ( v13 )
          continue;
      }
      goto LABEL_17;
    }
    LODWORD(v100) = 0;
    v94 = 0LL;
  }
  else
  {
LABEL_17:
    LODWORD(v100) = 1;
    v94 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, a2, a3, a4) + 12) & 0x200) != 0 )
  {
    v58 = 1;
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
    v63 = (__int64 **)((char *)gpDispInfo + 24);
    v64 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
    if ( !v64 )
      goto LABEL_200;
    do
    {
      v65 = *((_DWORD *)v64 + 16);
      if ( v65 < 0 )
      {
        if ( v64[10] == PsGetCurrentProcessWin32Process(v60, v59, v61, v62) )
          v58 = 0;
      }
      else if ( (v65 & 0x400000) != 0 )
      {
        DestroyCacheDC(v63);
      }
      v66 = *v63;
      if ( v64 == *v63 )
      {
        v66 = (__int64 *)*v64;
        v63 = (__int64 **)v64;
      }
      v64 = v66;
    }
    while ( v66 );
    if ( v58 )
    {
LABEL_200:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v60, v59, v61, v62);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
    v4 = 0LL;
  }
  if ( (v6 & 0x10000) != 0 )
  {
    v15 = v6 & 0xFFFFFFC7;
    if ( (v6 & 1) != 0 )
    {
      v6 = v15 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v6 = v15;
    }
    else
    {
      v16 = (_QWORD *)a1[17];
      v17 = v15 | 0x20;
      v18 = *(_BYTE *)(v16[1] + 8LL);
      if ( v18 >= 0 )
        v17 = v6 & 0xFFFFFFC7;
      if ( (((v17 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v18 >> 5)) != 0 )
      {
        if ( (v18 & 0x40) != 0 )
        {
          v83 = v16[5];
          if ( v83 )
            v12 = *(_QWORD *)(v83 + 8);
        }
        else
        {
          v17 |= 2u;
        }
      }
      v19 = v17 | 8;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
        v19 = v17;
      v6 = v19 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v6 = v19;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) == 0 )
        goto LABEL_36;
      v6 &= ~8u;
      if ( !v16[10] )
        goto LABEL_36;
    }
    v6 |= 2u;
  }
LABEL_36:
  if ( (v6 & 0x80000) != 0 )
    v6 = v6 & 0xFFFFFFD5 | 2;
  if ( qword_1C029C3B8 && (int)qword_1C029C3B8() >= 0 )
  {
    if ( qword_1C029C3C0 )
      v4 = qword_1C029C3C0(a1);
    if ( v4 && (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL) & 0x20000000) != 0 )
    {
      if ( qword_1C029C3C8 && (int)qword_1C029C3C8() >= 0 )
      {
        if ( qword_1C029C3D0 )
          v20 = qword_1C029C3D0(v4);
        else
          v20 = 0LL;
        v97 = v20;
        if ( v20 )
        {
LABEL_49:
          v6 |= 0x4000u;
          v95 = (_QWORD *)v4;
          if ( a1 == (_QWORD *)v4 && (v6 & 0x20) != 0 )
            v6 = v6 & 0xFFFFFFDD | 2;
          if ( (unsigned __int64)v7 > 2 )
          {
            if ( (v6 & 0x40000) != 0 )
            {
              EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
              v75 = v7;
              v7 = EmptyRgnPublic;
              GreCombineRgn(EmptyRgnPublic, v75, 0LL, 5);
              v6 &= ~0x40000u;
            }
            GreOffsetRgn(v7, -*(_DWORD *)(*(_QWORD *)(v4 + 40) + 88LL), -*(_DWORD *)(*(_QWORD *)(v4 + 40) + 92LL));
          }
          goto LABEL_51;
        }
      }
      else
      {
        v97 = 0LL;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 0x20) == 0 )
        goto LABEL_51;
      goto LABEL_49;
    }
  }
LABEL_51:
  if ( (v6 & 0x20) == 0 )
    goto LABEL_52;
  v55 = (_QWORD *)a1[13];
  if ( !v55 )
    v55 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 24LL);
  if ( (v6 |= 2u, (v6 & 0x18) != 0)
    || (v56 = a1[5], (*(_BYTE *)(v56 + 21) & 1) == 0) && (*(_BYTE *)(v55[5] + 31LL) & 2) != 0
    || (v57 = *(_BYTE *)(v55[5] + 31LL), ((v57 ^ *(_BYTE *)(v56 + 31)) & 0x10) != 0) )
  {
LABEL_52:
    v21 = a1;
  }
  else
  {
    v6 &= 0xFFFFFFE7;
    v93 = v55;
    v21 = v55;
    if ( (v57 & 4) != 0 )
      v6 |= 0x10u;
  }
  if ( (v6 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
    v6 |= 2u;
  v22 = v6 & 0x8080441F;
  if ( (v6 & 2) == 0 )
  {
    v23 = (__int64 *)((char *)gpDispInfo + 24);
    i = (__int64 *)*((_QWORD *)gpDispInfo + 3);
    if ( !i )
      goto LABEL_283;
    while ( (i[8] & 0x400002) != 0 || (unsigned int)GreIsRendering((HDC)i[1]) || (_QWORD *)i[2] != a1 && i[1] != v12 )
    {
      v23 = i;
      i = (__int64 *)*i;
      if ( !i )
        goto LABEL_283;
    }
    if ( i[7] )
    {
      if ( (v6 & 0xC0) != 0 )
      {
        v84 = IsDeleteHrgnClipSupported();
        if ( v84 >= 0 && qword_1C029C400 )
          qword_1C029C400(i);
      }
    }
    if ( (i[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i[4] + 40) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C029C410 )
      {
        qword_1C029C410(i);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C029B808 )
        qword_1C029B808(i[1], 0LL);
    }
    if ( (_QWORD *)i[2] != a1 )
      goto LABEL_73;
    v32 = v95;
    if ( !(_DWORD)v100
      || (_QWORD *)i[4] != v95
      || (_QWORD *)i[3] != v21
      || ((v6 ^ *((_DWORD *)i + 16)) & 0x4000) != 0
      || (i[8] & 0x10000000) != 0 )
    {
      goto LABEL_73;
    }
    while ( 1 )
    {
LABEL_94:
      if ( (i[8] & 0x8080441F) == v22 )
      {
        if ( i != *((__int64 **)gpDispInfo + 3) )
        {
          *v23 = *i;
          *i = *((_QWORD *)gpDispInfo + 3);
          *((_QWORD *)gpDispInfo + 3) = i;
        }
        GreValidateVisrgn((HDC)i[1]);
        if ( (v6 & 0x80u) != 0 )
        {
          v68 = EmptyRgnPublic;
          if ( EmptyRgnPublic != (HRGN)1 )
          {
            GreSetRectRgn(ghrgnGDC, 0);
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
            v70 = (HDC)i[1];
            i[7] = (__int64)RectRgnIndirect;
            GreSelectVisRgnShared(v70);
            v71 = *((_DWORD *)i + 16);
            i[5] = (__int64)v68;
            if ( (v6 & 0x40000) != 0 )
              v71 |= 0x40000u;
            *((_DWORD *)i + 16) = v71 | 0x80;
            if ( !v68 )
            {
              i[6] = 0LL;
              goto LABEL_190;
            }
            GreCombineRgn(ghrgnGDC, (HRGN)i[7], v68, 1);
            v72 = (HRGN)CreateEmptyRgnPublic();
            i[6] = (__int64)v72;
            GreCombineRgn(v72, v68, 0LL, 5);
            if ( (unsigned __int64)v68 > 2 && (i[8] & 0x40000) == 0 )
              goto LABEL_189;
            goto LABEL_190;
          }
        }
        else if ( (v6 & 0x40) != 0 )
        {
          v68 = EmptyRgnPublic;
          if ( EmptyRgnPublic )
          {
            GreSetRectRgn(ghrgnGDC, 0);
            v85 = GreCreateRectRgnIndirect((struct _SLIST_ENTRY *)&gZero);
            v86 = (HDC)i[1];
            i[7] = (__int64)v85;
            GreSelectVisRgnShared(v86);
            v87 = *((_DWORD *)i + 16);
            i[5] = (__int64)v68;
            if ( (v6 & 0x40000) != 0 )
              v87 |= 0x40000u;
            *((_DWORD *)i + 16) = v87 | 0x40;
            if ( v68 == (HRGN)1 )
            {
              i[6] = 1LL;
              goto LABEL_190;
            }
            GreCombineRgn(ghrgnGDC, (HRGN)i[7], v68, 4);
            v88 = (HRGN)CreateEmptyRgnPublic();
            i[6] = (__int64)v88;
            GreCombineRgn(v88, v68, 0LL, 5);
            if ( (unsigned __int64)v68 > 2 && (i[8] & 0x40000) == 0 )
            {
LABEL_189:
              PsGetCurrentProcessId();
              LOBYTE(v73) = 4;
              HmgMarkUndeletable(v68, v73);
            }
LABEL_190:
            *((_DWORD *)i + 16) &= ~0x2000u;
            GreSelectVisRgnShared((HDC)i[1]);
          }
        }
        if ( (i[8] & 0x4000) != 0 )
        {
          if ( !qword_1C029B800
            || (int)qword_1C029B800() < 0
            || qword_1C029B808 && (unsigned int)qword_1C029B808(i[1], v97) )
          {
            v35 = v102;
          }
          else
          {
            v35 = 1;
          }
          DCOBJA::DCOBJA((DCOBJA *)v99, (HDC)i[1]);
          if ( v99[0] )
          {
            *(_DWORD *)(v99[0] + 36LL) |= 0x40u;
            v36 = *(_QWORD *)(v99[0] + 1080LL);
            v37 = _mm_srli_si128(*(__m128i *)(v99[0] + 1080LL), 8).m128i_u64[0];
            if ( (_DWORD)v36 != (_DWORD)v37
              && (int)v36 < (int)v37
              && HIDWORD(v36) != HIDWORD(v37)
              && SHIDWORD(v36) < SHIDWORD(v37) )
            {
              *(_DWORD *)(v99[0] + 1080LL) = 0x7FFFFFFF;
              *(_DWORD *)(v99[0] + 1084LL) = 0x7FFFFFFF;
              *(_DWORD *)(v99[0] + 1088LL) = 0x80000000;
              *(_DWORD *)(v99[0] + 1092LL) = 0x80000000;
            }
          }
          DCOBJA::~DCOBJA((DCOBJA *)v99);
          if ( v35 )
            GreSelectVisRgnShared((HDC)i[1]);
        }
        if ( (i[8] & 2) != 0 )
        {
          if ( !(unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 0LL) )
          {
            *((_DWORD *)i + 16) &= ~0x1000u;
            DestroyCacheDC((char *)gpDispInfo + 24);
            goto LABEL_283;
          }
          v38 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            v38 = *ThreadWin32Thread;
          i[9] = v38;
          i[10] = 0LL;
          --gnDCECount;
          v40 = i[9];
          if ( v40 )
            v41 = *(_DWORD **)(v40 + 424);
          else
            v41 = (_DWORD *)i[10];
          if ( !bDCEInUseTelemetryDisabled )
          {
            if ( (dword_1C0296CB0 & 1) == 0 )
            {
              dword_1C0296CB0 |= 1u;
              qword_1C0296CB8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
            }
            ++v41[274];
            ++gnInUseDCECount;
            v42 = v41[274];
            if ( v41[275] < v42 )
              v41[275] = v42;
            if ( dword_1C0296608 < (unsigned int)gnInUseDCECount )
              dword_1C0296608 = gnInUseDCECount;
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v44 = PerformanceCounter;
            v45 = v41[275];
            if ( ulProcessThresholdDCEInUse == 100 )
              v46 = v45 % 0x64;
            else
              v46 = v45 % ulProcessThresholdDCEInUse;
            if ( !v46 && PerformanceCounter.QuadPart - qword_1C0296600 >= qword_1C0296CB8 )
            {
              if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
              {
                v102 = v41[14];
                v100 = v89;
                v94 = 0x1000000LL;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                  (unsigned int)&dword_1C028D610,
                  (unsigned int)&unk_1C025BAA8,
                  v89,
                  v90,
                  (__int64)&v94,
                  (__int64)&v100,
                  (__int64)&v102);
              }
              qword_1C0296600 = v44.QuadPart;
            }
            if ( ulGlobalThresholdDCEInUse == 1000 )
              v47 = dword_1C0296608 % 0x3E8u;
            else
              v47 = dword_1C0296608 % ulGlobalThresholdDCEInUse;
            if ( !v47 && v44.QuadPart - qword_1C02965F8 >= qword_1C0296CB8 )
            {
              if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
              {
                v100 = v91;
                v94 = 0x1000000LL;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                  (unsigned int)&dword_1C028D610,
                  (unsigned int)&unk_1C025BAE4,
                  v91,
                  v92,
                  (__int64)&v94,
                  (__int64)&v100);
              }
              qword_1C02965F8 = v44.QuadPart;
            }
          }
          if ( v103 && qword_1C029B810 && (int)qword_1C029B810() >= 0 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || (v67 = gahStockObjects96[13]) == 0LL )
              v67 = gahStockObjects[13];
            if ( qword_1C029B818 )
              qword_1C029B818(i[1], v67);
          }
        }
        if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v6 & 0x40000000) == 0 )
          GreSetLayout((HDC)i[1], -1, 1u);
        GreValidateVisrgn((HDC)i[1]);
        if ( qword_1C029B820 && (int)qword_1C029B820() >= 0 && qword_1C029B828 )
          qword_1C029B828(i[1], *a1, 0LL, 0LL, 0);
        if ( v32 )
        {
          if ( (*(_BYTE *)(v32[5] + 26LL) & 8) != 0 )
          {
            if ( qword_1C029B820 )
            {
              if ( (int)qword_1C029B820() >= 0 )
              {
                v49 = v32[5];
                v48 = (*(_WORD *)(v49 + 42) & 0x2FFF) == 669;
                v51 = (*(_BYTE *)(v49 + 27) & 2) == 0;
                if ( qword_1C029B828 )
                  qword_1C029B828(i[1], *a1, *v32, v51, v48);
              }
            }
          }
        }
        if ( *((int *)i + 16) < 0 )
        {
          v76 = PsGetCurrentProcessWin32Process(v49, v48, v50, v51);
          *(_DWORD *)(v76 + 12) |= 0x200u;
          i[9] = 0LL;
          v81 = PsGetCurrentProcessWin32Process(v78, v77, v79, v80);
          i[10] = v81;
          UpdateDCEInUseCount(1LL, v81, v82);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v49,
            (unsigned int)&LockRelease,
            v50,
            (_DWORD)ghsemDCVisRgn,
            (__int64)L"ghsemDCVisRgn");
        v52 = (int)ghsemDCVisRgn;
        if ( ghsemDCVisRgn )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
          PsLeavePriorityRegion();
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v52,
            (unsigned int)&LockRelease,
            v50,
            (_DWORD)ghsemGreLock,
            (__int64)L"ghsemGreLock");
        v53 = (int)ghsemGreLock;
        if ( ghsemGreLock )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
          PsLeavePriorityRegion();
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v53,
            (unsigned int)&LockRelease,
            v50,
            (_DWORD)ghsemDynamicModeChange,
            (__int64)L"ghsemDynamicModeChange");
        if ( ghsemDynamicModeChange )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
          PsLeavePriorityRegion();
        }
        return i[1];
      }
LABEL_73:
      v29 = (i[8] & 0x800) == 0;
      v103 = 1;
      if ( v29 && qword_1C029C418 && (int)qword_1C029C418() >= 0 && qword_1C029C420 )
        qword_1C029C420(i);
      v30 = (HDC)i[1];
      *((_DWORD *)i + 16) = v22 | 0x1000;
      GreValidateVisrgn(v30);
      v96 = 0LL;
      if ( qword_1C029C3D8 && (int)qword_1C029C3D8() >= 0 )
      {
        v31 = v93;
        if ( qword_1C029C3E0 && (unsigned int)qword_1C029C3E0(&v96, a1, v93, v22) )
          goto LABEL_82;
      }
      else
      {
        v31 = v93;
      }
      *((_DWORD *)i + 16) |= 0x10000000u;
LABEL_82:
      v32 = v95;
      i[4] = (__int64)v95;
      i[2] = (__int64)a1;
      i[3] = (__int64)v31;
      i[5] = 0LL;
      i[6] = 0LL;
      ResetOrg(v96, (struct tagDCE *)i, 1);
      if ( !v96 )
        v102 = 1;
    }
  }
  while ( 2 )
  {
    v23 = (__int64 *)((char *)gpDispInfo + 24);
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
    {
      if ( (_QWORD *)i[3] == v21 )
      {
        v32 = v95;
        if ( (_QWORD *)i[4] == v95 && !i[11] )
        {
          DCOBJA::DCOBJA((DCOBJA *)v98, (HDC)i[1]);
          if ( !v98[0] )
          {
            DCOBJA::~DCOBJA((DCOBJA *)v98);
LABEL_89:
            v34 = *((_DWORD *)i + 16);
            if ( v22 == (v34 & 0x80C05C1F)
              && ((*(_BYTE *)(v21[5] + 31LL) & 0x20) == 0 || i[2] == i[3])
              && (!v94 || (v34 & 0x10000000) == 0) )
            {
              *((_DWORD *)i + 16) = v34 | 0x1000;
              if ( a1 != (_QWORD *)i[2] )
              {
                if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C029C420 )
                  qword_1C029C420(i);
                i[2] = (__int64)a1;
                ResetOrg(0LL, (struct tagDCE *)i, 0);
              }
              goto LABEL_94;
            }
            goto LABEL_57;
          }
          v33 = *(_DWORD *)(v98[0] + 40LL);
          DCOBJA::~DCOBJA((DCOBJA *)v98);
          if ( (v33 & 1) == 0 )
          {
            v21 = v93;
            goto LABEL_89;
          }
        }
      }
LABEL_57:
      v21 = v93;
      v23 = i;
    }
    v23 = 0LL;
    v25 = (char *)gpDispInfo + 24;
    v26 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( !v26 )
      goto LABEL_68;
    do
    {
      if ( (*((_DWORD *)v26 + 16) & 0x400002) != 2 )
        goto LABEL_66;
      DCOBJA::DCOBJA((DCOBJA *)v98, *((HDC *)v26 + 1));
      if ( v98[0] )
      {
        v27 = *(_DWORD *)(v98[0] + 40LL);
        DCOBJA::~DCOBJA((DCOBJA *)v98);
        if ( (v27 & 1) != 0 )
          goto LABEL_66;
      }
      else
      {
        DCOBJA::~DCOBJA((DCOBJA *)v98);
      }
      if ( !*((_QWORD *)v26 + 11) )
      {
        v28 = *((_DWORD *)v26 + 16);
        if ( (v28 & 0x800) != 0 )
          break;
        if ( (v28 & 0x1000) == 0 )
          v23 = (__int64 *)v25;
      }
LABEL_66:
      v25 = v26;
      v26 = *(char **)v26;
    }
    while ( v26 );
    v29 = v26 == 0LL;
    if ( v26 )
    {
LABEL_70:
      if ( !v29 )
        v23 = (__int64 *)v25;
      i = (__int64 *)*v23;
      goto LABEL_73;
    }
LABEL_68:
    if ( v23 )
    {
      v29 = v26 == 0LL;
      goto LABEL_70;
    }
    if ( CreateCacheDC(a1, v6 & 0x4000 | 0x802, 0LL) )
    {
      v21 = v93;
      continue;
    }
    break;
  }
LABEL_283:
  GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  return 0LL;
}
