/*
 * XREFs of ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C029F2F0
 * Callers:
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029E710 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C029ED00 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001CE94 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C029DD8C (--1PANSURFLOCK@@QEAA@XZ.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02A007C (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C02A0750 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall PanSynchronize(struct DHPDEV__ *a1, struct _RECTL *a2)
{
  __int64 v3; // rdx
  int v5; // eax
  struct _RECTL *v6; // rdx
  struct REGION *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // kr00_8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  HSEMAPHORE v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+54h] [rbp-ACh]
  __int128 v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int128 v24; // [rsp+110h] [rbp+10h] BYREF
  struct DHPDEV__ *v25; // [rsp+120h] [rbp+20h]

  v14 = 0LL;
  v3 = *((_QWORD *)a1 + 8);
  v17 = 0LL;
  v25 = a1;
  v15 = *(_DWORD *)(v3 + 32);
  v5 = *(_DWORD *)(v3 + 36);
  v6 = (struct _RECTL *)&v14;
  v16 = v5;
  if ( a2 )
    v6 = a2;
  v24 = 0LL;
  PANSURFLOCK::vLockShadow((PANSURFLOCK *)&v24, v6, 0LL, 1);
  v14 = (HSEMAPHORE)*((_QWORD *)a1 + 14);
  EngAcquireSemaphore(v14);
  if ( *((_DWORD *)a1 + 26) )
  {
    v7 = (struct REGION *)*((_QWORD *)a1 + 10);
    v20 = 0LL;
    v21 = 0;
    v23 = 0LL;
    v19 = 0LL;
    v22 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, v7, (struct ERECTL *)(a1 + 4), 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
    {
      CLIPOBJ_vOffset(&v18, -*((_DWORD *)a1 + 4), -*((_DWORD *)a1 + 5));
      SURFACE::dhpdev((SURFACE *)(*((_QWORD *)a1 + 9) - 24LL), *((struct DHPDEV__ **)a1 + 4));
      v8 = *((_QWORD *)a1 + 8);
      v9 = *((_QWORD *)a1 + 9) - 24LL;
      v10 = *((_QWORD *)a1 + 9);
      v11 = v9 & ((unsigned __int128)-(__int128)v10 >> 64);
      DWORD2(v17) = *(_DWORD *)(v11 + 0x38);
      HIDWORD(v17) = *(_DWORD *)(v11 + 0x3C);
      if ( v8 )
      {
        if ( (*(_DWORD *)((v9 & ((unsigned __int128)-(__int128)v10 >> 64)) + 0x70) & 0x400) != 0 )
          (*((void (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))a1 + 118))(
            (v11 + 24) & -(__int64)(v11 != 0),
            v8,
            &v18,
            0LL,
            &v17,
            a1 + 4);
        else
          ((void (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, _QWORD, __int128 *, struct DHPDEV__ *))EngCopyBits)(
            (v11 + 24) & -(__int64)(v11 != 0),
            v8,
            &v18,
            0LL,
            &v17,
            a1 + 4);
      }
    }
    v12 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 26) = 0;
    v13 = v12;
    RGNOBJ::vSet((RGNOBJ *)&v13);
  }
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v14);
  PANSURFLOCK::~PANSURFLOCK((PANSURFLOCK *)&v24);
}
