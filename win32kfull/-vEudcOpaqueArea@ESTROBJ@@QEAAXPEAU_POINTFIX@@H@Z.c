/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C02A2D18
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     AdjustBoundingBox @ 0x1C02A0EA0 (AdjustBoundingBox.c)
 */

void __fastcall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  __int64 v3; // r10
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r11d
  int v13; // r10d
  int v14; // esi
  int v15; // r9d
  int v16; // r15d
  int v17; // r8d
  int v18; // r14d
  int v19; // r12d
  int v20; // ecx
  int v21; // edx
  int v22; // r9d
  int v23; // r13d
  int v24; // r8d
  int v25; // edx
  int v26; // r13d
  int v27; // r9d
  int v28; // r8d
  int v29; // edx
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h] BYREF
  __int64 v32; // [rsp+48h] [rbp-8h] BYREF
  int v33; // [rsp+90h] [rbp+40h] BYREF
  int v34; // [rsp+A0h] [rbp+50h]
  int v35; // [rsp+A8h] [rbp+58h] BYREF

  v34 = a3;
  v3 = *((_QWORD *)this + 7);
  v35 = 0;
  v33 = 0;
  v32 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)v3;
  v31 = 0LL;
  if ( *(_DWORD *)(v7 + 840) + 4 <= 0 )
    return;
  v8 = -16LL;
  do
  {
    switch ( v6 )
    {
      case 0:
        goto LABEL_21;
      case 1:
        if ( !*((_DWORD *)this + 62) )
          goto LABEL_21;
        v11 = *(_QWORD *)(*(_QWORD *)v3 + 720LL);
        goto LABEL_18;
      case 2:
        if ( !*((_DWORD *)this + 63) )
          goto LABEL_21;
        v11 = *(_QWORD *)(*(_QWORD *)v3 + 728LL);
        goto LABEL_18;
      case 3:
        if ( !*((_DWORD *)this + 64) )
          goto LABEL_21;
        v11 = *(_QWORD *)(*(_QWORD *)v3 + 736LL);
LABEL_18:
        if ( !v11 )
          goto LABEL_21;
        *(_QWORD *)&v30 = v11;
        goto LABEL_20;
    }
    v9 = *((_QWORD *)this + 33);
    if ( v9 )
    {
      if ( *(_DWORD *)(v8 + v9) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v3 + 744LL);
        if ( v10 )
        {
          if ( *(_QWORD *)(v10 + 8LL * (unsigned int)(v6 - 4)) )
          {
            *(_QWORD *)&v30 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v6 - 4));
LABEL_20:
            AdjustBoundingBox(v3, (__int64)&v30, &v35, &v33, (int *)&v32, (int *)&v31);
          }
        }
      }
    }
LABEL_21:
    *(_QWORD *)&v30 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
    v3 = *((_QWORD *)this + 7);
    ++v6;
    v8 += 4LL;
  }
  while ( v6 < *(_DWORD *)(*(_QWORD *)v3 + 840LL) + 4 );
  v12 = v35;
  v13 = v33;
  if ( v35 || v33 )
  {
    v14 = v31;
    v15 = v31;
    v16 = v32;
    v17 = v31;
    v18 = HIDWORD(v31);
    v19 = HIDWORD(v32);
    v20 = HIDWORD(v31);
    if ( (int)v32 < (int)v31 )
      v15 = v32;
    v21 = HIDWORD(v31);
    v22 = v15 >> 4;
    v23 = _mm_cvtsi128_si32(*(__m128i *)((char *)this + 12));
    v30 = *(_OWORD *)((char *)this + 12);
    if ( (int)v32 > (int)v31 )
      v17 = v32;
    v24 = (v17 + 15) >> 4;
    if ( SHIDWORD(v32) < SHIDWORD(v31) )
      v21 = HIDWORD(v32);
    v25 = v21 >> 4;
    if ( SHIDWORD(v32) > SHIDWORD(v31) )
      v20 = HIDWORD(v32);
    v26 = v22 + v23;
    v27 = v24 + DWORD2(v30);
    v28 = v25 + DWORD1(v30);
    v29 = HIDWORD(v30) + ((v20 + 15) >> 4);
    if ( v28 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v28;
    if ( v29 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v29;
    if ( v26 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v26;
    if ( v27 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v27;
    if ( v34 )
    {
      if ( v12 )
      {
        a2->x += v16;
        a2->y += v19;
        a2[1].x += v16;
        a2[1].y += v19;
      }
      if ( v13 )
      {
        a2[2].x += v14;
        a2[2].y += v18;
        a2[3].x += v14;
        a2[3].y += v18;
      }
    }
  }
}
