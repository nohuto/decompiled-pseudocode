/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB3AC
 * Callers:
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0012D88 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AADE8 (GreCreateCompatibleBitmapInternal.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0129438 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C02A0740 (GreCreateBitmapFromDxSurface.c)
 * Callees:
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C001302C (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00B9DA0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C016988C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C026D1A8 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
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
  unsigned int v16; // r13d
  unsigned int v18; // esi
  int v20; // r12d
  int v21; // ecx
  unsigned int v22; // edx
  __int64 (__fastcall *v23)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v24; // r13d
  HSURF v25; // rax
  HSURF v26; // rdi
  __int64 v27; // rdx
  SURFACE *v28; // rax
  __int64 v29; // rdx
  __int64 (__fastcall *v30)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *); // r10
  HSURF v31; // rax
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64); // rax
  int (*v33)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v34; // r10
  int v35; // eax
  __int64 v36; // rdi
  __int64 v38; // [rsp+60h] [rbp-79h] BYREF
  char v39; // [rsp+68h] [rbp-71h]
  int v40; // [rsp+6Ch] [rbp-6Dh]
  _BYTE v41[32]; // [rsp+70h] [rbp-69h] BYREF
  SURFACE *v42; // [rsp+90h] [rbp-49h]
  unsigned __int64 v43; // [rsp+98h] [rbp-41h]
  __int64 v44; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v45[4]; // [rsp+A8h] [rbp-31h] BYREF
  HPALETTE v46; // [rsp+B8h] [rbp-21h]
  __int64 v47; // [rsp+C0h] [rbp-19h]
  __int64 v48; // [rsp+C8h] [rbp-11h] BYREF
  unsigned int v49; // [rsp+D0h] [rbp-9h]
  unsigned int v50; // [rsp+D4h] [rbp-5h]

  v16 = a5;
  v18 = a7;
  v20 = a14;
  v21 = 67108865;
  v44 = a16;
  v47 = 67108865LL;
  v48 = a2;
  v22 = a6;
  v45[3] = 0;
  v45[1] = a5;
  v45[2] = a6;
  v46 = a4;
  v45[0] = a3;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    v21 = 67371009;
  LODWORD(v47) = v21;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_50;
    v18 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v48);
    if ( !v18 )
      goto LABEL_50;
    a3 = v45[0];
    v22 = a6;
  }
  if ( a9 )
  {
    v18 = 0;
    if ( g_pDwmState )
      v18 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v18 )
    goto LABEL_50;
  v43 = __PAIR64__(v22, a5);
  if ( a9 )
  {
    v23 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3440);
    if ( !a14 )
      v20 = 87;
    if ( v23 )
    {
      v48 = 0LL;
      v24 = (a12 != 0 ? 5 : 1) | 8;
      if ( !a13 )
        v24 = a12 != 0 ? 5 : 1;
      v25 = (HSURF)v23(*(_QWORD *)(a2 + 1800), v43, a3, v24, 0LL, 0, a15, &v48);
      v26 = v25;
      if ( v25 )
      {
        SURFREF::SURFREF((SURFREF *)v41, v25);
        v28 = v42;
        if ( v42 )
        {
          if ( a13 )
          {
            *((_DWORD *)v42 + 29) |= 0x400u;
            v28 = v42;
          }
          *((_DWORD *)v28 + 29) |= 1u;
          *((_QWORD *)v42 + 71) = v48;
          *((_DWORD *)v42 + 31) = v20;
          goto LABEL_22;
        }
LABEL_25:
        SURFREF::SURFREF(a1);
LABEL_26:
        if ( v42 )
          DEC_SHARE_REF_CNT(v42, v29);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v41);
        return a1;
      }
    }
    if ( !a10 )
      goto LABEL_50;
LABEL_30:
    SURFREF::SURFREF(a1);
    return a1;
  }
  if ( !a11 )
  {
    v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))(a2 + 2768);
    if ( !v32 )
      goto LABEL_50;
    v26 = (HSURF)v32(*(_QWORD *)(a2 + 1800), v43);
    goto LABEL_38;
  }
  v30 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3440);
  if ( !v30 )
    goto LABEL_30;
  v24 = a12 != 0 ? 6 : 2;
  v31 = (HSURF)v30(*(_QWORD *)(a2 + 1800), v43, a3, v24, 0LL, a14, a15, &v44);
  v26 = v31;
  if ( !v31 )
    goto LABEL_30;
  SURFREF::SURFREF((SURFREF *)v41, v31);
  if ( !v42 )
    goto LABEL_25;
  *((_DWORD *)v42 + 29) |= 8u;
  *((_QWORD *)v42 + 71) = v44;
LABEL_22:
  *((_DWORD *)v42 + 30) = v24;
  if ( v42 )
    DEC_SHARE_REF_CNT(v42, v27);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v41);
  v16 = a5;
LABEL_38:
  if ( v26 && (_DWORD)v26 != -1 )
  {
    SURFREF::SURFREF((SURFREF *)v41, v26);
    if ( v42 )
    {
      *((_DWORD *)v42 + 28) |= 0x800000u;
      *((_DWORD *)v42 + 28) |= 0x4000000u;
      *((_DWORD *)v42 + 28) |= 0x4000u;
      if ( v46 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v48, v46);
        if ( v48 )
          *((_QWORD *)v42 + 16) = v48;
      }
      if ( !a9 && (!a11 || !v44) )
      {
        v50 = a6;
        v48 = 0LL;
        v49 = v16;
        v33 = SURFACE::pfnBitBlt(v42);
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v33)(
          v34,
          0LL,
          0LL,
          0LL,
          0LL,
          &v48,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v26, 1LL, *((_QWORD *)v42 + 71), 1LL);
    }
    SURFREF::SURFREF(a1, v41);
    goto LABEL_26;
  }
LABEL_50:
  v38 = 0LL;
  v35 = 1;
  if ( !a9 )
    v35 = a8;
  v39 = 0;
  v40 = 0;
  LODWORD(v47) = (v35 != 0 ? 0x800 : 0) | v47;
  SURFMEM::bCreateDIB((SURFMEM *)&v38, (struct _DEVBITMAPINFO *)v45, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v38 )
  {
    v39 |= 1u;
    *(_DWORD *)(v38 + 112) |= 0x800000u;
    *(_QWORD *)(v38 + 48) = a2;
    if ( *(_QWORD *)(v38 + 248) )
      *(_DWORD *)(v38 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v38 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v38 + 32), 0LL, 0LL, v18);
    v36 = v38;
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
  SURFMEM::~SURFMEM((SURFMEM *)&v38);
  return a1;
}
