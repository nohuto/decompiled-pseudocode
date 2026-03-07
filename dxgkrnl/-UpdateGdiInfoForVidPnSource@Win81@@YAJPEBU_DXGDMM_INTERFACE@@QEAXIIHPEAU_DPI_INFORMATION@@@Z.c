__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  _OWORD *v6; // r12
  Win81 *v7; // r13
  struct _D3DKMDT_2DREGION *v8; // r14
  DXGPROCESS *Current; // rax
  __int64 (__fastcall *v12)(Win81 *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v13; // eax
  __int64 v14; // rsi
  DpiInternal *v15; // rdi
  int v16; // eax
  const wchar_t *v17; // r9
  int v18; // eax
  struct tagSIZE v19; // r9
  int v20; // edi
  unsigned __int64 v21; // rdx
  unsigned int v22; // edi
  __int64 v23; // r12
  __int64 (__fastcall *v24)(unsigned __int8 *, _QWORD, unsigned __int64, _BYTE *); // rax
  int v25; // eax
  __int64 (__fastcall *v26)(unsigned __int8 *, _QWORD, _QWORD, __int64 *); // rax
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // esi
  bool v30; // r12
  int VideoOutputTechnology; // eax
  __int64 v32; // rbx
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // r13d
  unsigned int v36; // r12d
  unsigned int v37; // eax
  unsigned int v38; // esi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v39; // ebx
  int v40; // eax
  const struct _DXGDMM_VIDPN_INTERFACE *v41; // r9
  __int64 v42; // rdx
  struct tagSIZE v43; // rdx
  unsigned int v44; // ebx
  bool v45; // si
  unsigned int v46; // ecx
  unsigned int v47; // eax
  __int64 v48; // rdx
  struct _DPI_INFORMATION *v49; // r9
  __int64 v50; // r8
  unsigned __int8 *v51; // rdi
  __int64 v52; // r12
  struct tagSIZE v53; // r8
  unsigned int v54; // eax
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  struct _D3DKMDT_2DREGION *v59; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v60; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v61; // [rsp+28h] [rbp-D8h]
  struct _DPI_INFORMATION *v62; // [rsp+30h] [rbp-D0h]
  bool v63; // [rsp+50h] [rbp-B0h]
  bool v64; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v65[10]; // [rsp+52h] [rbp-AEh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v66; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v67; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  __int64 v69; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v71; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v73; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v74; // [rsp+94h] [rbp-6Ch]
  int v75; // [rsp+9Ch] [rbp-64h]
  unsigned int v76; // [rsp+A0h] [rbp-60h]
  __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPN__ *v79; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v80; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v81; // [rsp+C8h] [rbp-38h]
  BOOL v82; // [rsp+CCh] [rbp-34h]
  unsigned __int64 v83; // [rsp+D0h] [rbp-30h] BYREF
  Win81 *v84; // [rsp+D8h] [rbp-28h]
  char v85; // [rsp+E0h] [rbp-20h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v86; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v87)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  int v89; // [rsp+100h] [rbp+0h]
  char v90; // [rsp+108h] [rbp+8h] BYREF
  DpiInternal *v91; // [rsp+110h] [rbp+10h]
  void (__fastcall *v92)(__int64, DpiInternal *); // [rsp+118h] [rbp+18h]
  __int64 v93; // [rsp+120h] [rbp+20h]
  int v94; // [rsp+128h] [rbp+28h]
  _OWORD v95[6]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD *v96; // [rsp+190h] [rbp+90h]
  __int128 v97; // [rsp+198h] [rbp+98h]
  __int128 v98; // [rsp+1A8h] [rbp+A8h]
  _BYTE v99[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int64 v100; // [rsp+220h] [rbp+120h] BYREF
  int v101; // [rsp+228h] [rbp+128h]

  v6 = (_OWORD *)a6;
  v7 = a2;
  v8 = (struct _D3DKMDT_2DREGION *)(unsigned int)a3;
  v81 = (unsigned int)a3;
  v96 = (_OWORD *)a6;
  v76 = a4;
  v84 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current && DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry2(2LL, v7, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Win32k should not call Win81::UpdateGdiInfoForVidPnSource for adapter 0x%I64x in remote session, returning 0x%I64x!",
      (__int64)v7,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  v12 = (__int64 (__fastcall *)(Win81 *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v79 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0;
  v90 = 0;
  v72 = 0LL;
  v13 = v12(v7, &v72, &v79);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, v13);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)v7,
      v14,
      0LL,
      0LL,
      0LL);
    goto LABEL_100;
  }
  DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
    (__int64)&v90,
    v72,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v15 = v91;
  v71 = 0LL;
  v77 = 0LL;
  v16 = (*(__int64 (__fastcall **)(DpiInternal *, unsigned __int8 **, __int64 *))v79)(v91, &v71, &v77);
  v14 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, v15, v16);
    v17 = L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)";
    v62 = 0LL;
    v61 = (unsigned __int8 *)v14;
    v59 = (struct _D3DKMDT_2DREGION *)v15;
