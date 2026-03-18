/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0025050
 * Callers:
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0063A90 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00B4184 (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA580 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C00DA790 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C001EDC0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00224D0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022B50 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     EngFreeUserMem @ 0x1C00A8740 (EngFreeUserMem.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B2270 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C016BC30 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0178CB8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0178D70 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0179828 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  _DWORD *v5; // r14
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edi
  GdiHandleManager *v9; // r15
  __int64 v10; // r15
  unsigned int v11; // edx
  __int64 v12; // r15
  _BYTE *v13; // rsi
  __int64 v14; // r13
  _QWORD *v15; // rax
  bool v16; // zf
  char v17; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v18; // rdx
  unsigned int v19; // ebx
  GdiHandleManager *v20; // rdi
  __int64 v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // r8
  unsigned int v24; // ebx
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // r10
  __int64 v28; // r15
  struct _ERESOURCE *v29; // rbx
  __int64 v30; // rcx
  PVOID v31; // r13
  unsigned int v32; // ebx
  PEPROCESS v33; // r9
  __int64 v34; // rdi
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v37; // r12
  unsigned int v38; // ebx
  unsigned int v39; // edx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // r15
  unsigned int v43; // edx
  __int64 v44; // r8
  __int64 v45; // rdx
  char v46; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v47; // rdx
  int v48; // ebx
  signed int v49; // r15d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v55; // rcx
  __int64 v56; // rdi
  int v57; // ecx
  int v58; // r8d
  GdiHandleManager *v59; // rdi
  unsigned int v60; // eax
  GdiHandleManager *v61; // rdi
  unsigned int v62; // eax
  struct OBJECT *EntryObject; // r12
  unsigned int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // r15
  unsigned int v67; // edx
  __int64 v68; // r8
  _QWORD *v69; // r10
  __int64 v70; // r11
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rax
  __int64 v76; // rcx
  void *v77; // rdi
  void *v78; // r15
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rdi
  void *v87; // rdx
  int v88; // ecx
  int v89; // r8d
  __int64 CurrentThreadProcess; // rax
  char v91; // r8
  struct _ENTRY *Entry; // rax
  bool v93; // cc
  char EtwGdiHandleType; // al
  int v95; // ecx
  int v96; // r8d
  int v97; // r9d
  unsigned int v98; // r15d
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 ThreadWin32Thread; // r15
  __int64 CurrentProcess; // rax
  __int64 v105; // rax
  struct _ERESOURCE *v106; // rbx
  _QWORD *v107; // rbx
  _QWORD *v108; // rax
  _QWORD *v109; // rcx
  _QWORD *v110; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v112; // [rsp+50h] [rbp-29h]
  _OWORD v113[3]; // [rsp+68h] [rbp-11h] BYREF
  PEPROCESS Process; // [rsp+E0h] [rbp+67h] BYREF
  PEPROCESS v115; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int64 v116; // [rsp+F0h] [rbp+77h]

  v3 = *(__int64 **)this;
  if ( !*(_QWORD *)this )
    return;
  v5 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    LODWORD(Process) = *((_DWORD *)this + 3) != 0;
    v28 = *v3;
    v29 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(this, a2, a3);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v29);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
    Object[0] = 0LL;
    LODWORD(Object[1]) = 0;
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)Object,
      (unsigned __int16)v28 | ((unsigned int)v28 >> 8) & 0xFF0000,
      1LL,
      0,
      0);
    if ( LODWORD(Object[1]) )
    {
      v31 = Object[0];
      v32 = *(_DWORD *)Object[0] & 0xFFFFFF;
      if ( v32 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *(unsigned __int16 *)Object[0],
                                      1)
               + 13) == HIWORD(v32) )
            v32 = (unsigned __int16)v32;
        }
        else
        {
          v32 = *(unsigned __int16 *)Object[0];
        }
      }
      v33 = gpHandleManager;
      v115 = gpHandleManager;
      v34 = *((_QWORD *)gpHandleManager + 2);
      v35 = *(_DWORD *)(v34 + 2056);
      if ( v32 >= v35 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16)
        || (v32 >= v35
          ? (v36 = *(_QWORD *)(v34 + 8LL * (((v32 - v35) >> 16) + 1) + 8), v32 += -65536 * ((v32 - v35) >> 16) - v35)
          : (v36 = *(_QWORD *)(v34 + 8)),
            v32 >= *(_DWORD *)(v36 + 20)) )
      {
        v37 = 0LL;
      }
      else
      {
        v37 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v36 + 24) + 8 * ((unsigned __int64)v32 >> 8))
                        + 16LL * (unsigned __int8)v32
                        + 8);
      }
      if ( *((_BYTE *)v31 + 14) == 5 && *((_WORD *)v31 + 6) == WORD1(v28) )
      {
        if ( *(_WORD *)(v37 + 12) == (_WORD)Process && *(_DWORD *)(v37 + 8) == 1 )
        {
          v38 = (unsigned __int16)*(_DWORD *)v37 | (*(_DWORD *)v37 >> 8) & 0xFF0000;
          if ( v38 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              Entry = GdiHandleEntryDirectory::GetEntry(
                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                        (unsigned __int16)*(_DWORD *)v37,
                        1);
              v33 = v115;
              if ( *((unsigned __int8 *)Entry + 13) == HIWORD(v38) )
                v38 = (unsigned __int16)v38;
            }
            else
            {
              v38 = (unsigned __int16)*(_DWORD *)v37;
            }
          }
          v39 = *(_DWORD *)(v34 + 2056);
          if ( v38 >= v39 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16) )
          {
            v42 = 0LL;
          }
          else
          {
            if ( v38 >= v39 )
            {
              v40 = *(_QWORD *)(v34 + 8LL * (((v38 - v39) >> 16) + 1) + 8);
              v41 = v38 + -65536 * ((v38 - v39) >> 16) - v39;
            }
            else
            {
              v40 = *(_QWORD *)(v34 + 8);
              v41 = v38;
            }
            v42 = 0LL;
            if ( v41 < *(_DWORD *)(v40 + 20) )
            {
              if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                             + 16LL * (unsigned __int8)v41
                             + 8) )
                v42 = *(_QWORD *)v40 + 24LL * v41;
              v33 = v115;
            }
          }
          if ( v38 >= 0x10000 )
          {
            v93 = *(_DWORD *)v33 <= 0x10000u;
            LODWORD(Process) = (unsigned __int16)v38;
            if ( v93 )
            {
              v38 = (unsigned __int16)v38;
            }
            else if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                             (GdiHandleEntryDirectory *)v34,
                                             (unsigned __int16)v38,
                                             1)
                      + 13) == HIWORD(v38) )
            {
              v38 = (unsigned int)Process;
            }
          }
          v43 = *(_DWORD *)(v34 + 2056);
          if ( v38 >= v43 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16)
            || (v38 >= v43
              ? (v44 = *(_QWORD *)(v34 + 8LL * (((v38 - v43) >> 16) + 1) + 8), v38 += -65536 * ((v38 - v43) >> 16) - v43)
              : (v44 = *(_QWORD *)(v34 + 8)),
                v38 >= *(_DWORD *)(v44 + 20)) )
          {
            v45 = 0LL;
          }
          else
          {
            v45 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                            + 16LL * (unsigned __int8)v38
                            + 8);
          }
          if ( v45 != v37 )
            v42 = 0LL;
          v46 = *(_BYTE *)(v42 + 14);
          if ( v46 == 5 )
          {
            v47 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v37 + 680);
            if ( v47 && qword_1C028F9B8 )
              NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
                qword_1C028F9B8,
                v47,
                0);
          }
          else if ( v46 == 16 )
          {
            TrackObjectReferenceDecrement(
              2u,
              *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v37 + 136));
          }
          v48 = *((_DWORD *)v31 + 2);
          v49 = v48 & 0xFFFFFFFE;
          if ( (v48 & 0xFFFFFFFE) == 0 || v49 == -2147483630 )
          {
LABEL_82:
            v59 = gpHandleManager;
            v60 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v31 & 0xFFFFFF);
            GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v59 + 2), v60);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
            {
              EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v31 + 14));
              McTemplateK0pqqq_EtwWriteTransfer(v95, (unsigned int)&GdiDestroyHandle, v96, v97, EtwGdiHandleType);
            }
            *((_BYTE *)v31 + 14) = 0;
            *((_QWORD *)v31 + 2) = 0LL;
            *((_DWORD *)v31 + 2) = v48 & 1;
            v61 = gpHandleManager;
            v62 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v31 & 0xFFFFFF);
            EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v61 + 2), v62);
            v64 = (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000;
            if ( v64 >= 0x10000 )
            {
              if ( *(_DWORD *)v61 > 0x10000u )
              {
                if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                            *((GdiHandleEntryDirectory **)v61 + 2),
                                            (unsigned __int16)*(_DWORD *)EntryObject,
                                            1)
                     + 13) == HIWORD(v64) )
                  v64 = (unsigned __int16)v64;
              }
              else
              {
                v64 = (unsigned __int16)*(_DWORD *)EntryObject;
              }
            }
            v65 = *((_QWORD *)v61 + 3);
            if ( v65 )
            {
              v98 = *(_DWORD *)(v65 + 4LL * (unsigned __int16)v64);
              if ( v98 )
              {
                if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v61 + 2), v98, 1) )
                  GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v61 + 2), v98, 1);
                *(_DWORD *)(*((_QWORD *)v61 + 3) + 4LL * (unsigned __int16)v64) = 0;
                --*((_DWORD *)v61 + 1);
              }
            }
            v66 = *((_QWORD *)v61 + 2);
            v67 = *(_DWORD *)(v66 + 2056);
            if ( v64 < v67 + ((*(unsigned __int16 *)(v66 + 2) + 0xFFFF) << 16) )
            {
              if ( v64 >= v67 )
              {
                v68 = *(_QWORD *)(v66 + 8LL * (((v64 - v67) >> 16) + 1) + 8);
                v64 += -65536 * ((v64 - v67) >> 16) - v67;
              }
              else
              {
                v68 = *(_QWORD *)(v66 + 8);
              }
              v69 = *(_QWORD **)(v68 + 24);
              if ( v64 < *(_DWORD *)(v68 + 20) )
              {
                v70 = *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v64 >> 8));
                if ( *(_QWORD *)(v70 + 16LL * (unsigned __int8)v64 + 8) )
                {
                  *(_QWORD *)(v70 + 16LL * (unsigned __int8)v64 + 8) = 0LL;
                  *(_QWORD *)(*(_QWORD *)v68 + 24LL * v64) = *(unsigned int *)(v68 + 12);
                  --*(_DWORD *)(v68 + 16);
                  v69 = *(_QWORD **)(v68 + 24);
                  *(_DWORD *)(v68 + 12) = v64;
                }
              }
              ExReleasePushLockExclusiveEx(
                *(_QWORD *)(*v69 + 8 * ((unsigned __int64)v64 >> 8)) + 16LL * (unsigned __int8)v64,
                0LL);
              KeLeaveCriticalRegion();
              *(_BYTE *)v66 = 0;
            }
            *(_QWORD *)EntryObject = 0LL;
            --*((_DWORD *)v61 + 1);
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v71);
            if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
            {
              v115 = *(PEPROCESS *)(*(_QWORD *)this + 128LL);
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v115);
              *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
            }
            if ( *((_DWORD *)this + 3) )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
            v75 = *(__int64 **)this;
            v76 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
            v77 = *(void **)(*(_QWORD *)this + 72LL);
            v78 = *(void **)(*(_QWORD *)this + 248LL);
            v79 = *(_OWORD *)(*(_QWORD *)this + 288LL);
            v113[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
            v80 = *((_OWORD *)v75 + 19);
            v113[1] = v79;
            v81 = *(_OWORD *)(v75 + 73);
            v113[2] = v80;
            v82 = *(_OWORD *)(v75 + 75);
            *(_OWORD *)Object = v81;
            v112 = v82;
            if ( (v76 & 8) != 0 )
            {
              if ( (v75[14] & 0x40000) != 0 && v77 )
              {
                if ( (v76 & 0x80u) != 0LL )
                {
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                  {
                    CurrentProcess = PsGetCurrentProcess(v100, v99, v101, v102);
                    MmUnmapViewOfSection(CurrentProcess);
                    v105 = *(_QWORD *)(ThreadWin32Thread + 72);
                    v115 = 0LL;
                    if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v105 + 8), &v115) >= 0 )
                    {
                      MmUnmapViewOfSection(v115);
                      ObfDereferenceObject(v115);
                    }
                  }
                  if ( !Object[0] )
                    KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                  ObfDereferenceObject(Object[0]);
                }
                else
                {
                  EngFreeUserMem(v77);
                }
              }
              goto LABEL_104;
            }
            if ( (v76 & 0x800) == 0 )
            {
              if ( (v76 & 0x10) != 0 )
                vFreeKernelSection(v77);
              goto LABEL_104;
            }
            v106 = (struct _ERESOURCE *)ghsemMapRot;
            v115 = (PEPROCESS)ghsemMapRot;
            if ( ghsemMapRot )
            {
              PsEnterPriorityRegion(v76, v72, v73);
              ExEnterCriticalRegionAndAcquireResourceExclusive(v106);
              v75 = *(__int64 **)this;
            }
            v107 = (_QWORD *)v75[33];
            if ( !v107 )
              goto LABEL_196;
            PsGetCurrentProcessWin32Process(v76, v72, v73, v74);
            v108 = (_QWORD *)(*(_QWORD *)this + 528LL);
            v109 = (_QWORD *)*v108;
            if ( (_QWORD *)*v108 != v108 )
            {
              if ( (_QWORD *)v109[1] != v108 || (v110 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v110 != v108) )
                __fastfail(3u);
              *v110 = v109;
              v109[1] = v110;
            }
            if ( v77 && v78 )
            {
              MmUnmapViewOfSection(*v107);
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v113);
            }
            else
            {
LABEL_196:
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v113);
              if ( !v78 )
              {
LABEL_198:
                SEMOBJ::vUnlock((SEMOBJ *)&v115);
LABEL_104:
                v83 = *(_QWORD *)this;
                v84 = *(_QWORD *)(*(_QWORD *)this + 680LL);
                if ( v84 )
                  ReleaseReferenceCountedObjectHandle(0LL, v84, v73);
                if ( *(_BYTE *)(v83 + 688) )
                {
                  v87 = *(void **)(v83 + 72);
                  if ( v87 )
                  {
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      v87);
                    *(_QWORD *)(v83 + 72) = 0LL;
                  }
                }
                v85 = *(_QWORD *)gpTypeIsolation;
                if ( *(_QWORD *)gpTypeIsolation )
                {
                  memset((void *)v83, 0, 0x2C0uLL);
                  ++*(_DWORD *)(v85 + 76);
                  v86 = v85 + 48;
                  if ( ExQueryDepthSList((PSLIST_HEADER)v86) >= *(_WORD *)(v86 + 16) )
                  {
                    ++*(_DWORD *)(v86 + 32);
                    (*(void (__fastcall **)(__int64, __int64))(v86 + 56))(v83, v86);
                  }
                  else
                  {
                    ExpInterlockedPushEntrySList((PSLIST_HEADER)v86, (PSLIST_ENTRY)v83);
                  }
                }
                return;
              }
            }
            ObfDereferenceObject(v78);
            goto LABEL_198;
          }
          Process = 0LL;
          if ( v49 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v51, v50, v52, v53);
          }
          else
          {
            if ( PsLookupProcessByProcessId((HANDLE)v49, &Process) < 0 )
            {
LABEL_80:
              if ( Process )
                ObfDereferenceObject(Process);
              goto LABEL_82;
            }
            CurrentProcessWin32Process = PsGetProcessWin32Process(Process);
          }
          v56 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
          {
            GreAcquireHmgrSemaphore(v55);
            --*(_DWORD *)(v56 + 60);
            if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v57,
                (unsigned int)&LockRelease,
                v58,
                (_DWORD)ghsemHmgr,
                (__int64)L"ghsemHmgr");
            if ( ghsemHmgr )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
              PsLeavePriorityRegion();
            }
          }
          goto LABEL_80;
        }
        *((_BYTE *)v31 + 15) |= 8u;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      if ( LODWORD(Object[1]) )
        HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v88, (unsigned int)&LockRelease, v89, (_DWORD)ghsemHmgr, (__int64)L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
    }
    else
    {
      GreReleaseHmgrSemaphore(v30);
    }
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(unsigned int **)this, 0LL);
    return;
  }
  v6 = *(_DWORD *)v3;
  v7 = *(_DWORD *)v3;
  v115 = 0LL;
  v8 = (unsigned __int16)v6 | (v7 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v115, a2, a3);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v9 = gpHandleManager;
  LODWORD(Object[1]) = 1;
  if ( v8 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v8,
                                  1)
           + 13) == HIWORD(v8) )
        v8 = (unsigned __int16)v8;
    }
    else
    {
      v8 = (unsigned __int16)v8;
    }
  }
  v10 = *((_QWORD *)v9 + 2);
  v11 = *(_DWORD *)(v10 + 2056);
  if ( v8 >= v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16) )
    goto LABEL_34;
  if ( v8 >= v11 )
  {
    v12 = *(_QWORD *)(v10 + 8LL * (((v8 - v11) >> 16) + 1) + 8);
    v8 += -65536 * ((v8 - v11) >> 16) - v11;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 8);
  }
  v13 = 0LL;
  if ( v8 >= *(_DWORD *)(v12 + 20) )
    goto LABEL_34;
  v14 = 16LL * (unsigned __int8)v8;
  v15 = *(_QWORD **)(v12 + 24);
  v116 = 8 * ((unsigned __int64)v8 >> 8);
  Process = (PEPROCESS)(v14 + *(_QWORD *)(*v15 + v116));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(Process, 0LL);
  if ( v8 < *(_DWORD *)(v12 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + v116) + v14 + 8) )
  {
    *(_DWORD *)(24LL * v8 + *(_QWORD *)v12 + 8) |= 1u;
    v13 = (_BYTE *)(24LL * v8 + *(_QWORD *)v12);
  }
  else
  {
    ExReleasePushLockExclusiveEx(Process, 0LL);
    KeLeaveCriticalRegion();
  }
  Object[0] = v13;
  if ( !v13 )
    goto LABEL_34;
  _m_prefetchw(v13 + 8);
  v16 = (v13[15] & 0x20) == 0;
  HIDWORD(Object[1]) = *((_DWORD *)v13 + 2);
  if ( v16 )
  {
LABEL_17:
    v17 = v13[14];
    if ( v17 == 5 )
    {
      v18 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v3[85];
      if ( v18 && qword_1C028F9B8 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C028F9B8, v18, 0);
    }
    else if ( v17 == 16 )
    {
      TrackObjectReferenceDecrement(
        2u,
        (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v3[17]);
    }
    --*((_DWORD *)v3 + 2);
    v19 = *(_DWORD *)v13 & 0xFFFFFF;
    if ( v19 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v13,
                                    1)
             + 13) == HIWORD(v19) )
          v19 = (unsigned __int16)v19;
      }
      else
      {
        v19 = *(unsigned __int16 *)v13;
      }
    }
    v20 = gpHandleManager;
    v21 = *((_QWORD *)gpHandleManager + 2);
    v22 = *(_DWORD *)(v21 + 2056);
    if ( v19 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
    {
      if ( v19 >= v22 )
      {
        v23 = *(_QWORD *)(v21 + 8LL * (((v19 - v22) >> 16) + 1) + 8);
        v19 += -65536 * ((v19 - v22) >> 16) - v22;
      }
      else
      {
        v23 = *(_QWORD *)(v21 + 8);
      }
      if ( v19 < *(_DWORD *)(v23 + 20) )
        v5 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8 * ((unsigned __int64)v19 >> 8))
                        + 16LL * (unsigned __int8)v19
                        + 8);
    }
    v24 = (unsigned __int16)*v5 | (*v5 >> 8) & 0xFF0000;
    if ( v24 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v5,
                                    1)
             + 13) == HIWORD(v24) )
        {
          v24 = (unsigned __int16)v24;
        }
        else if ( *(_DWORD *)v20 > 0x10000u )
        {
          GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v20 + 2), (unsigned __int16)v24, v91);
        }
      }
      else
      {
        v24 = (unsigned __int16)*v5;
      }
    }
    v25 = *((_QWORD *)v20 + 2);
    v26 = *(_DWORD *)(v25 + 2056);
    if ( v24 < v26 + ((*(unsigned __int16 *)(v25 + 2) + 0xFFFF) << 16) )
    {
      if ( v24 >= v26 )
      {
        v27 = *(_QWORD *)(v25 + 8LL * (((v24 - v26) >> 16) + 1) + 8);
        v24 += -65536 * ((v24 - v26) >> 16) - v26;
      }
      else
      {
        v27 = *(_QWORD *)(v25 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v27 + 24LL * v24 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v24 >> 8)) + 16LL * (unsigned __int8)v24,
        0LL);
      KeLeaveCriticalRegion();
    }
LABEL_34:
    KeLeaveCriticalRegion();
    return;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)Object);
  if ( LODWORD(Object[1]) )
  {
    v13 = Object[0];
    goto LABEL_17;
  }
}
