/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000CA70
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C000D7B0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C8F1C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C000FBA0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C002A450 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002C350 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     HmgRemoveObject @ 0x1C00311D0 (HmgRemoveObject.c)
 *     GreGetObjectOwner @ 0x1C0031450 (GreGetObjectOwner.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0038C70 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C003AF78 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AFA4 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0049500 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0080AE0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0080E78 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C008261C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0084B20 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00A5438 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     EngFreeUserMem @ 0x1C00BB8B0 (EngFreeUserMem.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00BE6F4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C00C9874 (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C013EC20 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  char *v7; // r14
  char *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  int v12; // r12d
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  void *v15; // rax
  __int128 v16; // xmm1
  int IsSemaphoreOwnedOrSharedByCurrentThread; // eax
  __int64 v18; // rbx
  unsigned int ObjectOwner; // eax
  int v20; // eax
  int v21; // r12d
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rdx
  void (__fastcall *v25)(__int64); // rax
  int v26; // eax
  __int64 v27; // rcx
  HANDLE v28; // rbx
  HANDLE v29; // rbx
  __int64 ThreadWin32Thread; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 CurrentProcess; // rax
  __int64 v34; // rax
  int v35; // ecx
  int v36; // eax
  _QWORD *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  __int64 v41; // rbx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+5Ch] [rbp-A4h]
  unsigned int v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h]
  HANDLE SecureHandle; // [rsp+80h] [rbp-80h]
  HANDLE v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  PVOID v53; // [rsp+98h] [rbp-68h]
  struct HOBJ__ *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-50h] BYREF
  HSEMAPHORE v57; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+D8h] [rbp-28h]
  __int128 v62; // [rsp+E8h] [rbp-18h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  _OWORD v64[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v65[160]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v66; // [rsp+1E0h] [rbp+E0h] BYREF
  int v67; // [rsp+1F8h] [rbp+F8h] BYREF

  v6 = 1;
  if ( (SURFACE *)a1 != SURFACE::pdibDefault && a1 )
  {
    v7 = 0LL;
    v8 = *(char **)(a1 + 72);
    v51 = 0LL;
    v52 = 0LL;
    SecureHandle = 0LL;
    v44 = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v51 = *(HANDLE *)(a1 + 192);
      v52 = *(_QWORD *)(a1 + 184);
      v44 = *(_DWORD *)(a1 + 216);
      v7 = &v8[-(unsigned __int16)*(_DWORD *)(a1 + 212)];
      SecureHandle = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_QWORD *)(a1 + 24);
    v10 = *(_OWORD *)(a1 + 288);
    v11 = *(_QWORD *)(a1 + 128);
    v12 = *(_DWORD *)(a1 + 320);
    v64[0] = *(_OWORD *)(a1 + 272);
    v49 = v9;
    v13 = *(_OWORD *)(a1 + 304);
    v58 = *(_QWORD *)(a1 + 136);
    LODWORD(v9) = *(unsigned __int16 *)(a1 + 102);
    v64[2] = v13;
    v45 = v9;
    v14 = *(_OWORD *)(a1 + 584);
    v15 = *(void **)(a1 + 248);
    v64[1] = v10;
    v59 = v11;
    v16 = *(_OWORD *)(a1 + 600);
    *(_OWORD *)Object = v14;
    BaseAddress = v8;
    v63 = *(_QWORD *)(a1 + 616);
    v53 = v15;
    v62 = v16;
    IsSemaphoreOwnedOrSharedByCurrentThread = GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDynamicModeChange);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v67,
      IsSemaphoreOwnedOrSharedByCurrentThread == 0);
    v18 = *(_QWORD *)(a1 + 48);
    v47 = v18;
    if ( (!v18 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v18 + 40) & 1) == 0) && v67 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      v67 = 0;
    }
    v55 = 0LL;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v65);
    if ( (*(_DWORD *)(a1 + 112) & 0x400000) != 0 && v18 )
    {
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v55, (struct PDEVOBJ *)&v47);
      DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v65, (struct PDEVOBJ *)&v47);
    }
    else
    {
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v65);
    }
    v54 = *(struct HOBJ__ **)a1;
    ObjectOwner = GreGetObjectOwner(v54, 5LL);
    v66 = 0;
    v46 = ObjectOwner;
    if ( !a3
      && !HmgRemoveObject((_DWORD)v54, 0, 1, a2 == 2, 5, (__int64)&v66)
      && ((unsigned int)(a2 - 1) > 1 || !HmgRemoveObject(*(_QWORD *)a1, 0, 0, a2 == 2, 5, (__int64)&v66))
      && (a2 != 3 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)a1, 0, 1, 2u, 5, &v66)) )
    {
      if ( v66 == 1 )
      {
        if ( (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          EngSetLastError(0xAAu);
LABEL_25:
          v6 = 0;
LABEL_115:
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v65);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v55);
          NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v67);
          return v6;
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 160)
          && ((*(_DWORD *)a1 & 0x800000) == 0 || (*(_WORD *)(a1 + 102) & 0x200) == 0)
          && (*(_DWORD *)(a1 + 112) & 0x800) == 0 )
        {
          goto LABEL_25;
        }
        v20 = *(_DWORD *)(a1 + 112);
        if ( (v20 & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 320) )
          {
            *(_DWORD *)(a1 + 320) = 1;
            _InterlockedAdd(&glRenderEndDelete, 1u);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 112) = v20 | 0x1000000;
        }
      }
      DEC_SHARE_REF_CNT(a1);
      goto LABEL_115;
    }
    if ( v12 )
    {
      _InterlockedDecrement(&glRenderEndDelete);
      v18 = v47;
    }
    v21 = -1073741637;
    if ( qword_1C0256890 )
      v22 = qword_1C0256890();
    else
      v22 = -1073741637;
    if ( v22 >= 0 && qword_1C0256898 )
      qword_1C0256898(a1);
    v23 = *(_DWORD *)(a1 + 112);
    if ( (v23 & 0x400000) == 0 || (v24 = v49) == 0 || !v18 )
    {
LABEL_59:
      v28 = SecureHandle;
      if ( SecureHandle )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          Feature_2249667896__private_IsEnabledDeviceUsage();
          MmUnsecureVirtualMemory(v28);
        }
        goto LABEL_105;
      }
      if ( v44 )
      {
        if ( BaseAddress )
          MmUnmapViewInSessionSpace(v7);
        goto LABEL_105;
      }
      v29 = v51;
      if ( v51 )
      {
        if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          Feature_2249667896__private_IsEnabledDeviceUsage();
          MmUnsecureVirtualMemory(v29);
          if ( BaseAddress )
          {
            if ( v52 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
            }
          }
        }
        goto LABEL_105;
      }
      if ( (v45 & 8) == 0 )
      {
        if ( (v45 & 0x800) != 0 )
        {
          v57 = ghsemMapRot;
          EngAcquireSemaphore(ghsemMapRot);
          v37 = *(_QWORD **)(a1 + 264);
          if ( v37 )
          {
            v38 = a1 + 528;
            v39 = *(_QWORD *)(a1 + 528);
            if ( v39 != a1 + 528 )
            {
              if ( *(_QWORD *)(v39 + 8) != v38 || (v40 = *(_QWORD **)(a1 + 536), *v40 != v38) )
                __fastfail(3u);
              *v40 = v39;
              *(_QWORD *)(v39 + 8) = v40;
            }
            if ( BaseAddress && v53 )
              MmUnmapViewOfSection(*v37);
          }
          W32PIDLOCK::vCleanUp((W32PIDLOCK *)v64);
          if ( v53 )
            ObfDereferenceObject(v53);
          SEMOBJ::vUnlock((SEMOBJ *)&v57);
        }
        else if ( (v45 & 0x10) != 0 )
        {
          vFreeKernelSection(BaseAddress);
        }
        goto LABEL_105;
      }
      if ( (v45 & 0x80u) == 0 )
      {
        EngFreeUserMem(BaseAddress);
LABEL_105:
        if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
          DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 4LL, v54, v66, v46, 0LL, 0LL, 0);
        SURFACE::Free((PSLIST_ENTRY)a1);
        v41 = v58;
        if ( v58 )
        {
          if ( qword_1C02568C0 )
            v21 = qword_1C02568C0();
          if ( v21 >= 0 && qword_1C02568C8 )
            qword_1C02568C8(v41);
        }
        if ( v59 )
        {
          v60 = v59;
          XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v60);
        }
        goto LABEL_115;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      CurrentProcess = PsGetCurrentProcess(v32, v31);
      MmUnmapViewOfSection(CurrentProcess);
      if ( ThreadWin32Thread && (v34 = *(_QWORD *)(ThreadWin32Thread + 72)) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 8);
      }
      else
      {
        if ( !(_DWORD)v63 )
        {
          if ( qword_1C02568B0 )
            v36 = qword_1C02568B0();
          else
            v36 = -1073741637;
          if ( v36 >= 0 && qword_1C02568B8 )
            qword_1C02568B8(BaseAddress);
          goto LABEL_80;
        }
        v35 = HIDWORD(v62);
      }
      Process = 0LL;
      if ( PsLookupProcessByProcessId((HANDLE)v35, &Process) >= 0 )
      {
        MmUnmapViewOfSection(Process);
        ObfDereferenceObject(Process);
      }
LABEL_80:
      if ( !Object[0] )
        KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
      ObfDereferenceObject(Object[0]);
      goto LABEL_105;
    }
    if ( (*(_DWORD *)(a1 + 116) & 9) != 0 )
    {
      v25 = *(void (__fastcall **)(__int64))(v18 + 2664);
      if ( v25 )
      {
        v27 = a1 + 24;
LABEL_58:
        v25(v27);
        goto LABEL_59;
      }
      v25 = *(void (__fastcall **)(__int64))(v18 + 3448);
      if ( !v25 )
        goto LABEL_59;
    }
    else
    {
      v25 = *(void (__fastcall **)(__int64))(v18 + 2776);
      if ( !v25 )
        goto LABEL_59;
      if ( (v23 & 0x40000) != 0 )
      {
        if ( !a2 )
        {
          if ( qword_1C02568A0 )
          {
            v26 = qword_1C02568A0();
            v24 = v49;
          }
          else
          {
            v26 = -1073741637;
          }
          if ( v26 >= 0 && qword_1C02568A8 )
            qword_1C02568A8(*(_QWORD *)(v18 + 1800), v24);
        }
        goto LABEL_59;
      }
    }
    v27 = v49;
    goto LABEL_58;
  }
  return v6;
}
