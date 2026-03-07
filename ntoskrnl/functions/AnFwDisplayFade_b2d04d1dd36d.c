__int64 AnFwDisplayFade()
{
  unsigned int *v0; // rdi
  __int64 v1; // r12
  unsigned int *v2; // r13
  __int64 v3; // rsi
  int SubRectangle; // r14d
  unsigned int v5; // r15d
  __int64 RegionContext; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // edx
  unsigned int v16; // r11d
  unsigned int v17; // r11d
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rsi
  int v26; // edi
  _QWORD *v27; // rsi
  __int64 v28; // r15
  unsigned int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // ecx
  char v33; // [rsp+38h] [rbp-49h] BYREF
  char v34; // [rsp+39h] [rbp-48h]
  char v35; // [rsp+3Ah] [rbp-47h]
  char v36; // [rsp+3Bh] [rbp-46h]
  unsigned int v37; // [rsp+3Ch] [rbp-45h]
  unsigned int BitsPerPixel; // [rsp+40h] [rbp-41h]
  __int64 v39; // [rsp+48h] [rbp-39h] BYREF
  unsigned int *v40; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v41; // [rsp+58h] [rbp-29h]
  unsigned int *v42; // [rsp+60h] [rbp-21h] BYREF
  __int64 v43; // [rsp+68h] [rbp-19h] BYREF
  int *v44; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v46; // [rsp+7Ch] [rbp-5h]
  int v47; // [rsp+80h] [rbp-1h]
  __int64 v48; // [rsp+88h] [rbp+7h] BYREF
  __int64 v49; // [rsp+90h] [rbp+Fh] BYREF
  int *v50; // [rsp+98h] [rbp+17h] BYREF
  _OWORD v51[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  v47 = 0;
  v0 = 0LL;
  v48 = 0LL;
  v1 = 0LL;
  v49 = 0LL;
  v2 = 0LL;
  v37 = 0;
  v3 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  SubRectangle = 0;
  v5 = 0;
  v33 = 0;
  v41 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( (dword_140C0E3B0 & 0x2000) != 0 )
    return (unsigned int)SubRectangle;
  if ( (dword_140C0E3B0 & 0x200000) == 0 )
  {
    RegionContext = BgpTxtGetRegionContext(qword_140C0E470);
    v7 = BgpTxtGetRegionContext(qword_140C0E478);
    v8 = v7;
    if ( !RegionContext || !v7 )
    {
LABEL_39:
      v3 = v43;
      goto LABEL_68;
    }
    xmmword_140C0B510 = *(_OWORD *)RegionContext;
    xmmword_140C0B520 = *(_OWORD *)(RegionContext + 16);
    dword_140C0B530 = *(_DWORD *)(RegionContext + 32);
    xmmword_140C0B550 = *(_OWORD *)v7;
    xmmword_140C0B560 = *(_OWORD *)(v7 + 16);
    dword_140C0B570 = *(_DWORD *)(v7 + 32);
    BgpFwFreeMemory(RegionContext);
    BgpFwFreeMemory(v8);
    AnFwpDisableProgressTimer();
    AnFwDisableBackgroundUpdateTimer();
    v34 = 0;
    v35 = 0;
    BitsPerPixel = BgpGetBitsPerPixel();
    LogFwStat(1LL, 5LL, 0LL);
    if ( !qword_140C0E3F8 )
    {
      v36 = 1;
LABEL_13:
      v19 = BgpGxReadRectangle(&v40, (__int64)&xmmword_140C0B510);
      v0 = v40;
      SubRectangle = v19;
      if ( v19 < 0 )
        goto LABEL_34;
      v20 = *v40;
      v21 = v40[1];
      v41 = v40;
      v22 = BgpGxRectangleSize(v20, v21, BitsPerPixel);
      v5 += 2 * (((v22 + 15) & 0xFFFFFFF0) + 32) + ((v22 + 15) & 0xFFFFFFF0) + 32;
LABEL_15:
      if ( !v35 )
      {
        v23 = BgpGxReadRectangle(&v50, (__int64)&xmmword_140C0B550);
        v2 = (unsigned int *)v50;
        SubRectangle = v23;
        if ( v23 < 0 )
          goto LABEL_34;
        v24 = BgpGxRectangleSize(*v50, v50[1], BitsPerPixel);
        v5 += 2 * (((v24 + 15) & 0xFFFFFFF0) + 32) + ((v24 + 15) & 0xFFFFFFF0) + 32;
      }
      v25 = qword_140C0E40C;
      v26 = HIDWORD(qword_140C0E530);
      v40 = (unsigned int *)qword_140C0E40C;
      if ( !v36 )
      {
        SubRectangle = BgpGxFindSubRectangle(
                         (unsigned int *)v1,
                         SHIDWORD(qword_140C0E530),
                         (__int64)&v42,
                         (unsigned int *)&v39,
                         &v33);
        if ( SubRectangle >= 0 )
        {
          v30 = v37;
          *((_QWORD *)v51 + v37) = v1;
          v37 = v30 + 1;
          if ( v33 )
          {
            v36 = 1;
            v1 = 0LL;
          }
          else
          {
            LODWORD(v40) = v39 + (_DWORD)v40;
            HIDWORD(v40) += HIDWORD(v39);
            v25 = (__int64)v40;
            v1 = (__int64)v42;
          }
        }
      }
      if ( !v34 )
      {
        SubRectangle = BgpGxFindSubRectangle(v41, v26, (__int64)&v42, (unsigned int *)&v39, &v33);
        if ( SubRectangle >= 0 )
        {
          v31 = v37;
          *((_QWORD *)v51 + v37) = v41;
          v37 = v31 + 1;
          if ( v33 )
          {
            v41 = 0LL;
            v34 = 1;
          }
          else
          {
            v41 = v42;
            LODWORD(xmmword_140C0B510) = v39 + xmmword_140C0B510;
            DWORD1(xmmword_140C0B510) += HIDWORD(v39);
          }
        }
      }
      if ( !v35 )
      {
        SubRectangle = BgpGxFindSubRectangle(v2, v26, (__int64)&v42, (unsigned int *)&v39, &v33);
        if ( SubRectangle >= 0 )
        {
          v32 = v37;
          *((_QWORD *)v51 + v37) = v2;
          v37 = v32 + 1;
          if ( v33 )
          {
            v35 = 1;
            v2 = 0LL;
          }
          else
          {
            LODWORD(xmmword_140C0B550) = v39 + xmmword_140C0B550;
            DWORD1(xmmword_140C0B550) += HIDWORD(v39);
            v2 = v42;
          }
        }
      }
      if ( !v36 )
      {
        v45 = *(_DWORD *)(v1 + 4);
        v46 = *(_DWORD *)v1;
        SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v49);
        if ( SubRectangle < 0 )
        {
          v0 = v41;
          goto LABEL_34;
        }
        memset(*(void **)(v49 + 24), 0, *(unsigned int *)(v49 + 12));
      }
      v0 = v41;
      if ( !v34 )
      {
        v45 = v41[1];
        v46 = *v41;
        SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v48);
        if ( SubRectangle < 0 )
          goto LABEL_34;
        memset(*(void **)(v48 + 24), 0, *(unsigned int *)(v48 + 12));
      }
      if ( !v35 )
      {
        v45 = v2[1];
        v46 = *v2;
        SubRectangle = BgpGxRectangleCreate(&v45, BitsPerPixel, &v43);
        if ( SubRectangle < 0 )
          goto LABEL_34;
        memset(*(void **)(v43 + 24), 0, *(unsigned int *)(v43 + 12));
      }
      LogFwStat(0LL, 5LL, 0LL);
      dword_140C0B4F4 = 0;
      byte_140C0B500 = v34;
      byte_140C0B501 = v35;
      byte_140C0B502 = v36;
      qword_140C0B538 = v48;
      qword_140C0B548 = v49;
      qword_140C0B580 = v43;
      dword_140C0B4F0 = 100;
      qword_140C0B4F8 = v25;
      qword_140C0B508 = (__int64)v0;
      qword_140C0B540 = v1;
      qword_140C0B578 = (__int64)v2;
      KeResetEvent(&stru_140D16700);
      KeInitializeTimerEx(&stru_140D166C0, NotificationTimer);
      KeInitializeDpc(&stru_140D16640, AnFwpFadeAnimationTimer, 0LL);
      byte_140CF7769 = 1;
      LogFwStat(1LL, 7LL, 0LL);
      KeSetCoalescableTimer(&stru_140D166C0, 0LL, 0x1Eu, 0, &stru_140D16640);
      dword_140C0E3B0 |= 0x2000u;
      dword_140C0E3CC = v5;
LABEL_34:
      if ( v37 )
      {
        v27 = v51;
        v28 = v37;
        do
        {
          BgpGxRectangleDestroy(*v27++);
          --v28;
        }
        while ( v28 );
      }
LABEL_37:
      if ( SubRectangle >= 0 )
        return (unsigned int)SubRectangle;
      goto LABEL_39;
    }
    v36 = 0;
    v9 = BgpGxParseBitmap((__int64)qword_140C0E3F8, (__int64 *)&v44);
    v1 = (__int64)v44;
    SubRectangle = v9;
    if ( v9 < 0 )
      goto LABEL_37;
    v10 = v44[2];
    if ( BitsPerPixel != v10 )
    {
      v11 = BgpGxRectangleSize(*v44, v44[1], v10);
      v44 = 0LL;
      v5 = ((v11 + 15) & 0xFFFFFFF0) + 32;
      SubRectangle = BgpGxConvertRectangleEx((int *)v1, BitsPerPixel, &v44, 0);
      if ( SubRectangle < 0 )
        goto LABEL_37;
      *(_QWORD *)&v51[0] = v1;
      v1 = (__int64)v44;
      v37 = 1;
    }
    v12 = BgpGxRectangleSize(*(_DWORD *)v1, *(_DWORD *)(v1 + 4), BitsPerPixel);
    v13 = qword_140C0E40C + dword_140C0E414;
    v14 = HIDWORD(qword_140C0E40C) + dword_140C0E418;
    v15 = xmmword_140C0B510 + DWORD2(xmmword_140C0B510);
    v5 += ((v12 + 15) & 0xFFFFFFF0) + 32 + 2 * (((v12 + 15) & 0xFFFFFFF0) + 32);
    v16 = DWORD1(xmmword_140C0B510) + HIDWORD(xmmword_140C0B510);
    if ( (unsigned int)xmmword_140C0B510 <= (int)qword_140C0E40C + dword_140C0E414
      && (unsigned int)xmmword_140C0B510 >= (unsigned int)qword_140C0E40C
      && DWORD1(xmmword_140C0B510) >= HIDWORD(qword_140C0E40C)
      && DWORD1(xmmword_140C0B510) <= v14 )
    {
      if ( v15 < (unsigned int)qword_140C0E40C || v15 > v13 || v16 < HIDWORD(qword_140C0E40C) || v16 > v14 )
        goto LABEL_49;
      v34 = 1;
    }
    v17 = xmmword_140C0B550 + DWORD2(xmmword_140C0B550);
    v18 = DWORD1(xmmword_140C0B550) + HIDWORD(xmmword_140C0B550);
    if ( (unsigned int)xmmword_140C0B550 < (unsigned int)qword_140C0E40C
      || (unsigned int)xmmword_140C0B550 > v13
      || DWORD1(xmmword_140C0B550) < HIDWORD(qword_140C0E40C)
      || DWORD1(xmmword_140C0B550) > v14 )
    {
LABEL_12:
      if ( v34 )
        goto LABEL_15;
      goto LABEL_13;
    }
    if ( v17 >= (unsigned int)qword_140C0E40C && v17 <= v13 && v18 >= HIDWORD(qword_140C0E40C) && v18 <= v14 )
    {
      v35 = 1;
      goto LABEL_12;
    }
LABEL_49:
    SubRectangle = -1073741823;
    goto LABEL_34;
  }
LABEL_68:
  AnFwpDisableProgressTimer();
  AnFwDisableBackgroundUpdateTimer();
  SubRectangle = BgpClearScreen(0xFF000000);
  if ( v0 )
    BgpGxRectangleDestroy(v0);
  if ( v48 )
    BgpGxRectangleDestroy(v48);
  if ( v1 )
    BgpGxRectangleDestroy(v1);
  if ( v49 )
    BgpGxRectangleDestroy(v49);
  if ( v2 )
    BgpGxRectangleDestroy(v2);
  if ( v3 )
    BgpGxRectangleDestroy(v3);
  return (unsigned int)SubRectangle;
}
