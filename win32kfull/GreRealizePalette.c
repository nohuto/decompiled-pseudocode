/*
 * XREFs of GreRealizePalette @ 0x1C02D3600
 * Callers:
 *     xxxRealizePalette @ 0x1C0217A18 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0050CF0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E3CD4 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E4450 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02C4318 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02DA728 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  Gre::Base *v1; // rcx
  __int64 v2; // rax
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  Gre::Base *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  HDC v13; // rdi
  _DWORD *v14; // rcx
  void *v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 matched; // rax
  HDC v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  _DWORD *v23; // rdx
  HDC v24; // rdi
  void *v25; // rcx
  _DWORD *v26; // rcx
  HDC v27; // rbx
  void (__fastcall *v28)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  char *v29; // r8
  signed __int64 v30; // r10
  unsigned int v31; // r9d
  unsigned int v32; // ebx
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  Gre::Base *v35; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  _QWORD *v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  char v43[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-30h] BYREF
  Gre::Base *v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  _QWORD v49[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  __int64 v52; // [rsp+110h] [rbp+10h]
  char v53; // [rsp+168h] [rbp+68h] BYREF
  int v54; // [rsp+170h] [rbp+70h] BYREF
  int v55; // [rsp+178h] [rbp+78h] BYREF

  v55 = 0;
  v54 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  v2 = v37[0];
  if ( !v37[0] )
    goto LABEL_83;
  v3 = Gre::Base::Globals(v1);
  v35 = *(Gre::Base **)(v37[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v53);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v43, (struct PDEVOBJ *)&v35);
  v42 = *((_QWORD *)v35 + 7);
  GreAcquireSemaphore(v42);
  v4 = v35;
  v49[1] = 0LL;
  v50 = 256;
  v46 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v49[0] = 0LL;
  v48 = 1;
  if ( (*((_DWORD *)v35 + 10) & 1) != 0 )
  {
    Gre::Base::Globals(v35);
    *(_QWORD *)&v46 = *((_QWORD *)v35 + 6);
    v47 = v35;
    GreAcquireSemaphore(v46);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v46, 11LL);
    v4 = v35;
  }
  v5 = *((_QWORD *)v4 + 222);
  v34 = v5;
  v6 = *(_QWORD **)(v37[0] + 88LL);
  v40 = v6;
  v7 = *v6;
  if ( (*((_DWORD *)v4 + 535) & 0x100) != 0 )
  {
    v41 = *((_QWORD *)v3 + 5);
    GreAcquireSemaphore(v41);
    if ( v7 != *((_QWORD *)v3 + 479) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 208LL) != 1 )
        goto LABEL_88;
      v8 = (unsigned __int16)*((_DWORD *)v3 + 958) | (*((_DWORD *)v3 + 958) >> 8) & 0xFF0000u;
      if ( ((unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000) != (_DWORD)v8 )
        goto LABEL_88;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *((_QWORD *)v3 + 480) != CurrentProcessWin32Process )
      {
LABEL_88:
        if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v40) )
          goto LABEL_68;
        if ( v6[10] )
        {
          v10 = XEPALOBJ::ulTime((XEPALOBJ *)&v34);
          if ( *v11 == v10 )
            goto LABEL_68;
        }
        GreAcquireHmgrSemaphore();
        v13 = (HDC)v6[5];
        while ( v13 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v36, v13);
          if ( !v36[0] )
            goto LABEL_38;
          *(_DWORD *)(*(_QWORD *)(v36[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 152LL) | 0xF;
          v13 = *(HDC *)(v36[0] + 984LL);
          XDCOBJ::RestoreAttributes((XDCOBJ *)v36);
          v36[0] = 0LL;
        }
        v15 = (void *)v6[11];
        if ( v15 )
        {
          if ( v15 != (void *)v6[9] )
            Win32FreePool(v15);
          v6[11] = 0LL;
        }
        v14 = (_DWORD *)v6[9];
        if ( v14 )
        {
          if ( *v14 )
            goto LABEL_34;
          if ( (_DWORD *)v6[10] != v14 )
            Win32FreePool(v14);
          v6[9] = 0LL;
        }
        v39 = 0;
        v38 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v38, 1u, *(_DWORD *)(v34 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v16 = *(unsigned int *)(v34 + 28);
          v17 = *(_DWORD *)(v38 + 28);
          if ( (unsigned int)v16 >= v17 )
            v16 = v17;
          memmove(*(void **)(v38 + 112), *(const void **)(v34 + 112), 4 * v16);
          *(_DWORD *)(v38 + 60) = *(_DWORD *)(v34 + 60);
          *(_DWORD *)(v38 + 24) = *(_DWORD *)(v34 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v38);
          v6[9] = ptransMatchAPal(v18, v38, v6, 1LL, &v53, &v53);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v38);
LABEL_34:
        v6[11] = v6[10];
        if ( v6[9] )
        {
          matched = ptransMatchAPal(v14, v34, v6, 0LL, &v54, &v55);
          v6[10] = matched;
          if ( !matched )
            v6[10] = v6[9];
        }
        else
        {
          v6[10] = 0LL;
        }
LABEL_38:
        v20 = (HDC)v6[5];
        while ( v20 != v13 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v44, v20);
          _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
          v20 = *(HDC *)(v44[0] + 984LL);
          XDCOBJ::vUnlockFast((XDCOBJ *)v44);
        }
LABEL_67:
        GreReleaseHmgrSemaphore(v14, v12);
LABEL_68:
        SEMOBJ::vUnlock((SEMOBJ *)&v41);
        v4 = v35;
        v5 = v34;
        goto LABEL_69;
      }
    }
    if ( XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v40) )
      goto LABEL_68;
    v21 = v6[9];
    if ( v21 )
    {
      if ( v21 == v6[10] )
      {
        v22 = XEPALOBJ::ulTime((XEPALOBJ *)&v34);
        if ( *v23 == v22 )
          goto LABEL_68;
      }
    }
    GreAcquireHmgrSemaphore();
    v24 = (HDC)v6[5];
    while ( v24 )
    {
      MDCOBJ::MDCOBJ((MDCOBJ *)v36, v24);
      if ( !v36[0] )
        goto LABEL_63;
      *(_DWORD *)(*(_QWORD *)(v36[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v37[0] + 976LL) + 152LL) | 0xF;
      v24 = *(HDC *)(v36[0] + 984LL);
      XDCOBJ::RestoreAttributes((XDCOBJ *)v36);
      v36[0] = 0LL;
    }
    v25 = (void *)v6[11];
    if ( v25 )
    {
      if ( v25 != (void *)v6[9] )
        Win32FreePool(v25);
      v6[11] = 0LL;
    }
    v26 = (_DWORD *)v6[9];
    if ( v26 )
    {
      if ( *v26 )
      {
        vMatchAPal(v37[0], v34, v6, &v54, &v55);
LABEL_62:
        v6[11] = v6[10];
        v6[10] = v6[9];
LABEL_63:
        v27 = (HDC)v6[5];
        while ( v27 != v24 )
        {
          MDCOBJ::MDCOBJ((MDCOBJ *)v45, v27);
          _InterlockedDecrement((volatile signed __int32 *)(v45[0] + 12LL));
          v27 = *(HDC *)(v45[0] + 984LL);
          XDCOBJ::vUnlockFast((XDCOBJ *)v45);
        }
        goto LABEL_67;
      }
      if ( (_DWORD *)v6[10] != v26 )
        Win32FreePool(v26);
      v6[9] = 0LL;
    }
    v6[9] = ptransMatchAPal(v26, v34, v6, 1LL, &v54, &v55);
    goto LABEL_62;
  }
LABEL_69:
  if ( v54 )
  {
    if ( (*((_DWORD *)v4 + 10) & 0x400) == 0 )
    {
      v28 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))*((_QWORD *)v4 + 217);
      if ( v28 )
      {
        v28(*(_QWORD *)(*((_QWORD *)v4 + 3) + 1768LL), &v34, 0LL, 0LL, *(_DWORD *)(v5 + 28));
        v5 = v34;
      }
    }
    if ( *(_DWORD *)(v5 + 28) == 256 )
    {
      v29 = *(char **)(v5 + 112);
      v30 = (char *)aPalHalftone - v29;
      v31 = 0;
      while ( ((*(_DWORD *)v29 ^ *(_DWORD *)&v29[v30]) & 0xFFFFFF) == 0 )
      {
        ++v31;
        v29 += 4;
        if ( v31 >= 0x100 )
        {
          if ( v31 == 256 )
          {
            *(_DWORD *)(v5 + 24) |= 0x100000u;
            goto LABEL_80;
          }
          break;
        }
      }
      *(_DWORD *)(v5 + 24) &= ~0x100000u;
    }
  }
LABEL_80:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v46);
  if ( v49[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v49);
  SEMOBJ::vUnlock((SEMOBJ *)&v42);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v43);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v53);
  v2 = v37[0];
LABEL_83:
  v32 = v55 | (v54 << 16);
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  return v32;
}
