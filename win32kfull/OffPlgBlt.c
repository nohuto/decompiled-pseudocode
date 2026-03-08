/*
 * XREFs of OffPlgBlt @ 0x1C02EA758
 * Callers:
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027E540 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffPlgBlt(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, __int128 *, __int64, int),
        LONG *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        _DWORD *a11,
        __int128 *a12,
        __int64 a13,
        int a14)
{
  LONG v14; // r14d
  LONG v15; // esi
  LONG v16; // edx
  __int64 *v17; // rdi
  __int128 *v18; // rbx
  int v19; // r15d
  int v20; // r12d
  unsigned int v21; // ebx
  __int64 v23; // [rsp+60h] [rbp-71h] BYREF
  __int64 v24; // [rsp+68h] [rbp-69h]
  __int64 v25; // [rsp+70h] [rbp-61h]
  __int64 v26; // [rsp+78h] [rbp-59h]
  __int64 v27; // [rsp+80h] [rbp-51h]
  __int64 v28; // [rsp+88h] [rbp-49h]
  __int64 v29; // [rsp+90h] [rbp-41h]
  __int64 (__fastcall *v30)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, __int128 *, __int64, int); // [rsp+98h] [rbp-39h]
  __int128 v31; // [rsp+A0h] [rbp-31h] BYREF
  _DWORD v32[6]; // [rsp+B0h] [rbp-21h] BYREF

  v14 = a2[1];
  v15 = *a2;
  v16 = *a2;
  v17 = a10;
  v18 = a12;
  v19 = *a4;
  v20 = a4[1];
  v28 = a5;
  v27 = a6;
  v26 = a8;
  v25 = a9;
  v29 = a3;
  v30 = a1;
  v24 = a13;
  CLIPOBJ_vOffset(a7, v16, v14);
  v23 = 0LL;
  if ( a10 )
  {
    LODWORD(v23) = v15 + *(_DWORD *)a10;
    v17 = &v23;
    HIDWORD(v23) = v14 + *((_DWORD *)a10 + 1);
  }
  v31 = 0LL;
  if ( a12 )
  {
    LODWORD(v31) = v19 + *(_DWORD *)a12;
    DWORD2(v31) = v19 + *((_DWORD *)a12 + 2);
    DWORD1(v31) = v20 + *((_DWORD *)a12 + 1);
    v18 = &v31;
    HIDWORD(v31) = v20 + *((_DWORD *)a12 + 3);
  }
  v32[0] = 16 * v15 + *a11;
  v32[2] = 16 * v15 + a11[2];
  v32[4] = 16 * v15 + a11[4];
  v32[1] = 16 * v14 + a11[1];
  v32[3] = 16 * v14 + a11[3];
  v32[5] = 16 * v14 + a11[5];
  v21 = v30(v29, v28, v27, a7, v26, v25, v17, v32, v18, v24, a14);
  CLIPOBJ_vOffset(a7, -v15, -v14);
  return v21;
}
