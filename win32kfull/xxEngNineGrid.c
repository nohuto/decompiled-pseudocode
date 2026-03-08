/*
 * XREFs of xxEngNineGrid @ 0x1C00804C8
 * Callers:
 *     EngNineGrid @ 0x1C0080400 (EngNineGrid.c)
 * Callees:
 *     RenderNineGrid @ 0x1C0080A1C (RenderNineGrid.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
  unsigned int v10; // r11d
  signed int v11; // r8d
  signed int v12; // edx
  int v13; // ecx
  unsigned int v14; // r9d
  char v15; // bl
  char v16; // al
  char v17; // r8
  char v18; // al
  int v19; // esi
  int v20; // edi
  __int64 v21; // r13
  struct _RTL_BITMAP *v22; // r12
  PULONG *p_Buffer; // rbx
  struct _RTL_BITMAP *v24; // r15
  signed int ClearBits; // eax
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // r8
  int v32; // edi
  int v33; // ecx
  int v34; // edx
  int v35; // r12d
  int v36; // r8d
  int v37; // esi
  int v38; // ecx
  int v39; // r15d
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v44; // r10d
  int v45; // r8d
  unsigned __int8 v46; // [rsp+60h] [rbp-A0h]
  int v47; // [rsp+64h] [rbp-9Ch]
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  char v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+74h] [rbp-8Ch]
  signed int v51; // [rsp+7Ch] [rbp-84h]
  __int64 v52; // [rsp+80h] [rbp-80h]
  PRTL_BITMAP BitMapHeader; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  struct _SURFOBJ *v59; // [rsp+B8h] [rbp-48h]
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int64 v62[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v64[4]; // [rsp+100h] [rbp+0h] BYREF

  v59 = a1;
  v10 = a5[1];
  v58 = a3;
  v11 = a5[2];
  v52 = a2;
  v12 = *a5;
  v54 = a8;
  v13 = v11;
  v57 = a4;
  v14 = a5[3];
  v63[1] = __PAIR64__(v14, v11);
  v56 = (__int64)a6;
  v55 = (__int64)a7;
  v63[0] = __PAIR64__(v10, v12);
  if ( v12 > v11 )
  {
    v13 = v12;
    LODWORD(v63[1]) = v12;
    v12 = v11;
    v15 = 1;
    LODWORD(v63[0]) = v11;
  }
  else
  {
    v15 = 0;
  }
  v46 = v15;
  if ( (*a7 & 0x20) != 0 )
  {
    v44 = a6[2] - *a6;
    v45 = a6[3] - a6[1];
    if ( v13 - v12 > v44 )
    {
      if ( v15 )
        LODWORD(v63[0]) = v13 - v44;
      else
        LODWORD(v63[1]) = v44 + v12;
    }
    if ( (int)(v14 - v10) > v45 )
    {
      if ( v15 )
        HIDWORD(v63[0]) = v14 - v45;
      else
        HIDWORD(v63[1]) = v10 + v45;
    }
  }
  *(_OWORD *)v62 = *(_OWORD *)v63;
  if ( a3 && *(_BYTE *)(a3 + 20) )
    ERECTL::operator*=(v62, a3 + 4);
  if ( SLODWORD(v62[0]) < 0
    || v62[0] < 0
    || SLODWORD(v62[1]) > a1->sizlBitmap.cx
    || (v16 = 1, SHIDWORD(v62[1]) > a1->sizlBitmap.cy) )
  {
    v16 = 0;
  }
  if ( SLODWORD(v62[0]) >= SLODWORD(v62[1]) || (v17 = 1, SHIDWORD(v62[0]) >= SHIDWORD(v62[1])) )
    v17 = 0;
  v18 = v17 & v16;
  if ( LODWORD(v62[0]) != LODWORD(v62[1]) && HIDWORD(v62[0]) != HIDWORD(v62[1]) && v18 )
  {
    v19 = LODWORD(v62[1]) - LODWORD(v62[0]);
    v48 = 0LL;
    v20 = HIDWORD(v62[1]) - HIDWORD(v62[0]);
    v49 = 0;
    v50 = 0;
    v21 = 0LL;
    v22 = *(struct _RTL_BITMAP **)(SGDGetSessionState(HIDWORD(v62[0])) + 32);
    p_Buffer = &v22[580].Buffer;
    if ( v22 != (struct _RTL_BITMAP *)-9288LL )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&v22[580].Buffer, 0LL);
    }
    v24 = v22 + 579;
    BitMapHeader = v22 + 579;
    ClearBits = RtlFindClearBits(v22 + 579, 1u, 0);
    v26 = ClearBits;
    v51 = ClearBits;
    if ( ClearBits != -1 )
    {
      v21 = *((_QWORD *)&v22[547].SizeOfBitMap + ClearBits);
      if ( v21 )
        goto LABEL_30;
    }
    v60 = 0LL;
    v27 = v52 + 104;
    if ( !v52 )
      v27 = 128LL;
    v61 = 0LL;
    v28 = *(_QWORD **)v27;
    if ( v28 )
    {
      *(_QWORD *)((char *)&v60 + 4) = 0x4000000100LL;
      v29 = v52 + 72;
      if ( !v52 )
        v29 = 96LL;
      DWORD2(v61) = 0;
      LODWORD(v60) = *(_DWORD *)v29;
      *(_QWORD *)&v61 = *v28;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v48, (struct _DEVBITMAPINFO *)&v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v30 = v48;
        if ( (_DWORD)v26 != -1 )
        {
          *((_QWORD *)&v22[547].SizeOfBitMap + v26) = EngLockSurface(*(HSURF *)(v48 + 32));
          LOBYTE(v31) = 5;
          v49 |= 1u;
          HmgSetOwner(*(_QWORD *)(v48 + 32), 0LL, v31);
          *(_DWORD *)(v48 + 92) = 0;
        }
        if ( v30 )
          v21 = v30 + 24;
        else
          v21 = 0LL;
        v24 = BitMapHeader;
      }
    }
    if ( (_DWORD)v26 != -1 )
LABEL_30:
      RtlSetBits(v24, v26, 1u);
    if ( v22 != (struct _RTL_BITMAP *)-9288LL )
    {
      ExReleasePushLockExclusiveEx(&v22[580].Buffer, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v21 )
    {
      if ( v19 > 256 || v20 > 64 )
      {
        v32 = HIDWORD(v62[0]);
        v33 = HIDWORD(v62[1]);
        if ( SHIDWORD(v62[0]) < SHIDWORD(v62[1]) )
        {
          v34 = v62[1];
          do
          {
            v35 = v32 + 64;
            v47 = v32 + 64;
            v36 = v32 + 64;
            if ( v32 + 64 > v33 || v35 < v32 )
            {
              v36 = v33;
              v47 = v33;
            }
            v37 = v62[0];
            if ( SLODWORD(v62[0]) < v34 )
            {
              v38 = v46;
              do
              {
                v39 = v37 + 256;
                v40 = v37 + 256;
                if ( v37 + 256 > v34 || v39 < v37 )
                  v40 = v34;
                v64[2] = v40;
                v64[3] = v36;
                v64[0] = v37;
                v64[1] = v32;
                RenderNineGrid(v59, (__int64)v64, v57, (__int64)v63, v56, v55, v54, v38);
                v34 = v62[1];
                v41 = v37;
                v37 += 256;
                if ( v39 < v41 )
                  break;
                v36 = v47;
                v38 = v46;
              }
              while ( v39 < SLODWORD(v62[1]) );
              v33 = HIDWORD(v62[1]);
            }
            v42 = v32;
            v32 += 64;
          }
          while ( v35 < v33 && v35 >= v42 );
          LODWORD(v26) = v51;
        }
      }
      else
      {
        RenderNineGrid(v59, (__int64)v62, v57, (__int64)v63, v56, v55, v54, v46);
      }
    }
    if ( p_Buffer )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(p_Buffer, 0LL);
    }
    if ( (_DWORD)v26 != -1 )
      RtlClearBits(BitMapHeader, v26, 1u);
    if ( p_Buffer )
    {
      ExReleasePushLockExclusiveEx(p_Buffer, 0LL);
      KeLeaveCriticalRegion();
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v48);
  }
  return 1LL;
}
