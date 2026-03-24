/*
 * XREFs of xxEngNineGrid @ 0x1C00C9058
 * Callers:
 *     EngNineGrid @ 0x1C00C8F90 (EngNineGrid.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00B7A60 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     RenderNineGrid @ 0x1C00C9560 (RenderNineGrid.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
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
  signed int v11; // r8d
  unsigned int v12; // r11d
  signed int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  unsigned __int8 v16; // r13
  int v17; // r10d
  int v18; // r8d
  int v19; // edi
  int v20; // r14d
  BOOL v21; // eax
  char v22; // r8
  int v23; // r9d
  int v24; // r10d
  char v25; // dl
  int v26; // r14d
  int v27; // edi
  signed int ClearBits; // eax
  __int64 v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  SURFOBJ *v34; // rax
  __int64 v35; // r8
  int v36; // ebx
  int v37; // ecx
  int v38; // edx
  int v39; // r14d
  int v40; // r13d
  int v41; // edi
  int v42; // ecx
  int v43; // esi
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned __int8 v48; // [rsp+60h] [rbp-A0h]
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  char v50; // [rsp+70h] [rbp-90h]
  int v51; // [rsp+74h] [rbp-8Ch]
  signed int v52; // [rsp+7Ch] [rbp-84h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v64[4]; // [rsp+100h] [rbp+0h] BYREF

  v10 = 0LL;
  v59 = a1;
  v11 = a5[2];
  v12 = a5[1];
  v54 = a2;
  v13 = *a5;
  v55 = a8;
  v14 = v11;
  v58 = a4;
  v15 = a5[3];
  v63[1] = __PAIR64__(v15, v11);
  v53 = a3;
  v57 = (__int64)a6;
  v56 = (__int64)a7;
  v63[0] = __PAIR64__(v12, v13);
  if ( v13 <= v11 )
  {
    v16 = 0;
  }
  else
  {
    v14 = v13;
    LODWORD(v63[1]) = v13;
    v13 = v11;
    v16 = 1;
    LODWORD(v63[0]) = v11;
  }
  v48 = v16;
  if ( (*a7 & 0x20) != 0 )
  {
    v17 = a6[2] - *a6;
    v18 = a6[3] - a6[1];
    if ( v14 - v13 > v17 )
    {
      if ( v16 )
        LODWORD(v63[0]) = v14 - v17;
      else
        LODWORD(v63[1]) = v17 + v13;
    }
    if ( (int)(v15 - v12) > v18 )
    {
      if ( v16 )
        HIDWORD(v63[0]) = v15 - v18;
      else
        HIDWORD(v63[1]) = v12 + v18;
    }
  }
  *(_OWORD *)v62 = *(_OWORD *)v63;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=((int *)v62, (int *)(a3 + 4));
  v19 = HIDWORD(v62[1]);
  v20 = v62[1];
  v21 = ERECTL::bWrapped((ERECTL *)v62);
  v25 = 0;
  if ( !v21 )
    v25 = v22;
  if ( v24 != v20 && v23 != v19 && v25 )
  {
    v26 = v20 - v24;
    v49 = 0LL;
    v27 = v19 - v23;
    v50 = 0;
    v51 = 0;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    ClearBits = RtlFindClearBits(&apsoNineGridBitmapHeader, 1u, 0);
    v29 = ClearBits;
    v52 = ClearBits;
    if ( ClearBits == -1 || (v10 = apsoNineGrid[ClearBits]) == 0 )
    {
      v60 = 0LL;
      v30 = v54 + 104;
      if ( !v54 )
        v30 = 128LL;
      v61 = 0LL;
      v31 = *(_QWORD **)v30;
      if ( v31 )
      {
        *(_QWORD *)((char *)&v60 + 4) = 0x4000000100LL;
        v32 = v54 + 72;
        if ( !v54 )
          v32 = 96LL;
        DWORD2(v61) = 0;
        LODWORD(v60) = *(_DWORD *)v32;
        *(_QWORD *)&v61 = *v31;
        if ( SURFMEM::bCreateDIB((SURFMEM *)&v49, (struct _DEVBITMAPINFO *)&v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        {
          v33 = v49;
          if ( (_DWORD)v29 != -1 )
          {
            v34 = EngLockSurface(*(HSURF *)(v49 + 32));
            v50 |= 1u;
            apsoNineGrid[v29] = v34;
            LOBYTE(v35) = 5;
            HmgSetOwner(*(_QWORD *)(v49 + 32), 0LL, v35);
            *(_DWORD *)(v49 + 92) = 0;
          }
          if ( v33 )
            v10 = v33 + 24;
          else
            v10 = 0LL;
        }
      }
    }
    if ( (_DWORD)v29 != -1 )
      RtlSetBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      if ( v26 > 256 || v27 > 64 )
      {
        v36 = HIDWORD(v62[0]);
        v37 = HIDWORD(v62[1]);
        if ( SHIDWORD(v62[0]) < SHIDWORD(v62[1]) )
        {
          v38 = v62[1];
          do
          {
            v39 = v36 + 64;
            v40 = v36 + 64;
            if ( v36 + 64 > v37 || v39 < v36 )
              v40 = v37;
            v41 = v62[0];
            if ( SLODWORD(v62[0]) < v38 )
            {
              v42 = v48;
              do
              {
                v43 = v41 + 256;
                v44 = v41 + 256;
                if ( v41 + 256 > v38 || v43 < v41 )
                  v44 = v38;
                v64[2] = v44;
                v64[0] = v41;
                v64[1] = v36;
                v64[3] = v40;
                RenderNineGrid(v59, (__int64)v64, v58, (__int64)v63, v57, v56, v55, v42);
                v38 = v62[1];
                v45 = v41;
                v41 += 256;
                if ( v43 < v45 )
                  break;
                v42 = v48;
              }
              while ( v43 < SLODWORD(v62[1]) );
              v37 = HIDWORD(v62[1]);
            }
            v46 = v36;
            v36 += 64;
          }
          while ( v39 >= v46 && v39 < v37 );
          LODWORD(v29) = v52;
        }
      }
      else
      {
        RenderNineGrid(a1, (__int64)v62, v58, (__int64)v63, v57, v56, v55, v16);
      }
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&nineGridPushLock, 0LL);
    if ( (_DWORD)v29 != -1 )
      RtlClearBits(&apsoNineGridBitmapHeader, v29, 1u);
    ExReleasePushLockExclusiveEx(&nineGridPushLock, 0LL);
    KeLeaveCriticalRegion();
    SURFMEM::~SURFMEM((SURFMEM *)&v49);
  }
  return 1LL;
}
