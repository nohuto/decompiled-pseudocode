/*
 * XREFs of OffDrawStream @ 0x1C02EA1FC
 * Callers:
 *     ?SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027D870 (-SpDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C02B1A60 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffDrawStream(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int64 *, int, __int64, __int64),
        LONG *a2,
        __int64 a3,
        __int64 a4,
        struct _CLIPOBJ *a5,
        __int64 a6,
        __int128 *a7,
        __int64 *a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  LONG v11; // r14d
  LONG v14; // esi
  LONG v15; // edx
  __int128 *v16; // rdi
  __int64 *v17; // rbx
  unsigned int v18; // ebx
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  __int64 v21; // [rsp+58h] [rbp-39h]
  __int64 v22; // [rsp+60h] [rbp-31h]
  __int64 v23; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int128 v25; // [rsp+78h] [rbp-19h] BYREF

  v11 = a2[1];
  v14 = *a2;
  v15 = *a2;
  v16 = a7;
  v17 = a8;
  v23 = a6;
  v22 = a10;
  v21 = a11;
  v24 = a4;
  CLIPOBJ_vOffset(a5, v15, v11);
  v25 = 0LL;
  if ( a7 )
  {
    LODWORD(v25) = v14 + *(_DWORD *)a7;
    DWORD2(v25) = v14 + *((_DWORD *)a7 + 2);
    DWORD1(v25) = v11 + *((_DWORD *)a7 + 1);
    v16 = &v25;
    HIDWORD(v25) = v11 + *((_DWORD *)a7 + 3);
  }
  v20 = 0LL;
  if ( a8 )
  {
    LODWORD(v20) = v14 + *(_DWORD *)a8;
    v17 = &v20;
    HIDWORD(v20) = v11 + *((_DWORD *)a8 + 1);
  }
  v18 = a1(a3, v24, a5, v23, v16, v17, a9, v22, v21);
  CLIPOBJ_vOffset(a5, -v14, -v11);
  return v18;
}
