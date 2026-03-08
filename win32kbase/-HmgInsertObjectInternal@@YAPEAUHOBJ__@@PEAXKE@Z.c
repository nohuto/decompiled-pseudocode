/*
 * XREFs of ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001C690
 * Callers:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001A2C4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C001C0B0 (NtGdiCreateRectRgn.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C2B0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C001C658 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0050600 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     ?TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z @ 0x1C001CA64 (-TrackObjectReferenceInitialization@@YAXW4ReferenceTrackerCountedType@@PEAXI@Z.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C0050090 (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00510C0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C005168C (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0051F60 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C008B288 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00EE72C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(struct OBJECT *a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r14
  unsigned __int16 v4; // r12
  unsigned __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct _ERESOURCE *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // ebx
  __int64 v20; // rax
  PEPROCESS v21; // rcx
  int v22; // esi
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r14
  struct _ERESOURCE *v30; // rsi
  __int64 v31; // rsi
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // r8d
  struct _ERESOURCE *v40; // rcx
  GdiHandleManager *v41; // rcx
  __int64 v42; // rdx
  struct HOBJ__ *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // r8d
  struct _ERESOURCE *v51; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  int v56; // r8d
  int v57; // r9d
  unsigned int *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  char EtwGdiHandleType; // al
  int v62; // ecx
  int v63; // r8d
  int v64; // r8d
  int v65; // r9d
  int v66; // [rsp+40h] [rbp-20h]
  int v67; // [rsp+44h] [rbp-1Ch] BYREF
  struct HOBJ__ *v68; // [rsp+48h] [rbp-18h]
  PEPROCESS Process; // [rsp+50h] [rbp-10h] BYREF
  __int64 v70; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v71; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int8 v72; // [rsp+B0h] [rbp+50h]
  __int64 v73; // [rsp+B8h] [rbp+58h] BYREF

  v72 = a3;
  v71 = a2;
  v3 = a3;
  v68 = 0LL;
  v4 = a2;
  v6 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v9 = *ThreadWin32Thread;
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 72);
      if ( v10 )
        LODWORD(v6) = *(_DWORD *)(v10 + 8);
    }
  }
  v11 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v14 = *(_QWORD *)(SGDGetSessionState(v12) + 24);
  v15 = *(struct _ERESOURCE **)(v14 + 1912);
  if ( v15 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v15);
  }
  v16 = *(_QWORD *)(v14 + 1912);
  v17 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
  if ( *(_DWORD *)(v17 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v17,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v18,
      v16,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  v19 = v4 & 8;
  v66 = v19;
  if ( (v4 & 8) != 0 )
    goto LABEL_30;
  v20 = SGDGetSessionState(v17);
  v22 = 1;
  LODWORD(v73) = 1;
  v23 = *(_QWORD *)(v20 + 24);
  if ( (_DWORD)v6 && (_DWORD)v6 != -2147483630 )
  {
    Process = 0LL;
    if ( (_DWORD)v6 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    }
    else
    {
      if ( PsLookupProcessByProcessId((HANDLE)(int)v6, &Process) < 0 )
      {
LABEL_26:
        v21 = Process;
        if ( Process )
          ObfDereferenceObject(Process);
        goto LABEL_28;
      }
      CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
    }
    v27 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v26 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v27 = v26 & CurrentProcessWin32Process;
    }
    if ( v27 )
    {
      v29 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
      v30 = *(struct _ERESOURCE **)(v29 + 1912);
      if ( v30 )
      {
        PsEnterPriorityRegion();
        ExEnterCriticalRegionAndAcquireResourceExclusive(v30);
      }
      v31 = *(_QWORD *)(v29 + 1912);
      v33 = *(_QWORD *)(SGDGetSessionState(v28) + 24);
      if ( *(_DWORD *)(v33 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v33, v32, v34, v31, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      if ( *(_DWORD *)(v27 + 60) >= *(_DWORD *)(v23 + 2376) )
      {
        v55 = *(_DWORD *)(v27 + 288);
        LODWORD(v73) = 0;
        if ( (v55 & 0x20) == 0 )
        {
          *(_DWORD *)(v27 + 288) = v55 | 0x20;
          if ( (unsigned int)dword_1C02C93D8 > 5 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
            {
              v70 = 0x1000000LL;
              v67 = v56;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                (unsigned int)&dword_1C02C93D8,
                (unsigned int)&unk_1C029563A,
                v56,
                v57,
                (__int64)&v67,
                (__int64)&v70);
            }
          }
        }
      }
      else
      {
        HmgpIncProcessHandleCountEx((struct _W32PROCESS *)v27);
      }
      v35 = *(_QWORD *)(SGDGetSessionState(v33) + 24);
      v36 = *(_QWORD *)(v35 + 1912);
      v38 = *(_QWORD *)(SGDGetSessionState(v37) + 24);
      if ( *(_DWORD *)(v38 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v38, (unsigned int)&LockRelease, v39, v36, (__int64)L"GreBaseGlobals.hsemHmgr");
      v40 = *(struct _ERESOURCE **)(v35 + 1912);
      if ( v40 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v40);
        PsLeavePriorityRegion();
      }
      v22 = v73;
      v3 = v72;
    }
    v19 = v66;
    goto LABEL_26;
  }
LABEL_28:
  if ( !v22 )
  {
LABEL_63:
    v43 = v68;
    goto LABEL_34;
  }
  v4 = v71;
LABEL_30:
  v41 = *(GdiHandleManager **)(v11 + 8008);
  v71 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v41, &v71) )
  {
    if ( !v19 )
      HmgDecProcessHandleCount((unsigned int)v6);
    if ( !*(_BYTE *)(v11 + 8096) )
    {
      v21 = *(PEPROCESS *)(v11 + 8008);
      if ( *((_DWORD *)v21 + 1) >= *((_DWORD *)v21 + 2) )
      {
        *(_BYTE *)(v11 + 8096) = 1;
        if ( (unsigned int)dword_1C02C93D8 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
          {
            v71 = *(_DWORD *)(v11 + 1904);
            v73 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              (unsigned int)&dword_1C02C93D8,
              (unsigned int)&unk_1C02955A9,
              v64,
              v65,
              (__int64)&v71,
              (__int64)&v73);
          }
        }
      }
    }
    goto LABEL_63;
  }
  v43 = ENTRYOBJ::hSetup(a1, v3, v4, v71);
  if ( v3 == 5 )
  {
    v53 = *((_QWORD *)a1 + 85);
    v54 = 0LL;
  }
  else
  {
    if ( v3 != 16 )
      goto LABEL_33;
    v53 = *((_QWORD *)a1 + 17);
    v54 = 2LL;
  }
  TrackObjectReferenceInitialization(v54, v53, *((unsigned int *)a1 + 2));
LABEL_33:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
  {
    v58 = (unsigned int *)SGDGetUserSessionState(v21, v42, v44, v45);
    LOBYTE(v60) = v3;
    if ( v19 )
      LOBYTE(v6) = 0;
    EtwGdiHandleType = GetEtwGdiHandleType(v60, v59, *v58);
    McTemplateK0pqqq_EtwWriteTransfer(v62, (unsigned int)&GdiCreateHandle, v63, (_DWORD)v43, EtwGdiHandleType, v63, v6);
  }
LABEL_34:
  v46 = *(_QWORD *)(SGDGetSessionState(v21) + 24);
  v47 = *(_QWORD *)(v46 + 1912);
  v49 = *(_QWORD *)(SGDGetSessionState(v48) + 24);
  if ( *(_DWORD *)(v49 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v49, (unsigned int)&LockRelease, v50, v47, (__int64)L"GreBaseGlobals.hsemHmgr");
  v51 = *(struct _ERESOURCE **)(v46 + 1912);
  if ( v51 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v51);
    PsLeavePriorityRegion();
  }
  return v43;
}
