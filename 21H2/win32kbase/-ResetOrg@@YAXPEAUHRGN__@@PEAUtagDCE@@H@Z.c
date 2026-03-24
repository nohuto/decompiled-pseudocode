/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0
 * Callers:
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C0038920 (UserSetDCVisRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00348A0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0037940 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003796C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003809C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00382D0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C006EE58 (GetMonitorRectForDpi.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C006F95C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     IntersectRect @ 0x1C0071334 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C0071430 (GetScreenRectForDpi.c)
 *     GreSetRectRgn @ 0x1C007FC00 (GreSetRectRgn.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1C0095CEC (IsGetLayeredOrRedirectedParentSupported.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00C8F50 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ResetOrg(HRGN a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // ebx
  __int128 v8; // xmm0
  unsigned int v9; // r14d
  int v10; // edi
  struct tagMONITOR *v11; // r15
  int v12; // eax
  int v13; // r13d
  int v14; // r15d
  int v15; // eax
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r15d
  int v21; // ebx
  LONG v22; // ebx
  LONG v23; // r15d
  int v24; // edi
  int v25; // ebx
  _DWORD *v26; // rdx
  int v27; // r8d
  int v28; // ecx
  int v29; // ecx
  __int128 v30; // xmm0
  __int64 v31; // rcx
  int v32; // eax
  __m128i *ScreenRectForDpi; // rax
  __m128i v34; // xmm1
  __int64 v35; // rax
  unsigned __int64 v36; // xmm0_8
  __int64 v37; // rdx
  int v38; // eax
  __int128 v39; // [rsp+30h] [rbp-39h] BYREF
  __int128 v40; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v41[14]; // [rsp+50h] [rbp-19h] BYREF
  struct _POINTL v42; // [rsp+D8h] [rbp+6Fh] BYREF
  int v43; // [rsp+E0h] [rbp+77h]

  v43 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v5 = a2;
  v39 = 0LL;
  v6 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(&v40, 0LL);
    v7 = *(_DWORD *)(v5 + 64);
    v34 = *ScreenRectForDpi;
    v35 = ScreenRectForDpi->m128i_i64[0];
    v36 = _mm_srli_si128(v34, 8).m128i_u64[0];
    v9 = v36 - v35;
    v10 = HIDWORD(v36) - HIDWORD(v35);
    DWORD2(v39) = v36 - v35;
    HIDWORD(v39) = HIDWORD(v36) - HIDWORD(v35);
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 64);
    if ( (v7 & 1) != 0 )
      v8 = *(_OWORD *)(v6 + 88);
    else
      v8 = *(_OWORD *)(v6 + 104);
    v39 = v8;
    v9 = DWORD2(v8);
    v10 = HIDWORD(v8);
  }
  v11 = *(struct tagMONITOR **)(v5 + 88);
  v12 = v7;
  if ( !v11 || (v7 & 0x4000) != 0 )
  {
    v13 = v39;
  }
  else
  {
    v37 = *(_QWORD *)GetMonitorRectForDpi(&v40, *(_QWORD *)(v5 + 88), 0LL);
    v38 = -(int)v37;
    v13 = v38 + v39;
    a2 = (unsigned int)-HIDWORD(v37);
    LODWORD(v39) = v38 + v39;
    DWORD1(v39) += a2;
    v9 += v38;
    v10 += a2;
    *((_QWORD *)&v39 + 1) = __PAIR64__(v10, v9);
    v12 = v7;
    if ( a1 )
    {
      SetMonitorRegion(v11, a1, a1);
      v12 = *(_DWORD *)(v5 + 64);
    }
  }
  if ( (v12 & 0x4000000) != 0 )
    goto LABEL_43;
  v14 = -1073741637;
  if ( qword_1C0257678 )
    v15 = qword_1C0257678(v6, a2, 0LL);
  else
    v15 = -1073741637;
  if ( v15 >= 0 && (v6 = *(_QWORD *)(v5 + 16), qword_1C0257680) )
    v16 = qword_1C0257680(v6, a2, 0LL);
  else
    v16 = 0LL;
  if ( v16 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL) & 0x20000000) != 0 )
    {
      if ( qword_1C0257688 )
        v14 = qword_1C0257688(v6, a2, 0LL);
      if ( v14 >= 0 )
      {
        if ( qword_1C0257690 ? qword_1C0257690(v16, a2, 0LL) : 0LL )
        {
          v18 = *(_QWORD *)(v16 + 40);
          v19 = *(_QWORD *)(v5 + 88);
          v20 = *(_DWORD *)(v18 + 88);
          v21 = *(_DWORD *)(v18 + 92);
          if ( v19 && *(int *)(v5 + 64) < 0 )
          {
            DWORD1(v39) += v21;
            LODWORD(v39) = v20 + v13;
            DWORD2(v39) = v20 + v9;
            HIDWORD(v39) = v21 + v10;
            v40 = *(_OWORD *)GetMonitorRectForDpi(&v40, v19, 0LL);
            IntersectRect(&v39, &v39, &v40);
            v10 = HIDWORD(v39);
            v9 = DWORD2(v39);
            v13 = v39;
          }
          v22 = -v21;
          v23 = -v20;
          v13 += v23;
          HIDWORD(v39) = v22 + v10;
          v24 = v22 + DWORD1(v39);
          LODWORD(v39) = v13;
          DWORD2(v39) = v23 + v9;
          DWORD1(v39) += v22;
          if ( a1 )
          {
            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v41, a1, 0, 0);
            v42.x = v23;
            v42.y = v22;
            if ( v41[0] )
              RGNOBJ::bOffset((RGNOBJ *)v41, &v42);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v41);
          }
LABEL_26:
          v25 = v43;
          goto LABEL_27;
        }
      }
    }
