/*
 * XREFs of EngDrawStream @ 0x1C00E0180
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029A7B0 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02A0EE0 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C00E03E0 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  int *v9; // r12
  unsigned int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 (__fastcall *v23)(struct _SURFOBJ *, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v24)(struct _SURFOBJ *, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // r8
  _DWORD v26[2]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v27; // [rsp+60h] [rbp-61h]
  __int64 v28; // [rsp+68h] [rbp-59h]
  __int64 v29; // [rsp+70h] [rbp-51h]
  __int64 v30; // [rsp+78h] [rbp-49h]
  _QWORD *v31; // [rsp+80h] [rbp-41h]
  __int64 v32; // [rsp+88h] [rbp-39h]
  __int64 v33; // [rsp+90h] [rbp-31h]
  __int64 v34; // [rsp+98h] [rbp-29h]
  int v35; // [rsp+A0h] [rbp-21h] BYREF
  int v36; // [rsp+A4h] [rbp-1Dh]
  int v37; // [rsp+A8h] [rbp-19h]
  int v38; // [rsp+ACh] [rbp-15h]

  v9 = a6;
  v31 = a9;
  v30 = a1;
  v33 = a3;
  v32 = a4;
  v12 = 1;
  v34 = a2;
  v13 = (a1 - 24) & -(__int64)(a1 != 0);
  v14 = *(_QWORD *)(v13 + 0x30);
  while ( a7 >= 4 && *a8 == 9 && a7 >= 0x3C )
  {
    v15 = *v9;
    v16 = a8[1];
    v35 = v16;
    v17 = (int)a8[2];
    v36 = a8[2];
    v18 = (int)a8[3];
    v37 = a8[3];
    v19 = (int)a8[4];
    v38 = a8[4];
    if ( (unsigned __int64)(v16 + v15 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(v18 + v15 + 0x80000000LL) > 0xFFFFFFFF
      || (v20 = a6[1], (unsigned __int64)(v20 + v17 + 0x80000000LL) > 0xFFFFFFFF)
      || (unsigned __int64)(v20 + v19 + 0x80000000LL) > 0xFFFFFFFF )
    {
LABEL_22:
      v12 = 0;
      goto LABEL_18;
    }
    v35 += v15;
    v37 = v15 + v18;
    v36 = v20 + v17;
    v38 = v20 + v19;
    if ( (int)v15 + v16 >= (int)v15 + (int)v18 )
    {
      if ( v16 - (int)v18 < 0 )
        goto LABEL_22;
    }
    else if ( (int)v18 - v16 < 0 )
    {
      goto LABEL_22;
    }
    v21 = *(_QWORD *)(v13 + 48);
    v22 = v30;
    v23 = EngNineGrid;
    if ( *(_QWORD *)(v21 + 3392) )
      v23 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v21 + 3392);
    if ( (!*(_QWORD *)(v30 + 16) || (*(_DWORD *)(v14 + 2096) & 0x400) == 0)
      && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v13)
      && (*(_BYTE *)(v13 + 112) & 0x10) == 0 )
    {
      v23 = v24;
    }
    v26[1] = 0;
    v29 = v31[6];
    v28 = v31[5];
    v27 = v31[4];
    v26[0] = 33488896;
    v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, _DWORD *, _DWORD *, _DWORD *, _QWORD))v23)(
            v22,
            v34,
            v33,
            v32,
            &v35,
            a8 + 5,
            a8 + 9,
            v26,
            0LL);
LABEL_18:
    v9 = a6;
    a7 -= 60;
    a8 += 15;
  }
  return v12;
}
