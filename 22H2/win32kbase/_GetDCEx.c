/*
 * XREFs of _GetDCEx @ 0x1C0038070
 * Callers:
 *     UserGetDesktopDC @ 0x1C0021AE0 (UserGetDesktopDC.c)
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C0036B40 (NtUserGetDC.c)
 *     _GetDC @ 0x1C00A3250 (_GetDC.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0008A90 (IsGreSelectRedirectionBitmapSupported.c)
 *     HmgMarkUndeletable @ 0x1C001CDB0 (HmgMarkUndeletable.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002BEF4 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     GreCreateRectRgnIndirect @ 0x1C00357D0 (GreCreateRectRgnIndirect.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0037720 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0038DB0 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0038DDC (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0038E40 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C003A270 (GreSelectVisRgnShared.c)
 *     GreOffsetRgn @ 0x1C003A600 (GreOffsetRgn.c)
 *     IsSpbCheckDceSupported @ 0x1C003AC1C (IsSpbCheckDceSupported.c)
 *     GreIsRendering @ 0x1C003AC50 (GreIsRendering.c)
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     CreateEmptyRgnPublic @ 0x1C006B840 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C006B8B0 (CreateCacheDC.c)
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 *     GreSetLayout @ 0x1C0093E60 (GreSetLayout.c)
 *     IsDeleteHrgnClipSupported @ 0x1C00972D4 (IsDeleteHrgnClipSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014CC98 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CD50 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FC404 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  HRGN v6; // r12
  _QWORD *v7; // r13
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  const wchar_t *v10; // rcx
  struct _ERESOURCE *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  char v14; // al
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r10
  char v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbp
  _QWORD *v24; // rdi
  unsigned int v25; // ebp
  unsigned __int64 *v26; // r12
  unsigned __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rbx
  BOOL v30; // edi
  int v31; // eax
  bool v32; // zf
  HDC v33; // rcx
  _QWORD *v34; // rdi
  BOOL v35; // edi
  int v36; // edx
  int v37; // r14d
  __int64 v38; // rax
  unsigned __int64 v39; // xmm0_8
  struct _KTHREAD *CurrentThread; // r14
  __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v45; // rcx
  int v46; // r8d
  int v47; // ecx
  int v48; // ecx
  int v50; // ebp
  __int64 v51; // rcx
  __int64 *v52; // rdi
  __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r8
  unsigned __int8 v58; // cl
  void *v59; // rdx
  struct HOBJ__ *RectRgnIndirect; // rax
  HDC v61; // rcx
  int v62; // ecx
  HRGN v63; // rax
  __int64 CurrentProcessWin32Process; // rax
  HRGN v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // eax
  struct HOBJ__ *v70; // rax
  HDC v71; // rcx
  int v72; // ecx
  HRGN v73; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  HRGN v77; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+38h] [rbp-F0h]
  __int64 v79; // [rsp+40h] [rbp-E8h]
  __int64 v80; // [rsp+48h] [rbp-E0h]
  _QWORD v81[6]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v82[6]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v83[7]; // [rsp+B0h] [rbp-78h] BYREF
  int v84; // [rsp+130h] [rbp+8h]
  HRGN EmptyRgnPublic; // [rsp+138h] [rbp+10h]
  int v86; // [rsp+140h] [rbp+18h]
  _QWORD *v87; // [rsp+148h] [rbp+20h]

  EmptyRgnPublic = a2;
  v3 = 0LL;
  v5 = a3;
  v77 = 0LL;
  v6 = a2;
  v78 = 0LL;
  v7 = 0LL;
  v86 = 0;
  v84 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  v8 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      (unsigned int)L"ghsemDynamicModeChange",
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v9 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v8);
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
  v11 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v10);
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
  v12 = a1;
  v80 = 0LL;
  v87 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v13 = v12[5];
      v14 = *(_BYTE *)(v13 + 31);
      if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v12 != a1 )
        break;
      if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D )
      {
        v12 = (_QWORD *)v12[13];
        if ( v12 )
          continue;
      }
      goto LABEL_17;
    }
    v15 = 0;
    v79 = 0LL;
  }
  else
  {
LABEL_17:
    v15 = 1;
    v79 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 12) & 0x200) != 0 )
  {
    v50 = 1;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v52 = (__int64 *)(gpDispInfo + 24);
    v53 = *(_QWORD *)(gpDispInfo + 24);
    if ( !v53 )
      goto LABEL_183;
    do
    {
      v54 = *(_DWORD *)(v53 + 64);
      if ( v54 < 0 )
      {
        if ( *(_QWORD *)(v53 + 80) == PsGetCurrentProcessWin32Process(v51) )
          v50 = 0;
      }
      else if ( (v54 & 0x400000) != 0 )
      {
        DestroyCacheDC(v52, *(_QWORD *)(v53 + 8));
      }
      v55 = *v52;
      if ( v53 == *v52 )
      {
        v55 = *(_QWORD *)v53;
        v52 = (__int64 *)v53;
      }
      v53 = v55;
    }
    while ( v55 );
    if ( v50 )
    {
LABEL_183:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v51);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v3 = 0LL;
  }
  if ( (v5 & 0x10000) == 0 )
    goto LABEL_36;
  v16 = v5 & 0xFFFFFFC7;
  if ( (v5 & 1) != 0 )
  {
    v5 = v16 | 0x10;
    v17 = *(unsigned __int8 *)(a1[5] + 31LL);
    LOBYTE(v17) = v17 & 4;
    if ( !(_BYTE)v17 )
      v5 = v16;
  }
  else
  {
    v19 = (_QWORD *)a1[17];
    v18 = (unsigned int)v16 | 0x20;
    v20 = *(_BYTE *)(v19[1] + 8LL);
    if ( v20 >= 0 )
      v18 = (unsigned int)v16;
    if ( (((v18 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v20 >> 5)) != 0 )
    {
      if ( (v20 & 0x40) != 0 )
      {
        v68 = v19[5];
        if ( v68 )
          v80 = *(_QWORD *)(v68 + 8);
      }
      else
      {
        v18 = (unsigned int)v18 | 2;
      }
    }
    v17 = (unsigned int)v18 | 8;
    v16 = *(unsigned __int8 *)(a1[5] + 31LL);
    if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
      v17 = (unsigned int)v18;
    v5 = v17 | 0x10;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
      v5 = v17;
    if ( (v16 & 0x20) == 0 )
      goto LABEL_36;
    v5 &= ~8u;
    if ( !v19[10] )
      goto LABEL_36;
  }
  v5 |= 2u;
LABEL_36:
  if ( (v5 & 0x80000) != 0 )
    v5 = v5 & 0xFFFFFFD5 | 2;
  if ( qword_1C0256678 && (int)qword_1C0256678(v17, v16, v18) >= 0 && qword_1C0256680 )
    v3 = qword_1C0256680(a1, v16, v18);
  if ( v3 && (*(_DWORD *)(*(_QWORD *)(v3 + 40) + 24LL) & 0x20000000) != 0 )
  {
    v23 = qword_1C0256688 && (int)qword_1C0256688(v17, v16, v18) >= 0 && qword_1C0256690
        ? qword_1C0256690(v3, v21, v22)
        : 0LL;
    v78 = v23;
    if ( v23 || (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 0x20) != 0 )
    {
      v5 |= 0x4000u;
      v7 = (_QWORD *)v3;
      if ( a1 == (_QWORD *)v3 && (v5 & 0x20) != 0 )
        v5 = v5 & 0xFFFFFFDD | 2;
      if ( (unsigned __int64)v6 > 2 )
      {
        if ( (v5 & 0x40000) != 0 )
        {
          EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
          v65 = v6;
          v6 = EmptyRgnPublic;
          GreCombineRgn(EmptyRgnPublic, v65, 0LL, 5);
          v5 &= ~0x40000u;
        }
        GreOffsetRgn(v6);
      }
    }
  }
  if ( (v5 & 0x20) == 0 )
    goto LABEL_54;
  v56 = (_QWORD *)a1[13];
  if ( !v56 )
    v56 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 24LL);
  if ( (v5 |= 2u, (v5 & 0x18) != 0)
    || (v57 = a1[5], (*(_BYTE *)(v57 + 21) & 1) == 0) && (*(_BYTE *)(v56[5] + 31LL) & 2) != 0
    || (v58 = *(_BYTE *)(v56[5] + 31LL), ((v58 ^ *(_BYTE *)(v57 + 31)) & 0x10) != 0) )
  {
LABEL_54:
    v24 = a1;
  }
  else
  {
    v5 &= 0xFFFFFFE7;
    v87 = v56;
    v24 = v56;
    if ( (v58 & 4) != 0 )
      v5 |= 0x10u;
  }
  if ( (v5 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
    v5 |= 2u;
  v25 = v5 & 0x8080441F;
  if ( (v5 & 2) != 0 )
  {
    while ( 1 )
    {
      v26 = (unsigned __int64 *)(gpDispInfo + 24);
      v27 = *(_QWORD *)(gpDispInfo + 24);
      if ( v27 )
        break;
LABEL_60:
      v26 = 0LL;
      v28 = gpDispInfo + 24;
      v29 = *(_QWORD *)(gpDispInfo + 24);
      if ( v29 )
      {
        do
        {
          if ( (*(_DWORD *)(v29 + 64) & 0x400002) == 2 )
          {
            DCOBJA::DCOBJA((DCOBJA *)v83, *(HDC *)(v29 + 8));
            v30 = v83[0] && *(_DWORD *)(v83[0] + 40LL) & 1;
            DCOBJA::~DCOBJA((DCOBJA *)v83);
            if ( !v30 && !*(_QWORD *)(v29 + 88) )
            {
              v31 = *(_DWORD *)(v29 + 64);
              if ( (v31 & 0x800) != 0 )
                break;
              if ( (v31 & 0x1000) == 0 )
                v26 = (unsigned __int64 *)v28;
            }
          }
          v28 = v29;
          v29 = *(_QWORD *)v29;
        }
        while ( v29 );
        v32 = v29 == 0;
        if ( v29 )
          goto LABEL_73;
      }
      if ( v26 )
      {
        v32 = v29 == 0;
LABEL_73:
        if ( !v32 )
          v26 = (unsigned __int64 *)v28;
        v27 = *v26;
        goto LABEL_76;
      }
      if ( !CreateCacheDC(a1, v5 & 0x4000 | 0x802, 0LL) )
        goto LABEL_256;
      v24 = v87;
    }
    while ( 1 )
    {
      if ( *(_QWORD **)(v27 + 24) == v24 && *(_QWORD **)(v27 + 32) == v7 && !*(_QWORD *)(v27 + 88) )
      {
        DCOBJA::DCOBJA((DCOBJA *)v82, *(HDC *)(v27 + 8));
        v35 = v82[0] && *(_DWORD *)(v82[0] + 40LL) & 1;
        DCOBJA::~DCOBJA((DCOBJA *)v82);
        v32 = !v35;
        v24 = v87;
        if ( v32 )
        {
          v36 = *(_DWORD *)(v27 + 64);
          if ( v25 == (v36 & 0x80C05C1F)
            && ((*(_BYTE *)(v87[5] + 31LL) & 0x20) == 0 || *(_QWORD *)(v27 + 16) == *(_QWORD *)(v27 + 24))
            && (!v79 || (v36 & 0x10000000) == 0) )
          {
            break;
          }
        }
      }
      v26 = (unsigned __int64 *)v27;
      v27 = *(_QWORD *)v27;
      if ( !v27 )
        goto LABEL_60;
    }
    *(_DWORD *)(v27 + 64) = v36 | 0x1000;
    if ( a1 != *(_QWORD **)(v27 + 16) )
    {
      if ( (int)IsSpbCheckDceSupported() >= 0 && qword_1C02566E0 )
        qword_1C02566E0(v27);
      *(_QWORD *)(v27 + 16) = a1;
      ResetOrg(0LL, v27, 0);
    }
  }
  else
  {
    v26 = (unsigned __int64 *)(gpDispInfo + 24);
    v27 = *(_QWORD *)(gpDispInfo + 24);
    if ( !v27 )
      goto LABEL_256;
    while ( (*(_DWORD *)(v27 + 64) & 0x400002) != 0
         || (unsigned int)GreIsRendering(*(HDC *)(v27 + 8))
         || *(_QWORD **)(v27 + 16) != a1 && *(_QWORD *)(v27 + 8) != v80 )
    {
      v26 = (unsigned __int64 *)v27;
      v27 = *(_QWORD *)v27;
      if ( !v27 )
        goto LABEL_256;
    }
    if ( *(_QWORD *)(v27 + 56) )
    {
      if ( (v5 & 0xC0) != 0 )
      {
        v69 = IsDeleteHrgnClipSupported();
        if ( v69 >= 0 && qword_1C02566C0 )
          qword_1C02566C0(v27);
      }
    }
    if ( (*(_DWORD *)(v27 + 64) & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v27 + 32) + 40LL) + 27LL) & 2) != 0
        && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0
        && qword_1C02566D0 )
      {
        qword_1C02566D0(v27);
      }
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 && qword_1C0255AA8 )
        qword_1C0255AA8(*(_QWORD *)(v27 + 8), 0LL);
    }
    if ( *(_QWORD **)(v27 + 16) != a1
      || *(_QWORD **)(v27 + 32) != v7
      || *(_QWORD **)(v27 + 24) != v87
      || !v15
      || ((v5 ^ *(_DWORD *)(v27 + 64)) & 0x4000) != 0
      || (*(_DWORD *)(v27 + 64) & 0x10000000) != 0 )
    {
      goto LABEL_76;
    }
  }
LABEL_96:
  v37 = v86;
  while ( (*(_DWORD *)(v27 + 64) & 0x8080441F) != v25 )
  {
LABEL_76:
    v84 = 1;
    if ( (*(_DWORD *)(v27 + 64) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02566E0 )
      qword_1C02566E0(v27);
    v33 = *(HDC *)(v27 + 8);
    *(_DWORD *)(v27 + 64) = v25 | 0x1000;
    GreValidateVisrgn(v33);
    v77 = 0LL;
    if ( !qword_1C0256698 || (int)qword_1C0256698() < 0 )
    {
      v34 = v87;
LABEL_182:
      *(_DWORD *)(v27 + 64) |= 0x10000000u;
      goto LABEL_84;
    }
    v34 = v87;
    if ( !qword_1C02566A0 || !(unsigned int)qword_1C02566A0(&v77, a1, v87, v25) )
      goto LABEL_182;
LABEL_84:
    *(_QWORD *)(v27 + 16) = a1;
    *(_QWORD *)(v27 + 24) = v34;
    *(_QWORD *)(v27 + 32) = v7;
    *(_QWORD *)(v27 + 40) = 0LL;
    *(_QWORD *)(v27 + 48) = 0LL;
    ResetOrg(v77, v27, 1);
    if ( v77 )
      goto LABEL_96;
    v37 = 1;
    v86 = 1;
  }
  if ( v27 != *(_QWORD *)(gpDispInfo + 24) )
  {
    *v26 = *(_QWORD *)v27;
    *(_QWORD *)v27 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v27;
  }
  GreValidateVisrgn(*(HDC *)(v27 + 8));
  if ( (v5 & 0x80u) != 0 )
  {
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      GreSetRectRgn(ghrgnGDC, 0);
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      v61 = *(HDC *)(v27 + 8);
      *(_QWORD *)(v27 + 56) = RectRgnIndirect;
      GreSelectVisRgnShared(v61);
      v62 = *(_DWORD *)(v27 + 64);
      *(_QWORD *)(v27 + 40) = EmptyRgnPublic;
      if ( (v5 & 0x40000) != 0 )
        v62 |= 0x40000u;
      *(_DWORD *)(v27 + 64) = v62 | 0x80;
      if ( EmptyRgnPublic )
      {
        GreCombineRgn(ghrgnGDC, *(HRGN *)(v27 + 56), EmptyRgnPublic, 1);
        v63 = (HRGN)CreateEmptyRgnPublic();
        *(_QWORD *)(v27 + 48) = v63;
        GreCombineRgn(v63, EmptyRgnPublic, 0LL, 5);
        if ( (unsigned __int64)EmptyRgnPublic > 2 && (*(_DWORD *)(v27 + 64) & 0x40000) == 0 )
        {
          PsGetCurrentProcessId();
          HmgMarkUndeletable((unsigned int)EmptyRgnPublic, 4);
        }
      }
      else
      {
        *(_QWORD *)(v27 + 48) = 0LL;
      }
LABEL_248:
      *(_DWORD *)(v27 + 64) &= ~0x2000u;
      GreSelectVisRgnShared(*(HDC *)(v27 + 8));
    }
  }
  else if ( (v5 & 0x40) != 0 && EmptyRgnPublic )
  {
    GreSetRectRgn(ghrgnGDC, 0);
    v70 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    v71 = *(HDC *)(v27 + 8);
    *(_QWORD *)(v27 + 56) = v70;
    GreSelectVisRgnShared(v71);
    v72 = *(_DWORD *)(v27 + 64);
    *(_QWORD *)(v27 + 40) = EmptyRgnPublic;
    if ( (v5 & 0x40000) != 0 )
      v72 |= 0x40000u;
    *(_DWORD *)(v27 + 64) = v72 | 0x40;
    if ( EmptyRgnPublic == (HRGN)1 )
    {
      *(_QWORD *)(v27 + 48) = 1LL;
    }
    else
    {
      GreCombineRgn(ghrgnGDC, *(HRGN *)(v27 + 56), EmptyRgnPublic, 4);
      v73 = (HRGN)CreateEmptyRgnPublic();
      *(_QWORD *)(v27 + 48) = v73;
      GreCombineRgn(v73, EmptyRgnPublic, 0LL, 5);
      if ( (unsigned __int64)EmptyRgnPublic > 2 && (*(_DWORD *)(v27 + 64) & 0x40000) == 0 )
      {
        PsGetCurrentProcessId();
        HmgMarkUndeletable((unsigned int)EmptyRgnPublic, 4);
      }
    }
    goto LABEL_248;
  }
  if ( (*(_DWORD *)(v27 + 64) & 0x4000) != 0 )
  {
    if ( qword_1C0255AA0
      && (int)qword_1C0255AA0() >= 0
      && (!qword_1C0255AA8 || !(unsigned int)qword_1C0255AA8(*(_QWORD *)(v27 + 8), v78)) )
    {
      v37 = 1;
    }
    DCOBJA::DCOBJA((DCOBJA *)v81, *(HDC *)(v27 + 8));
    if ( v81[0] )
    {
      *(_DWORD *)(v81[0] + 36LL) |= 0x40u;
      v38 = *(_QWORD *)(v81[0] + 1080LL);
      v39 = _mm_srli_si128(*(__m128i *)(v81[0] + 1080LL), 8).m128i_u64[0];
      if ( (_DWORD)v38 != (_DWORD)v39
        && (int)v38 < (int)v39
        && HIDWORD(v38) != HIDWORD(v39)
        && SHIDWORD(v38) < SHIDWORD(v39) )
      {
        *(_DWORD *)(v81[0] + 1080LL) = 0x7FFFFFFF;
        *(_DWORD *)(v81[0] + 1084LL) = 0x7FFFFFFF;
        *(_DWORD *)(v81[0] + 1088LL) = 0x80000000;
        *(_DWORD *)(v81[0] + 1092LL) = 0x80000000;
      }
    }
    DCOBJA::~DCOBJA((DCOBJA *)v81);
    if ( v37 )
      GreSelectVisRgnShared(*(HDC *)(v27 + 8));
  }
  if ( (*(_DWORD *)(v27 + 64) & 2) != 0 )
  {
    if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)(v27 + 8), 2147483650LL, 0LL) )
    {
      CurrentThread = KeGetCurrentThread();
      v41 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentProcess = PsGetCurrentProcess(v43, v42),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v41 = *ThreadWin32Thread;
      }
      *(_QWORD *)(v27 + 72) = v41;
      *(_QWORD *)(v27 + 80) = 0LL;
      --gnDCECount;
      if ( v84 && qword_1C0255AB0 && (int)qword_1C0255AB0() >= 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || (v59 = gahStockObjects96[13]) == 0LL )
          v59 = gahStockObjects[13];
        if ( qword_1C0255AB8 )
          qword_1C0255AB8(*(_QWORD *)(v27 + 8), v59);
      }
      goto LABEL_118;
    }
    *(_DWORD *)(v27 + 64) &= ~0x1000u;
    DestroyCacheDC((__int64 *)(gpDispInfo + 24), 0LL);
LABEL_256:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 0LL;
  }
  else
  {
LABEL_118:
    if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v5 & 0x40000000) == 0 )
      GreSetLayout(*(HDC *)(v27 + 8), -1, 1u);
    GreValidateVisrgn(*(HDC *)(v27 + 8));
    if ( qword_1C0255AC0 && (int)qword_1C0255AC0() >= 0 && qword_1C0255AC8 )
      qword_1C0255AC8(*(_QWORD *)(v27 + 8), *a1, 0LL, 0LL, 0);
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7[5] + 26LL) & 8) != 0 )
      {
        if ( qword_1C0255AC0 )
        {
          if ( (int)qword_1C0255AC0() >= 0 )
          {
            v45 = v7[5];
            if ( qword_1C0255AC8 )
              qword_1C0255AC8(
                *(_QWORD *)(v27 + 8),
                *a1,
                *v7,
                (*(_BYTE *)(v45 + 27) & 2) == 0,
                (*(_WORD *)(v45 + 42) & 0x2FFF) == 669);
          }
        }
      }
    }
    if ( *(int *)(v27 + 64) < 0 )
    {
      v66 = PsGetCurrentProcessWin32Process(v45);
      *(_DWORD *)(v66 + 12) |= 0x200u;
      *(_QWORD *)(v27 + 72) = 0LL;
      *(_QWORD *)(v27 + 80) = PsGetCurrentProcessWin32Process(v67);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v45,
        (unsigned int)&LockRelease,
        v46,
        (_DWORD)ghsemDCVisRgn,
        (__int64)L"ghsemDCVisRgn");
    v47 = (int)ghsemDCVisRgn;
    if ( ghsemDCVisRgn )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
      PsLeavePriorityRegion();
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v47,
        (unsigned int)&LockRelease,
        v46,
        (_DWORD)ghsemGreLock,
        (__int64)L"ghsemGreLock");
    v48 = (int)ghsemGreLock;
    if ( ghsemGreLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
      PsLeavePriorityRegion();
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v48,
        (unsigned int)&LockRelease,
        v46,
        (_DWORD)ghsemDynamicModeChange,
        (__int64)L"ghsemDynamicModeChange");
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
      PsLeavePriorityRegion();
    }
    return *(_QWORD *)(v27 + 8);
  }
}