LABEL_91:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, (__int64)v59, (__int64)v61, (__int64)v62, 0LL, 0LL);
    goto LABEL_100;
  }
  v83 = 0LL;
  v18 = (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD, unsigned __int64 *))v77)(v71, (unsigned int)v8, &v83);
  v14 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry3(2LL, v8, v71, v18);
    v17 = L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)";
    v62 = (struct _DPI_INFORMATION *)v14;
    v61 = v71;
    v59 = v8;
    goto LABEL_91;
  }
  memset(v99, 0, 0x5CuLL);
  v20 = *(_DWORD *)(a6 + 92);
  v21 = 0LL;
  v72 = 0LL;
  v22 = (v83 > 1) | v20 & 0x20;
  *(_DWORD *)&v99[92] = v22;
  v98 = *(_OWORD *)&v99[64];
  if ( !v83 )
  {
    v97 = *(_OWORD *)&v99[16];
LABEL_93:
    if ( (v22 & 2) == 0
      || (v53 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v99[80]), 4)),
          v53.cx == 1234568) )
    {
      v54 = *(_DWORD *)&v99[8];
    }
    else
    {
      v54 = Win81::AdjustDesktopScaleFactorForOverride((Win81 *)0x64, *(int *)&v99[32], v53, v19);
      *(_DWORD *)&v99[8] = v54;
    }
    if ( !v54 )
    {
      WdLogSingleEntry1(1LL, 1042LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
        1042LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v14) = 0;
    v55 = v97;
    *v6 = *(_OWORD *)v99;
    v56 = *(_OWORD *)&v99[32];
    v6[1] = v55;
    v57 = *(_OWORD *)&v99[48];
    v6[2] = v56;
    v58 = v98;
    v6[3] = v57;
    v6[4] = v58;
    v6[5] = *(_OWORD *)&v99[80];
    goto LABEL_100;
  }
  v97 = *(_OWORD *)&v99[16];
  while ( 1 )
  {
    v23 = v81;
    *(_DWORD *)&v65[6] = -1;
    v24 = *(__int64 (__fastcall **)(unsigned __int8 *, _QWORD, unsigned __int64, _BYTE *))(v77 + 8);
    v65[1] = 0;
    v25 = v24(v71, v81, v21, &v65[6]);
    v14 = v25;
    if ( v25 < 0 )
    {
      v50 = v23;
      v51 = (unsigned __int8 *)v23;
      v52 = v72;
      WdLogSingleEntry3(2LL, v72, v50, v25);
      v17 = L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)";
      v62 = (struct _DPI_INFORMATION *)v14;
      v61 = v51;
      v59 = (struct _D3DKMDT_2DREGION *)v52;
      goto LABEL_91;
    }
    v69 = 0LL;
    v26 = *(__int64 (__fastcall **)(unsigned __int8 *, _QWORD, _QWORD, __int64 *))(v77 + 24);
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v89 = 0;
    v85 = 0;
    v27 = v26(v71, (unsigned int)v23, *(unsigned int *)&v65[6], &v69);
    v14 = v27;
    if ( v27 < 0 )
      break;
    v28 = v69;
    if ( !v69 )
    {
      WdLogSingleEntry1(1LL, 786LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidPnPresentPathInfo != NULL", 786LL, 0LL, 0LL, 0LL, 0LL);
      v28 = v69;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v85,
      v28,
      *(_QWORD *)(v77 + 32),
      (__int64)v71);
    v67 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v86 + 5));
    v63 = 0;
    v29 = v67;
    v66 = D3DKMDT_VOT_UNINITIALIZED;
    v30 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, *(unsigned int *)&v65[6], &v66, 0LL);
    if ( VideoOutputTechnology >= 0 )
    {
      v30 = IsInternalVideoOutput(v66);
      v63 = v30;
    }
    else
    {
      v32 = VideoOutputTechnology;
      WdLogSingleEntry3(2LL, v7, *(unsigned int *)&v65[6], VideoOutputTechnology);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
        (__int64)v7,
        *(unsigned int *)&v65[6],
        v32,
        0LL,
        0LL);
    }
    v82 = v30;
    v68 = 0LL;
    v75 = 0;
    v65[2] = 0;
    v64 = 0;
    v100 = 0LL;
    v101 = 0;
    v73 = 0;
    v70 = 0;
    v33 = ((unsigned __int8)v22 ^ (unsigned __int8)(v22 | (4 * v30))) & 4 ^ v22;
    MonitorGetDpiInfoFromDescriptor(
      (__int64)v7,
      *(unsigned int *)&v65[6],
      (struct DISPLAY_PREFERRED_MODE_INFO *)&v100,
      &v73,
      &v70,
      &v65[2],
      &v64);
    v34 = v100;
    v74 = __PAIR64__(v100, HIDWORD(v100));
    v80 = v100;
    if ( ((v29 - 2) & 0xFFFFFFFD) == 0 )
    {
      v74 = v100;
      v34 = HIDWORD(v100);
      v80 = __PAIR64__(v100, HIDWORD(v100));
    }
    if ( !v64 )
    {
      v35 = HIDWORD(v68);
      v33 |= 8u;
      v36 = v68;
LABEL_32:
      v65[1] = (*((_BYTE *)v84 + 436) & 0x20) != 0;
      goto LABEL_33;
    }
    v36 = v73;
    v35 = v70;
    v68 = __PAIR64__(v70, v73);
    if ( ((v29 - 2) & 0xFFFFFFFD) == 0 )
    {
      v35 = v73;
      v36 = v70;
      v68 = __PAIR64__(v73, v70);
    }
    if ( !v36 || !v35 )
      goto LABEL_30;
    if ( (int)(v36 * v35) <= 16000 && !v63 )
    {
      v33 |= 0x40u;
      v75 = 1;
LABEL_30:
      v36 = 0;
      v68 = 0LL;
      v35 = 0;
    }
    if ( !v36 )
      goto LABEL_32;
