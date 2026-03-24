/*
 * XREFs of GreRealizePalette @ 0x1C011BC6C
 * Callers:
 *     xxxRealizePalette @ 0x1C011BC10 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0273854 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D43FC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00D6670 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02ADF94 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BD380 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  HPALETTE v4; // rdi
  struct _W32PROCESS *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  HDC v11; // rdi
  void *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 matched; // rax
  HDC v19; // rbx
  _DWORD *v20; // rdx
  int v21; // eax
  HDC v22; // rdi
  void *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rax
  HDC v26; // rbx
  void (__fastcall *v27)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v28; // r8
  unsigned int i; // r9d
  DYNAMICMODECHANGESHARELOCK *v30; // rcx
  unsigned int v31; // ebx
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v39[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v47; // [rsp+100h] [rbp+0h] BYREF
  __int64 v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  _QWORD v50[2]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v51[40]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v52; // [rsp+158h] [rbp+58h]
  __int64 v53; // [rsp+160h] [rbp+60h]
  char v54; // [rsp+1A8h] [rbp+A8h] BYREF
  int v55; // [rsp+1B0h] [rbp+B0h] BYREF
  int v56; // [rsp+1B8h] [rbp+B8h] BYREF

  v56 = 0;
  v55 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v45, a1);
  if ( !v45[0] )
    goto LABEL_81;
  v34 = *(_QWORD *)(v45[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v54);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct PDEVOBJ *)&v34);
  v41 = *(_QWORD *)(v34 + 64);
  GreAcquireSemaphore(v41);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v50);
  v1 = v34;
  v53 = 0LL;
  v47 = 0LL;
  v52 = 0LL;
  v50[0] = 0LL;
  v49 = 1;
  if ( (*(_DWORD *)(v34 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v47 = *(_QWORD *)(v34 + 48);
    v48 = v34;
    GreAcquireSemaphore(v47);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v47, 11LL);
    v1 = v34;
  }
  v2 = *(_QWORD *)(v1 + 1808);
  v33 = v2;
  v3 = *(_QWORD *)(v45[0] + 88LL);
  v4 = *(HPALETTE *)v3;
  if ( (*(_DWORD *)(v1 + 2172) & 0x100) != 0 )
  {
    v40 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v4 == hForePalette
      || (v5 = *(struct _W32PROCESS **)(v45[0] + 976LL), *((_DWORD *)v5 + 52) == 1)
      && (v6 = 16711680LL,
          v5 = (struct _W32PROCESS *)((unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000),
          (_DWORD)v5 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v5),
          v5 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v3 == ppalDefault )
        goto LABEL_66;
      v20 = *(_DWORD **)(v3 + 72);
      if ( v20 )
      {
        if ( v20 == *(_DWORD **)(v3 + 80) )
        {
          v21 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
          if ( *v20 == v21 )
            goto LABEL_66;
        }
      }
      GreAcquireHmgrSemaphore(v5, v20, v6, v7);
      v22 = *(HDC *)(v3 + 40);
      while ( v22 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v39, v22);
        if ( !v39[0] )
          goto LABEL_62;
        *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v45[0] + 976LL) + 152LL) | 0xF;
        v22 = *(HDC *)(v39[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v39);
        v39[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v39);
      }
      v23 = *(void **)(v3 + 88);
      if ( v23 )
      {
        if ( v23 != *(void **)(v3 + 72) )
          Win32FreePool(v23);
        *(_QWORD *)(v3 + 88) = 0LL;
      }
      v24 = *(_DWORD **)(v3 + 72);
      v25 = v24;
      if ( v24 && !*v24 )
      {
        if ( *(_DWORD **)(v3 + 80) != v24 )
          Win32FreePool(v24);
        *(_QWORD *)(v3 + 72) = 0LL;
        v25 = 0LL;
      }
      if ( v25 )
        vMatchAPal(v45[0], v33, v3, &v55, &v56);
      else
        *(_QWORD *)(v3 + 72) = ptransMatchAPal(v24, v33, v3, 1LL, &v55, &v56);
      *(_QWORD *)(v3 + 88) = *(_QWORD *)(v3 + 80);
      *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 72);
LABEL_62:
      v26 = *(HDC *)(v3 + 40);
      while ( v26 != v22 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v26);
        _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
        v26 = *(HDC *)(v44[0] + 984LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v44);
      }
    }
    else
    {
      if ( (struct PALETTE *)v3 == ppalDefault )
        goto LABEL_66;
      v9 = *(_DWORD **)(v3 + 80);
      if ( v9 )
      {
        v10 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
        if ( *v9 == v10 )
          goto LABEL_66;
      }
      GreAcquireHmgrSemaphore(v5, v9, v6, v7);
      v11 = *(HDC *)(v3 + 40);
      while ( v11 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v11);
        if ( !v38[0] )
        {
          MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
          goto LABEL_36;
        }
        *(_DWORD *)(*(_QWORD *)(v38[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v45[0] + 976LL) + 152LL) | 0xF;
        v11 = *(HDC *)(v38[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        v38[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
      }
      v12 = *(void **)(v3 + 88);
      if ( v12 )
      {
        if ( v12 != *(void **)(v3 + 72) )
          Win32FreePool(v12);
        *(_QWORD *)(v3 + 88) = 0LL;
      }
      v13 = *(_DWORD **)(v3 + 72);
      v14 = v13;
      if ( v13 && !*v13 )
      {
        if ( *(_DWORD **)(v3 + 80) != v13 )
          Win32FreePool(v13);
        *(_QWORD *)(v3 + 72) = 0LL;
        v14 = 0LL;
      }
      if ( !v14 )
      {
        v36 = 0;
        v35 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v35, 1u, *(_DWORD *)(v33 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v15 = *(unsigned int *)(v33 + 28);
          v16 = *(_DWORD *)(v35 + 28);
          if ( (unsigned int)v15 >= v16 )
            v15 = v16;
          memmove(*(void **)(v35 + 112), *(const void **)(v33 + 112), 4 * v15);
          *(_DWORD *)(v35 + 60) = *(_DWORD *)(v33 + 60);
          *(_DWORD *)(v35 + 24) = *(_DWORD *)(v33 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v35);
          *(_QWORD *)(v3 + 72) = ptransMatchAPal(v17, v35, v3, 1LL, v37, v37);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v35);
        v14 = *(_DWORD **)(v3 + 72);
      }
      *(_QWORD *)(v3 + 88) = *(_QWORD *)(v3 + 80);
      if ( v14 )
      {
        matched = ptransMatchAPal(v13, v33, v3, 0LL, &v55, &v56);
        *(_QWORD *)(v3 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 72);
      }
      else
      {
        *(_QWORD *)(v3 + 80) = 0LL;
      }
LABEL_36:
      v19 = *(HDC *)(v3 + 40);
      while ( v19 != v11 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v43, v19);
        _InterlockedDecrement((volatile signed __int32 *)(v43[0] + 12LL));
        v19 = *(HDC *)(v43[0] + 984LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v43);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_66:
    SEMOBJ::vUnlock((SEMOBJ *)&v40);
    v1 = v34;
    v2 = v33;
  }
  if ( v55 )
  {
    if ( (*(_DWORD *)(v1 + 40) & 0x400) == 0 )
    {
      v27 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v1 + 1768);
      if ( v27 )
      {
        v27(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 1800LL), &v33, 0LL, 0LL, *(_DWORD *)(v2 + 28));
        v2 = v33;
      }
    }
    if ( *(_DWORD *)(v2 + 28) == 256 )
    {
      v28 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v28 ^ *(_DWORD *)((char *)v28 + *(_QWORD *)(v2 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v28;
      }
      if ( i == 256 )
        *(_DWORD *)(v2 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v2 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v47);
  if ( v50[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v50);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
  SEMOBJ::vUnlock((SEMOBJ *)&v41);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v30);
LABEL_81:
  v31 = v56 | (v55 << 16);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v45);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v46);
  return v31;
}
