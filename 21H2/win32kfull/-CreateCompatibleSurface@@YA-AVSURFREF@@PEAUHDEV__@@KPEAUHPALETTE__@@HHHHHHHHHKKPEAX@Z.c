/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C010B114 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0113FC8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029F870 (GreCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C008E810 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C010B3B8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C026B4E4 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 */

SURFREF *__fastcall CreateCompatibleSurface(
        SURFREF *a1,
        __int64 a2,
        __int64 a3,
        HPALETTE a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  int v18; // ecx
  unsigned int v19; // r12d
  unsigned int v20; // r14d
  int v21; // r11d
  unsigned int v22; // edx
  __int64 (__fastcall *v23)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  int v24; // r12d
  unsigned int v25; // eax
  HSURF v26; // rax
  HSURF v27; // rdi
  SURFACE *v28; // rax
  __int64 (__fastcall *v29)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *); // r10
  unsigned int v30; // r12d
  HSURF v31; // rax
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64, __int64, _QWORD); // rax
  int (*v33)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdi
  unsigned int v38; // [rsp+60h] [rbp-89h]
  __int64 v39; // [rsp+68h] [rbp-81h] BYREF
  char v40; // [rsp+70h] [rbp-79h]
  int v41; // [rsp+74h] [rbp-75h]
  _BYTE v42[32]; // [rsp+78h] [rbp-71h] BYREF
  SURFACE *v43; // [rsp+98h] [rbp-51h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-49h]
  __int64 v45; // [rsp+A8h] [rbp-41h] BYREF
  _DWORD v46[4]; // [rsp+B0h] [rbp-39h] BYREF
  HPALETTE v47; // [rsp+C0h] [rbp-29h]
  int v48; // [rsp+C8h] [rbp-21h]
  int v49; // [rsp+CCh] [rbp-1Dh]
  __int64 v50; // [rsp+D0h] [rbp-19h] BYREF
  unsigned int v51; // [rsp+D8h] [rbp-11h]
  unsigned int v52; // [rsp+DCh] [rbp-Dh]

  v46[3] = 0;
  v49 = 0;
  v18 = 67108865;
  v19 = a5;
  v20 = a7;
  v21 = a15;
  v48 = 67108865;
  v45 = a16;
  v47 = a4;
  v50 = a2;
  v22 = a6;
  v46[1] = a5;
  v46[2] = a6;
  v46[0] = a3;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    v18 = 67371009;
  v48 = v18;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_49;
    v20 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v50);
    if ( !v20 )
      goto LABEL_49;
    a3 = v46[0];
    v22 = a6;
    v21 = a15;
  }
  if ( a9 )
  {
    v20 = 0;
    if ( g_pDwmState )
      v20 = gfDwmDeviceBitmapsEnabled;
    if ( !v20 )
      goto LABEL_49;
  }
  v44 = __PAIR64__(v22, a5);
  if ( a9 )
  {
    v23 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3416);
    v24 = 87;
    if ( a14 )
      v24 = a14;
    if ( v23 )
    {
      v50 = 0LL;
      v25 = (a12 != 0 ? 5 : 1) | 8;
      if ( !a13 )
        v25 = a12 != 0 ? 5 : 1;
      v38 = v25;
      v26 = (HSURF)v23(*(_QWORD *)(a2 + 1768), v44, a3, v25, 0LL, 0, v21, &v50);
      v27 = v26;
      if ( v26 )
      {
        SURFREF::SURFREF((SURFREF *)v42, v26);
        v28 = v43;
        if ( v43 )
        {
          if ( a13 )
          {
            *((_DWORD *)v43 + 29) |= 0x400u;
            v28 = v43;
          }
          *((_DWORD *)v28 + 29) |= 1u;
          *((_QWORD *)v43 + 71) = v50;
          *((_DWORD *)v43 + 31) = v24;
          *((_DWORD *)v43 + 30) = v38;
          goto LABEL_22;
        }
LABEL_25:
        SURFREF::SURFREF(a1);
LABEL_26:
        if ( v43 )
          DEC_SHARE_REF_CNT(v43);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
        return a1;
      }
    }
    if ( !a10 )
      goto LABEL_49;
LABEL_30:
    SURFREF::SURFREF(a1);
    return a1;
  }
  if ( !a11 )
  {
    v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD))(a2 + 2744);
    if ( !v32 )
      goto LABEL_49;
    v27 = (HSURF)v32(*(_QWORD *)(a2 + 1768), v44, a3, 0LL);
    if ( !v27 )
      goto LABEL_49;
    goto LABEL_38;
  }
  v29 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3416);
  if ( !v29 )
    goto LABEL_30;
  v30 = a12 != 0 ? 6 : 2;
  v31 = (HSURF)v29(*(_QWORD *)(a2 + 1768), v44, a3, v30, 0LL, a14, v21, &v45);
  v27 = v31;
  if ( !v31 )
    goto LABEL_30;
  SURFREF::SURFREF((SURFREF *)v42, v31);
  if ( !v43 )
    goto LABEL_25;
  *((_DWORD *)v43 + 29) |= 8u;
  *((_QWORD *)v43 + 71) = v45;
  *((_DWORD *)v43 + 30) = v30;
LABEL_22:
  if ( v43 )
    DEC_SHARE_REF_CNT(v43);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
  v19 = a5;
LABEL_38:
  if ( (_DWORD)v27 != -1 )
  {
    SURFREF::SURFREF((SURFREF *)v42, v27);
    if ( v43 )
    {
      *((_DWORD *)v43 + 28) |= 0x800000u;
      *((_DWORD *)v43 + 28) |= 0x4000000u;
      *((_DWORD *)v43 + 28) |= 0x4000u;
      if ( v47 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v50, v47);
        if ( v50 )
          *((_QWORD *)v43 + 16) = v50;
      }
      if ( !a9 && (!a11 || !v45) )
      {
        v52 = a6;
        v50 = 0LL;
        v51 = v19;
        v33 = SURFACE::pfnBitBlt(v43);
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v33)(
          (v34 + 24) & -(__int64)(v34 != 0),
          0LL,
          0LL,
          0LL,
          0LL,
          &v50,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v27, 1LL, *((_QWORD *)v43 + 71), 1LL);
    }
    SURFREF::SURFREF(a1, v42);
    goto LABEL_26;
  }
LABEL_49:
  v39 = 0LL;
  v35 = 1;
  if ( !a9 )
    v35 = a8;
  v40 = 0;
  v41 = 0;
  v48 |= v35 != 0 ? 0x800 : 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v39, (struct _DEVBITMAPINFO *)v46, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v39 )
  {
    v40 |= 1u;
    *(_DWORD *)(v39 + 112) |= 0x800000u;
    *(_QWORD *)(v39 + 48) = a2;
    if ( *(_QWORD *)(v39 + 248) )
      *(_DWORD *)(v39 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v39 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v39 + 32), 0LL, 0LL, v20);
    v36 = v39;
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
    if ( v36 )
    {
      *((_QWORD *)a1 + 4) = v36;
      INC_SHARE_REF_CNT(v36);
    }
  }
  else
  {
    SURFREF::SURFREF(a1);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v39);
  return a1;
}