LABEL_33:
    v69 = 0LL;
    LODWORD(v14) = DpiInternal::GetCurrentSourceResolution(
                     v91,
                     v79,
                     v86,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v69);
    if ( (int)v14 < 0 )
      goto LABEL_88;
    v78 = 0LL;
    v65[0] = 0;
    LODWORD(v14) = DpiInternal::GetCurrentTargetResolution(
                     v91,
                     v79,
                     v86,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v78,
                     (struct _D3DKMDT_2DREGION *)v65);
    if ( (int)v14 < 0 )
      goto LABEL_88;
    v37 = HIDWORD(v78);
    if ( ((v67 - 2) & 0xFFFFFFFD) != 0 )
    {
      v66 = HIDWORD(v78);
      v37 = v78;
    }
    else
    {
      v66 = (int)v78;
    }
    v38 = v69;
    v67 = v37;
    if ( (v33 & 1) != 0 && v34 && (_DWORD)v74 )
    {
      v39 = HIDWORD(v69);
      if ( v65[0] )
        v39 = HIDWORD(v69) >> 1;
      if ( (unsigned int)v69 >= 2 * HIDWORD(v74) || v39 >= (unsigned int)(2 * v74) )
        v40 = 2;
      else
        v40 = 0;
      v33 ^= (v33 ^ (v33 | v40)) & 2;
      if ( v65[0] )
        v39 *= 2;
    }
    else
    {
      v39 = HIDWORD(v69);
    }
    memset(v95, 0, sizeof(v95));
    v41 = v86;
    DWORD1(v95[5]) = a5;
    *(_QWORD *)&v95[2] = __PAIR64__(v39, v69);
    v42 = *((int *)v86 + 3);
    if ( *((_DWORD *)v86 + 3) != 1 )
    {
      switch ( *((_DWORD *)v86 + 3) )
      {
        case 2:
          goto LABEL_78;
        case 3:
          break;
        case 4:
LABEL_78:
          if ( (_DWORD)v42 == 4 )
          {
            v46 = v67;
            if ( v36 * v39 <= v35 * (unsigned int)v69 )
            {
              v38 = v67;
              v39 = v39 * v67 / (unsigned int)v69;
            }
            else
            {
              v47 = (int)v69 * v66 / (unsigned int)v39;
              v39 = v66;
              v38 = v47;
            }
          }
          else
          {
            v46 = v67;
          }
          v36 = v36 * v38 / v46;
          v35 = v35 * v39 / v66;
          break;
        default:
          if ( *((_DWORD *)v86 + 3) != 5 )
          {
            if ( *((_DWORD *)v86 + 3) == 255 )
              break;
            WdLogSingleEntry1(1LL, v42);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid scaling %I64d",
              *((int *)v86 + 3),
              0LL,
              0LL,
              0LL,
              0LL);
            v41 = v86;
          }
          v33 |= 0x100u;
          break;
      }
    }
    v43 = (struct tagSIZE)*((unsigned int *)v41 + 5);
    *((_QWORD *)&v95[1] + 1) = __PAIR64__(v35, v36);
    if ( (unsigned int)(v43.cx - 5) <= 0xB )
      v43 = (struct tagSIZE)(unsigned int)((v43.cx - 1) % 4 + 1);
    v22 = (((v43.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v33 & 0xFFFFFF7F;
    *(_DWORD *)&v99[92] = v22;
    if ( !v65[1] && !v75 && v64 && v65[2] )
    {
      LODWORD(v60) = (unsigned __int8)v101;
      v22 = v22 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   v84,
                                                   &v68,
                                                   (const struct tagSIZE *)v82,
                                                   (int)&v80,
                                                   (const struct tagSIZE *)v60,
                                                   (unsigned int *)&v95[4]));
      v44 = v95[4];
      *(_DWORD *)&v99[92] = v22;
      if ( !LODWORD(v95[4]) )
      {
        WdLogSingleEntry1(1LL, 998LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
          998LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_66:
      v45 = v63;
      goto LABEL_67;
    }
    v44 = 0;
    LODWORD(v95[4]) = 0;
    if ( !v65[1] )
      goto LABEL_66;
    v45 = v63;
    if ( v63 )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(*(Win81 **)&v95[2], v43, (__int64)v95, v41);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v76, v48, (__int64)v95, v49);
      v22 |= 0x400u;
      *(_DWORD *)&v99[92] = v22;
      goto LABEL_68;
    }
LABEL_67:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v95[1] + 8),
      (const struct tagSIZE *)&v95[2],
      (const struct tagSIZE *)v44,
      v76,
      (unsigned int)v60,
      (__int64)v95);
