/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0013394 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C007FD18 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0128D34 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     GreDwmUseDeviceBitmaps @ 0x1C007CA44 (GreDwmUseDeviceBitmaps.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007CB28 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00EA13C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

SURFACE **__fastcall CreateCompatibleSurface(
        SURFACE **a1,
        HDEV a2,
        unsigned int a3,
        HPALETTE a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
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
  int v17; // r11d
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 (__fastcall *v23)(_QWORD, __int64, _QWORD); // rax
  int v24; // eax
  SURFACE *v25; // rcx
  __int64 v27; // rax
  SURFACE *v28; // rbx
  __int64 (__fastcall *v29)(_QWORD, unsigned __int64, _QWORD); // r11
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 (__fastcall *v33)(_QWORD, unsigned __int64, _QWORD); // r12
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rdx
  int (*v37)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v38; // [rsp+60h] [rbp-61h]
  int v39; // [rsp+64h] [rbp-5Dh]
  SURFACE *v40; // [rsp+68h] [rbp-59h] BYREF
  char v41; // [rsp+70h] [rbp-51h]
  int v42; // [rsp+74h] [rbp-4Dh]
  int v43; // [rsp+78h] [rbp-49h]
  __int64 v44; // [rsp+80h] [rbp-41h]
  _DWORD v45[4]; // [rsp+88h] [rbp-39h] BYREF
  HPALETTE v46; // [rsp+98h] [rbp-29h]
  __int64 v47; // [rsp+A0h] [rbp-21h]
  HDEV v48; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int v49; // [rsp+B0h] [rbp-11h]
  unsigned int v50; // [rsp+B4h] [rbp-Dh]

  v17 = a14;
  v19 = a5;
  v43 = a15;
  v48 = a2;
  v21 = a6;
  v44 = a16;
  v45[3] = 0;
  v47 = 67108865LL;
  v45[1] = a5;
  v45[2] = a6;
  v46 = a4;
  v45[0] = a3;
  v39 = a14;
  if ( ((_DWORD)a2[10] & 0x8000) != 0 )
    LODWORD(v47) = 67371009;
  if ( !a7 )
  {
    if ( !a9 || !(unsigned int)bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v48) )
      goto LABEL_12;
    a3 = v45[0];
    v19 = a5;
    v21 = a6;
    v17 = a14;
  }
  if ( a9 )
  {
    if ( !(unsigned int)GreDwmUseDeviceBitmaps() )
      goto LABEL_12;
    a3 = v45[0];
    v19 = a5;
    v21 = a6;
    v17 = a14;
  }
  v22 = 0LL;
  if ( !a9 )
  {
    if ( !a11 )
    {
      v23 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))*((_QWORD *)a2 + 343);
      if ( v23 )
      {
        v22 = v23(*((_QWORD *)a2 + 221), v19 | (v21 << 32), a3);
        goto LABEL_11;
      }
LABEL_12:
      v24 = 1;
      if ( !a9 )
        v24 = a8;
      v40 = 0LL;
      v41 = 0;
      LODWORD(v47) = (v24 != 0 ? 0x800 : 0) | v47;
      v42 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v40, (struct _DEVBITMAPINFO *)v45, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( v40 )
      {
        v41 |= 1u;
        *((_DWORD *)v40 + 28) |= 0x800000u;
        SURFACE::hdev(v40, a2);
        if ( *((_QWORD *)v40 + 31) )
          *((_DWORD *)v40 + 28) |= 0x4000u;
        else
          *((_DWORD *)v40 + 28) |= 0x200u;
        EtwPhysicalSurfCreateEvent(*((_QWORD *)v40 + 4), 0LL, 0LL);
        v25 = v40;
        if ( v40 )
        {
          *a1 = v40;
          INC_SHARE_REF_CNT(v25);
        }
      }
      else
      {
        *a1 = 0LL;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v40);
      return a1;
    }
    v33 = (__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD))*((_QWORD *)a2 + 427);
    if ( v33 )
    {
      v34 = 2;
      if ( a12 )
        v34 = 6;
      v38 = v34;
      v35 = v33(*((_QWORD *)a2 + 221), (unsigned int)v19 | (unsigned __int64)(v21 << 32), a3);
      v22 = v35;
      if ( v35 )
      {
        LOBYTE(v36) = 5;
        v32 = HmgShareLockCheck(v35, v36);
        if ( v32 )
        {
          *(_DWORD *)(v32 + 116) |= 8u;
          *(_QWORD *)(v32 + 568) = v44;
LABEL_41:
          *(_DWORD *)(v32 + 120) = v38;
          DEC_SHARE_REF_CNT(v32);
          goto LABEL_21;
        }
        goto LABEL_58;
      }
    }
    goto LABEL_55;
  }
  if ( !v17 )
    v39 = 87;
  v29 = (__int64 (__fastcall *)(_QWORD, unsigned __int64, _QWORD))*((_QWORD *)a2 + 427);
  if ( v29 )
  {
    v30 = 1;
    v48 = 0LL;
    v38 = 1;
    if ( a12 )
    {
      v30 = 5;
      v38 = 5;
    }
    if ( a13 )
      v38 = v30 | 8;
    v31 = v29(*((_QWORD *)a2 + 221), (unsigned int)v19 | (unsigned __int64)(v21 << 32), a3);
    v22 = v31;
    if ( v31 )
    {
      LOBYTE(v21) = 5;
      v32 = HmgShareLockCheck(v31, v21);
      if ( v32 )
      {
        if ( a13 )
          *(_DWORD *)(v32 + 116) |= 0x400u;
        *(_DWORD *)(v32 + 116) |= 1u;
        *(_QWORD *)(v32 + 568) = v48;
        *(_DWORD *)(v32 + 124) = v39;
        goto LABEL_41;
      }
LABEL_58:
      *a1 = 0LL;
      return a1;
    }
  }
  if ( a10 )
  {
LABEL_55:
    *a1 = 0LL;
    return a1;
  }
LABEL_11:
  if ( !v22 )
    goto LABEL_12;
LABEL_21:
  if ( (_DWORD)v22 == -1 )
    goto LABEL_12;
  LOBYTE(v21) = 5;
  v27 = HmgShareLockCheck(v22, v21);
  v28 = (SURFACE *)v27;
  if ( v27 )
  {
    *(_DWORD *)(v27 + 112) |= 0x4804000u;
    if ( v46 )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v48, v46);
      if ( v48 )
        *((_QWORD *)v28 + 16) = v48;
    }
    if ( !a9 && (!a11 || !v44) )
    {
      v49 = a5;
      v50 = a6;
      v48 = 0LL;
      v37 = SURFACE::pfnBitBlt(v28);
      ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, HDEV *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v37)(
        (char *)v28 + 24,
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
    EtwPhysicalSurfCreateEvent(v22, 1LL, *((_QWORD *)v28 + 71));
  }
  *a1 = v28;
  return a1;
}
