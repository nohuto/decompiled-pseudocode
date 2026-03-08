/*
 * XREFs of ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00CC6E4
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C004DE20 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0294170 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StretchDIBDirect(
        char *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        struct _RECTL *a5,
        char *a6,
        int a7,
        signed int a8,
        signed int a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        struct _RECTL *a12,
        unsigned int a13)
{
  LONG right; // r15d
  int v14; // edi
  int v15; // edx
  LONG v16; // esi
  int v17; // r11d
  int v18; // ebx
  LONG v19; // r8d
  LONG v20; // ecx
  __int64 v21; // r10
  unsigned __int64 v22; // kr00_8
  unsigned __int64 v23; // kr08_8
  LONG v24; // r11d
  LONG v25; // esi
  LONG v26; // r14d
  unsigned int v27; // r9d
  int v28; // r15d
  int v29; // r8d
  LONG v30; // r11d
  LONG v31; // eax
  LONG v32; // ebx
  LONG v33; // edi
  unsigned int v34; // edx
  int v35; // r9d
  int v36; // ecx
  unsigned __int64 v38; // rax
  unsigned int v39; // r8d
  unsigned int v40; // r14d
  int v41; // r11d
  unsigned __int64 v42; // rax
  unsigned int v43; // edi
  unsigned __int64 v44; // [rsp+20h] [rbp-118h]
  unsigned __int64 v45; // [rsp+20h] [rbp-118h]
  LONG left; // [rsp+28h] [rbp-110h]
  LONG v47; // [rsp+2Ch] [rbp-10Ch]
  unsigned __int64 v48; // [rsp+30h] [rbp-108h]
  LONG top; // [rsp+38h] [rbp-100h]
  LONG v50; // [rsp+3Ch] [rbp-FCh]
  LONG v52; // [rsp+48h] [rbp-F0h]
  int v53; // [rsp+50h] [rbp-E8h]
  LONG v54; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v55; // [rsp+60h] [rbp-D8h]
  unsigned int v56; // [rsp+68h] [rbp-D0h]
  int v57; // [rsp+6Ch] [rbp-CCh]
  LONG bottom; // [rsp+78h] [rbp-C0h]
  LONG v59; // [rsp+80h] [rbp-B8h]
  struct _RECTL *v61; // [rsp+90h] [rbp-A8h]
  char *v63; // [rsp+B0h] [rbp-88h] BYREF
  int v64; // [rsp+B8h] [rbp-80h]
  int v65; // [rsp+BCh] [rbp-7Ch]
  char *v66; // [rsp+C0h] [rbp-78h]
  int v67; // [rsp+C8h] [rbp-70h]
  LONG v68; // [rsp+CCh] [rbp-6Ch]
  LONG v69; // [rsp+D0h] [rbp-68h]
  int v70; // [rsp+D4h] [rbp-64h]
  int v71; // [rsp+D8h] [rbp-60h]
  int v72; // [rsp+DCh] [rbp-5Ch]
  int v73; // [rsp+E0h] [rbp-58h]
  int v74; // [rsp+E4h] [rbp-54h]
  int v75; // [rsp+E8h] [rbp-50h]
  int v76; // [rsp+ECh] [rbp-4Ch]
  __int128 v77; // [rsp+F0h] [rbp-48h] BYREF

  v61 = a12;
  right = a5->right;
  left = a5->left;
  v14 = right - a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v15 = bottom - top;
  v56 = bottom - top;
  v16 = a10->right;
  v54 = a10->left;
  v17 = v16 - a10->left;
  v50 = a10->bottom;
  v59 = a10->top;
  v18 = v50 - v59;
  v19 = a10->left;
  v47 = left;
  v20 = v59;
  v52 = top;
  v21 = 0LL;
  v53 = 0;
  v57 = 0;
  v77 = 0LL;
  if ( right - left <= 0 || v15 <= 0 || v17 <= 0 || v18 <= 0 )
    return 1LL;
  if ( v14 <= 0x7FFF && v15 <= 0x7FFF && v17 <= 0x7FFF && v18 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v61 = (struct _RECTL *)&v77;
      *((_QWORD *)&v77 + 1) = __PAIR64__(a4, a3);
      DWORD1(v77) = 0;
    }
    LODWORD(v55) = -1;
    HIDWORD(v55) = v17 - 1;
    v22 = v55 / (unsigned int)v14 + 1;
    LODWORD(v48) = -1;
    HIDWORD(v48) = v18 - 1;
    v23 = v48 / v56 + 1;
    if ( v19 >= 0 && v16 <= a8 )
      goto LABEL_13;
    v53 = 1;
    v38 = __PAIR64__(v14, 0) / (unsigned int)v17;
    if ( v19 >= 0 )
    {
      v40 = v38;
    }
    else
    {
      v39 = -v19;
      if ( (int)(v17 - v39) <= 0 )
        return 1LL;
      v40 = v38;
      v44 = v38 * v39;
      v19 = 0;
      v47 = ((v44 + 0x7FFFFFFF) >> 32) + left;
    }
    if ( v16 <= a8 )
    {
LABEL_13:
      v24 = left;
    }
    else
    {
      v41 = v17 - (v16 - a8);
      if ( v41 <= 0 )
        return 1LL;
      v45 = __PAIR64__(HIDWORD(v38), v40) * (unsigned int)v41;
      v24 = left;
      right = left + ((v45 + 0x7FFFFFFF) >> 32);
    }
    v25 = v61->left;
    if ( v47 >= v61->left )
      v25 = v47;
    v26 = v61->right;
    if ( right <= v26 )
      v26 = right;
    if ( v26 <= v25 )
      return 1LL;
    v27 = v25 - v24;
    if ( v53 || v27 )
    {
      v29 = v54 + (((v22 >> 1) + v22 * v27) >> 32);
      v28 = (v22 >> 1) + v22 * v27;
    }
    else
    {
      v28 = (__int64)v22 >> 1;
      v29 = (HIDWORD(v22) >> 1) + v19;
    }
    if ( v59 >= 0 && v50 <= a9 )
      goto LABEL_24;
    v57 = 1;
    v42 = __PAIR64__(v56, 0) / (unsigned int)v18;
    if ( v59 >= 0 )
    {
      v43 = v42;
    }
    else
    {
      if ( v50 <= 0 )
        return 1LL;
      v43 = v42;
      v20 = 0;
      v52 = ((v42 * (unsigned int)-v59 + 0x7FFFFFFF) >> 32) + top;
    }
    if ( v50 <= a9 )
    {
LABEL_24:
      v30 = top;
      v31 = bottom;
LABEL_25:
      v32 = v61->top;
      if ( v52 >= v32 )
        v32 = v52;
      v33 = v61->bottom;
      if ( v31 <= v33 )
        v33 = v31;
      if ( v33 > v32 )
      {
        v34 = v32 - v30;
        if ( v57 || v34 )
        {
          v35 = v48 / v56 + 1;
          v36 = v59 + (((v23 >> 1) + v23 * v34) >> 32);
        }
        else
        {
          v35 = v48 / v56 + 1;
          v36 = (HIDWORD(v23) >> 1) + v20;
        }
        v63 = &a6[v36 * a7];
        v66 = &a1[v32 * a2];
        v64 = a7;
        v65 = v29;
        v68 = v25;
        v67 = a2;
        v69 = v26;
        v70 = v33 - v32;
        v71 = HIDWORD(v22);
        v72 = v22;
        v73 = (v48 / v56 + 1) >> 32;
        v74 = v35;
        v75 = v28;
        v76 = HIDWORD(v22);
        if ( v26 - v25 < 7 )
          v21 = 8LL;
        off_1C030B430[a13 | (unsigned __int64)v21]((struct BLTINFO *)&v63);
        a11->left = v25;
        a11->right = v26;
        a11->top = v32;
        a11->bottom = v33;
      }
      return 1LL;
    }
    if ( a9 - v59 > 0 )
    {
      v30 = top;
      v31 = top + ((__PAIR64__(HIDWORD(v42), v43) * (unsigned int)(a9 - v59) + 0x7FFFFFFF) >> 32);
      goto LABEL_25;
    }
    return 1LL;
  }
  return 0LL;
}