LABEL_68:
    if ( HIDWORD(v95[5]) )
    {
      WdLogSingleEntry1(1LL, 1015LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
        1015LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    HIDWORD(v95[5]) = v22;
    if ( v45
      || (v22 & 4) == 0 && (*(_DWORD *)&v99[56] + *(_DWORD *)&v99[60]) / 2 <= (DWORD2(v95[3]) + HIDWORD(v95[3])) / 2 )
    {
      *(_OWORD *)v99 = v95[0];
      v97 = v95[1];
      *(_OWORD *)&v99[32] = v95[2];
      v98 = v95[4];
      *(_OWORD *)&v99[80] = v95[5];
      v22 = HIDWORD(v95[5]);
      *(_OWORD *)&v99[48] = v95[3];
    }
    if ( v85 )
      v87(v88, v86);
    v7 = v84;
    v21 = v72 + 1;
    v72 = v21;
    if ( v21 >= v83 )
    {
      v6 = v96;
      goto LABEL_93;
    }
  }
  WdLogSingleEntry3(2LL, v23, *(unsigned int *)&v65[6], v27);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
    v23,
    *(unsigned int *)&v65[6],
    v14,
    0LL,
    0LL);
LABEL_88:
  if ( v85 )
    v87(v88, v86);
LABEL_100:
  if ( v90 )
    v92(v93, v91);
  return (unsigned int)v14;
}
