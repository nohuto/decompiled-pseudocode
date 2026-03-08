/*
 * XREFs of OffStretchBlt @ 0x1C02EA90C
 * Callers:
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027EBA0 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02B2CF0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffStretchBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int),
        LONG *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        int *a11,
        _DWORD *a12,
        __int64 a13,
        int a14)
{
  LONG v14; // r13d
  LONG v15; // r12d
  __int64 *v16; // r15
  int v17; // edi
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ebx
  __int64 v22; // [rsp+60h] [rbp-71h] BYREF
  __int64 v23; // [rsp+68h] [rbp-69h]
  __int64 v24; // [rsp+70h] [rbp-61h]
  __int64 v25; // [rsp+78h] [rbp-59h]
  struct _CLIPOBJ *v26; // [rsp+80h] [rbp-51h]
  __int64 v27; // [rsp+88h] [rbp-49h]
  __int64 v28; // [rsp+90h] [rbp-41h]
  __int64 v29; // [rsp+98h] [rbp-39h]
  __int64 (__fastcall *v30)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int); // [rsp+A0h] [rbp-31h]
  _DWORD v31[4]; // [rsp+A8h] [rbp-29h] BYREF
  _DWORD v32[4]; // [rsp+B8h] [rbp-19h] BYREF

  v14 = a2[1];
  v15 = *a2;
  v16 = a10;
  v17 = *a4;
  v18 = a4[1];
  v30 = a1;
  v25 = a8;
  v28 = a5;
  v24 = a9;
  v27 = a6;
  v23 = a13;
  v29 = a3;
  v26 = a7;
  CLIPOBJ_vOffset(a7, v15, v14);
  v19 = *a11;
  v22 = 0LL;
  v32[0] = v15 + v19;
  v32[2] = v15 + a11[2];
  v32[1] = v14 + a11[1];
  v32[3] = v14 + a11[3];
  v31[0] = v17 + *a12;
  v31[2] = v17 + a12[2];
  v31[1] = v18 + a12[1];
  v31[3] = v18 + a12[3];
  if ( a10 )
  {
    LODWORD(v22) = v15 + *(_DWORD *)a10;
    v16 = &v22;
    HIDWORD(v22) = v14 + *((_DWORD *)a10 + 1);
  }
  v20 = v30(v29, v28, v27, v26, v25, v24, v16, v32, v31, v23, a14);
  CLIPOBJ_vOffset(v26, -v15, -v14);
  return v20;
}
