/*
 * XREFs of xxEngNineGrid @ 0x1C00D7A18
 * Callers:
 *     EngNineGrid @ 0x1C00D7950 (EngNineGrid.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     RenderNineGrid @ 0x1C00D7F28 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall xxEngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        signed int *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v10; // r15
  unsigned int v11; // r11d
  signed int v12; // r8d
  signed int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  unsigned __int8 v16; // r13
  char v17; // al
  char v18; // r8
  char v19; // al
  int v20; // edi
  int v21; // ebx
  signed int ClearBits; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  SURFOBJ *v28; // rax
  __int64 v29; // r8
  int v31; // ebx
  int v32; // ecx
  int v33; // edx
  int v34; // r14d
  int v35; // r13d
  int v36; // edi
  int v37; // ecx
  int v38; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // r10d
  int v43; // r8d
  unsigned __int8 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  char v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+74h] [rbp-8Ch]
  signed int v48; // [rsp+7Ch] [rbp-84h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v55; // [rsp+B0h] [rbp-50h]
  __int128 v56; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v60[4]; // [rsp+100h] [rbp+0h] BYREF

  v10 = 0LL;
  v55 = a1;
  v11 = a5[1];
  v49 = a3;
  v12 = a5[2];
  v50 = a2;
  v13 = *a5;
  v51 = a8;
  v14 = v12;
  v54 = a4;
  v15 = a5[3];
  v59[1] = __PAIR64__(v15, v12);
  v53 = (__int64)a6;
  v52 = (__int64)a7;
  v59[0] = __PAIR64__(v11, v13);
  if ( v13 > v12 )
  {
    v14 = v13;
    LODWORD(v59[1]) = v13;
    v13 = v12;
    v16 = 1;
    LODWORD(v59[0]) = v12;
  }
  else
  {
    v16 = 0;
  }
  v44 = v16;
  if ( (*a7 & 0x20) != 0 )
  {
    v42 = a6[2] - *a6;
    v43 = a6[3] - a6[1];
    if ( v14 - v13 > v42 )
    {
      if ( v16 )
        LODWORD(v59[0]) = v14 - v42;
      else
        LODWORD(v59[1]) = v42 + v13;
    }
    if ( (int)(v15 - v11) > v43 )
    {
      if ( v16 )
        HIDWORD(v59[0]) = v15 - v43;
      else
        HIDWORD(v59[1]) = v11 + v43;
    }
  }
  *(_OWORD *)v58 = *(_OWORD *)v59;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=((int *)v58, (int *)(a3 + 4));
  if ( SLODWORD(v58[0]) < 0
    || v58[0] < 0
    || SLODWORD(v58[1]) > a1->sizlBitmap.cx
    || (v17 = 1, SHIDWORD(v58[1]) > a1->sizlBitmap.cy) )
  {
    v17 = 0;
  }
  if ( SLODWORD(v58[0]) >= SLODWORD(v58[1]) || (v18 = 1, SHIDWORD(v58[0]) >= SHIDWORD(v58[1])) )
    v18 = 0;
  v19 = v18 & v17;
  if ( LODWORD(v58[0]) != LODWORD(v58[1]) && HIDWORD(v58[0]) != HIDWORD(v58[1]) && v19 )
  {
    v20 = LODWORD(v58[1]) - LODWORD(v58[0]);
    v45 = 0LL;
    v21 = HIDWORD(v58[1]) - HIDWORD(v58[0]);
    v46 = 0;
    v47 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v23 = ClearBits;
    v48 = ClearBits;
    if ( ClearBits != -1 )
    {
      v10 = apsoNineGrid[ClearBits];
      if ( v10 )
        goto LABEL_27;
    }
    v56 = 0LL;
    v24 = v50 + 104;
    if ( !v50 )
      v24 = 128LL;
    v57 = 0LL;
    v25 = *(_QWORD **)v24;
    if ( v25 )
    {
      *(_QWORD *)((char *)&v56 + 4) = 0x4000000100LL;
      v26 = v50 + 72;
      if ( !v50 )
        v26 = 96LL;
      DWORD2(v57) = 0;
      LODWORD(v56) = *(_DWORD *)v26;
      *(_QWORD *)&v57 = *v25;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v45, (struct _DEVBITMAPINFO *)&v56, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v27 = v45;
        if ( (_DWORD)v23 != -1 )
        {
          v28 = EngLockSurface(*(HSURF *)(v45 + 32));
          v46 |= 1u;
          apsoNineGrid[v23] = v28;
          LOBYTE(v29) = 5;
          HmgSetOwner(*(_QWORD *)(v45 + 32), 0LL, v29);
          *(_DWORD *)(v45 + 92) = 0;
        }
        if ( v27 )
          v10 = v27 + 24;
        else
          v10 = 0LL;
      }
    }
    if ( (_DWORD)v23 != -1 )
LABEL_27:
      RtlSetBits(&apsoNineGridBitmapHeader, v23, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      if ( v21 > 64 || v20 > 256 )
      {
        v31 = HIDWORD(v58[0]);
        v32 = HIDWORD(v58[1]);
        if ( SHIDWORD(v58[0]) < SHIDWORD(v58[1]) )
        {
          v33 = v58[1];
          do
          {
            v34 = v31 + 64;
            v35 = v31 + 64;
            if ( v31 + 64 > v32 || v34 < v31 )
              v35 = v32;
            v36 = v58[0];
            if ( SLODWORD(v58[0]) < v33 )
            {
              v37 = v44;
              do
              {
                v38 = v36 + 256;
                v39 = v36 + 256;
                if ( v36 + 256 > v33 || v38 < v36 )
                  v39 = v33;
                v60[2] = v39;
                v60[0] = v36;
                v60[1] = v31;
                v60[3] = v35;
                RenderNineGrid(v55, (__int64)v60, v54, (__int64)v59, v53, v52, v51, v37);
                v33 = v58[1];
                v40 = v36;
                v36 += 256;
                if ( v38 < v40 )
                  break;
                v37 = v44;
              }
              while ( v38 < SLODWORD(v58[1]) );
              v32 = HIDWORD(v58[1]);
            }
            v41 = v31;
            v31 += 64;
          }
          while ( v34 < v32 && v34 >= v41 );
          LODWORD(v23) = v48;
        }
      }
      else
      {
        RenderNineGrid(a1, (__int64)v58, v54, (__int64)v59, v53, v52, v51, v16);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v23 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v23, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v45);
  }
  return 1LL;
}
