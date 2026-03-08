/*
 * XREFs of ?UMPDDrvRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C02BF300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C029BC38 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z @ 0x1C029C2D0 (-bPrepareBitmapsForClient@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@0@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C029C4BC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C029C850 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C02BA8C4 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02C1740 (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 */

_BOOL8 __fastcall UMPDDrvRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  int v6; // esi
  int v7; // r14d
  int v8; // r15d
  struct _SURFOBJ *v9; // rdi
  UMPDOBJ *v10; // rcx
  struct _SURFOBJ **v11; // r8
  UMPDOBJ *v12; // rbx
  struct _SURFOBJ *v13; // r12
  unsigned int v14; // eax
  unsigned int v15; // eax
  BOOL v16; // edi
  size_t Size; // [rsp+20h] [rbp-F0h]
  unsigned int v19; // [rsp+90h] [rbp-80h] BYREF
  int v20; // [rsp+94h] [rbp-7Ch] BYREF
  int v21; // [rsp+98h] [rbp-78h] BYREF
  int v22; // [rsp+9Ch] [rbp-74h] BYREF
  int v23; // [rsp+A0h] [rbp-70h] BYREF
  int v24; // [rsp+A4h] [rbp-6Ch] BYREF
  int v25; // [rsp+A8h] [rbp-68h] BYREF
  struct _SURFOBJ *v26; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v27; // [rsp+B8h] [rbp-58h] BYREF
  void *v28; // [rsp+C0h] [rbp-50h] BYREF
  void *v29; // [rsp+C8h] [rbp-48h] BYREF
  void *v30; // [rsp+D0h] [rbp-40h] BYREF
  void *v31; // [rsp+D8h] [rbp-38h] BYREF
  void *v32; // [rsp+E0h] [rbp-30h] BYREF
  void *v33; // [rsp+E8h] [rbp-28h] BYREF
  struct _SURFOBJ *v34; // [rsp+F0h] [rbp-20h]
  UMPDOBJ *v35; // [rsp+F8h] [rbp-18h] BYREF
  struct _BRUSHOBJ *v36; // [rsp+100h] [rbp-10h]
  _DWORD v37[4]; // [rsp+110h] [rbp+0h] BYREF
  __int64 v38; // [rsp+120h] [rbp+10h]
  struct _SURFOBJ *v39; // [rsp+128h] [rbp+18h] BYREF
  struct _SURFOBJ *v40; // [rsp+130h] [rbp+20h] BYREF
  struct _SURFOBJ *v41; // [rsp+138h] [rbp+28h] BYREF
  void *v42; // [rsp+140h] [rbp+30h] BYREF
  struct _XLATEOBJ *v43; // [rsp+148h] [rbp+38h] BYREF
  unsigned int v44; // [rsp+150h] [rbp+40h]

  v36 = a1;
  v6 = 0;
  v25 = 0;
  v24 = 0;
  v7 = 0;
  v23 = 0;
  v8 = 0;
  v20 = 0;
  v9 = a2;
  v21 = 0;
  v22 = 0;
  v26 = a4;
  v34 = a2;
  v27 = a3;
  v19 = 1;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v35);
  v33 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  memset_0(v37, 0, 0x48uLL);
  v12 = v35;
  if ( !v35 || !(unsigned int)UMPDOBJ::bPrepareBitmapsForClient(v10, &v27, v11) )
  {
    v16 = 0;
    goto LABEL_21;
  }
  v13 = v27;
  if ( *((_DWORD *)v12 + 106) )
  {
    if ( a5 )
      v14 = ((4 * a5->cEntries + 7) & 0xFFFFFFF8) + 128;
    else
      v14 = 104;
    v19 = v14;
    v15 = UMPDOBJ::bThunkLargeBitmaps(
            v12,
            v9,
            v27,
            v26,
            &v33,
            &v32,
            &v31,
            &v30,
            &v29,
            &v28,
            &v25,
            &v20,
            &v24,
            &v21,
            &v23,
            &v22,
            &v19);
    v6 = v20;
    v16 = v15;
    v7 = v21;
    v8 = v22;
    v19 = v15;
    if ( !v15 )
      goto LABEL_18;
    v9 = v34;
  }
  v37[0] = 72;
  v37[1] = 12;
  v38 = *(_QWORD *)v12;
  v42 = v36;
  v41 = v26;
  v44 = a6;
  v39 = v9;
  v40 = v13;
  v43 = a5;
  v16 = 0;
  if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v12, (UMPDOBJ *)((char *)v12 + 144), (const void **)&v42, 0x18u, 0LL) )
  {
    if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), &v39) )
    {
      if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 80), &v40) )
      {
        if ( (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 96), &v41) )
        {
          if ( (unsigned int)UMPDOBJ::pxlo(v12, &v43) )
          {
            LODWORD(Size) = 4;
            if ( (unsigned int)UMPDOBJ::Thunk(v12, v37, 0x48u, &v19, Size) != -1 )
            {
              if ( v19 )
                v16 = 1;
            }
          }
        }
      }
    }
  }
LABEL_18:
  if ( *((_DWORD *)v12 + 106) )
    UMPDOBJ::RestoreBitmaps(
      v12,
      (unsigned __int64)v34,
      (unsigned __int64)v13,
      (unsigned __int64)v26,
      v33,
      v32,
      v31,
      v30,
      v29,
      v28,
      v25,
      v6,
      v24,
      v7,
      v23,
      v8);
LABEL_21:
  XUMPDOBJ::~XUMPDOBJ(&v35);
  return v16;
}