LABEL_43:
    if ( a1 )
      GreSetRectRgn(a1, 0);
    v24 = DWORD1(v39);
    goto LABEL_26;
  }
  v25 = v43;
  if ( v43
    && (int)IsGetLayeredOrRedirectedParentSupported(v6, a2, 0LL) >= 0
    && a1
    && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    v43 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
    v24 = DWORD1(v39);
  }
  else
  {
    v24 = DWORD1(v39);
  }
LABEL_27:
  DCOBJA::DCOBJA((DCOBJA *)v41, *(HDC *)(v5 + 8));
  if ( v41[0] )
  {
    *(_DWORD *)(v41[0] + 8LL * (*(_DWORD *)(v41[0] + 40LL) & 1) + 1016) = v13;
    *(_DWORD *)(v41[0] + 8LL * (*(_DWORD *)(v41[0] + 40LL) & 1) + 1020) = v24;
    v26 = (_DWORD *)v41[0];
    v27 = *(_DWORD *)(v41[0] + 40LL) & 1;
    v28 = v27 ? *(_DWORD *)(v41[0] + 1024LL) : *(_DWORD *)(v41[0] + 1016LL);
    *(_DWORD *)(v41[0] + 1200LL) = *(_DWORD *)(v41[0] + 124LL) + v28;
    v29 = v27 ? v26[257] : v26[255];
    v30 = v39;
    v26[301] = v26[32] + v29;
    *(_OWORD *)(v41[0] + 1032LL) = v30;
    v31 = v41[0];
    v32 = *(_DWORD *)(v41[0] + 520LL);
    if ( (v32 & 1) != 0 && (v32 & 2) == 0 )
    {
      *(_DWORD *)(v41[0] + 36LL) |= 0x10u;
      *(_DWORD *)(v31 + 520) = v32 | 4;
    }
  }
  DCOBJA::~DCOBJA((DCOBJA *)v41);
  if ( v25 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v41, *(HDC *)(v5 + 8));
    GreSelectVisRgnInternal(v41, a1, 1LL);
    DCOBJA::~DCOBJA((DCOBJA *)v41);
  }
}
