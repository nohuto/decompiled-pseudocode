/*
 * XREFs of FindNCHit @ 0x1C00AD74C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C00631C8 (_HasCaptionIcon.c)
 *     GetWindowBordersForDpi @ 0x1C00C6AB0 (GetWindowBordersForDpi.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00F0740 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C024B7D0 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v4; // r13d
  unsigned int v5; // esi
  unsigned int WindowDpiLastNotify; // esi
  int v7; // r15d
  __int64 v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r14d
  __int128 v12; // xmm6
  _BYTE *v13; // r8
  __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  int v18; // r12d
  __int64 v19; // r8
  int v20; // r10d
  int DpiDependentMetric; // eax
  __int64 v22; // rcx
  unsigned __int8 v23; // r9
  int v24; // r12d
  __int64 v25; // r8
  int v26; // r9d
  int WindowBordersForDpi; // eax
  _DWORD *v28; // r8
  int v29; // r12d
  unsigned __int8 v30; // cl
  int v31; // eax
  __int64 v32; // rcx
  int v33; // ebx
  int v34; // eax
  int v35; // r12d
  int v36; // r9d
  _BYTE *v37; // rdx
  char v38; // r10
  int v39; // edi
  int v40; // edi
  char v41; // al
  __int64 v42; // rax
  int v43; // eax
  __int128 v44; // [rsp+38h] [rbp-39h] BYREF
  int v45; // [rsp+48h] [rbp-29h]
  __int64 v46; // [rsp+50h] [rbp-21h]
  __int128 v47; // [rsp+58h] [rbp-19h] BYREF
  __int64 v48; // [rsp+68h] [rbp-9h]
  __int64 v49; // [rsp+70h] [rbp-1h]
  __int128 v50; // [rsp+78h] [rbp+7h] BYREF
  __int64 v51; // [rsp+88h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 40);
  v46 = 0LL;
  v4 = 3;
  v51 = a1;
  v5 = *(_DWORD *)(v2 + 288);
  v47 = 0LL;
  v44 = 0LL;
  if ( (v5 & 0xF) == 3 )
  {
    WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v2 + 232) & 0x400) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  else if ( (v5 & 0xF) == 0
         && (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
  }
  v7 = (__int16)a2;
  HIDWORD(v46) = SHIWORD(a2);
  LODWORD(v46) = (__int16)a2;
  v8 = v46;
  if ( !(unsigned int)PtInRect(v2 + 88, v46) )
    return 0LL;
  v11 = 2;
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    v16 = v9[3] - 4;
    v17 = v9[2] - 4;
    v18 = v9[1] + 4;
    v45 = *v9 + 4;
    LODWORD(v47) = v45;
    *(_QWORD *)((char *)&v47 + 4) = __PAIR64__(v17, v18);
    HIDWORD(v47) = v16;
    if ( !(unsigned int)PtInRect(&v47, v46) )
      return v11;
    goto LABEL_16;
  }
  v12 = *(_OWORD *)(v10 + 104);
  v50 = v12;
  if ( (unsigned int)PtInRect(&v50, v46) )
    return 1LL;
  v23 = v13[25];
  if ( (v23 & 2) != 0 )
  {
    LODWORD(v44) = v50 - 2;
    v24 = HIDWORD(v50) + 2;
    v49 = (unsigned int)(DWORD1(v50) - 2);
    HIDWORD(v44) = HIDWORD(v50) + 2;
    DWORD2(v44) = DWORD2(v50) + 2;
    DWORD1(v44) = DWORD1(v50) - 2;
  }
  else
  {
    v44 = v12;
    v24 = HIDWORD(v12);
    v49 = DWORD1(v12);
  }
  if ( (v13[16] & 2) != 0 )
  {
    if ( ((v23 ^ v13[26]) & 0x40) != 0 )
      LODWORD(v44) = v44 - GetDpiDependentMetric(0LL, WindowDpiLastNotify);
    else
      DWORD2(v44) += GetDpiDependentMetric(0LL, WindowDpiLastNotify);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
  {
    v24 += GetDpiDependentMetric(1LL, WindowDpiLastNotify);
    HIDWORD(v44) = v24;
  }
  v48 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)PtInRect(&v44, v46) )
  {
    if ( (*(_BYTE *)(v25 + 25) & 2) != 0 )
    {
      LODWORD(v44) = v44 + 2;
      DWORD2(v44) -= 2;
      DWORD1(v44) = v49 + 2;
      HIDWORD(v44) = v24 - 2;
      if ( !(unsigned int)PtInRect(&v44, v8) )
        return 18LL;
    }
    v41 = *(_BYTE *)(v25 + 16);
    if ( (v41 & 4) == 0 || SHIDWORD(v46) < SHIDWORD(v50) )
      return 7LL;
    if ( (v41 & 2) != 0 )
    {
      v42 = SizeBoxHwnd(a1);
      if ( v7 >= SDWORD2(v50) )
      {
        v43 = v42 != 0 ? 0xD : 0;
        return (unsigned int)(v43 + 4);
      }
      if ( (*(_BYTE *)(v48 + 26) & 0x40) != 0 && v7 < (int)v50 )
      {
        v43 = v42 != 0 ? 0xC : 0;
        return (unsigned int)(v43 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v25 + 28),
                          *(_DWORD *)(v25 + 24),
                          v25,
                          v26,
                          WindowDpiLastNotify);
  v28 = *(_DWORD **)(a1 + 40);
  v29 = v28[23];
  v17 = v28[24] - WindowBordersForDpi;
  LODWORD(v47) = WindowBordersForDpi + v28[22];
  v18 = WindowBordersForDpi + v29;
  v45 = v47;
  HIDWORD(v47) = v28[25] - WindowBordersForDpi;
  LODWORD(v48) = HIDWORD(v47);
  *(_QWORD *)((char *)&v47 + 4) = __PAIR64__(v17, v18);
  if ( (unsigned int)PtInRect(&v47, v8) )
  {
    v20 = HIDWORD(v46);
    if ( SHIDWORD(v46) >= (int)v49 )
      return 0LL;
    if ( (*(_BYTE *)(v19 + 30) & 0xC0) != 0xC0 )
      return (*(_BYTE *)(v19 + 16) & 1) != 0 ? 5 : 0;
LABEL_16:
    if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
      v7 = *(_DWORD *)(v19 + 88) + *(_DWORD *)(v19 + 96) - v7;
    if ( v20 >= v18 )
    {
      if ( *(char *)(v19 + 24) >= 0 )
      {
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        v22 = 12LL;
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(22LL, WindowDpiLastNotify);
        v22 = 23LL;
      }
      v35 = DpiDependentMetric + v18;
      v36 = GetDpiDependentMetric(v22, WindowDpiLastNotify);
      if ( SHIDWORD(v46) >= v35 && (*(_BYTE *)(*(_QWORD *)(v51 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v7 >= v45 && v7 < v17 && SHIDWORD(v46) < v35 )
      {
        v37 = *(_BYTE **)(v51 + 40);
        v38 = v37[30];
        if ( (v38 & 8) != 0 )
        {
          if ( v7 < v36 + v45 )
          {
            if ( (unsigned int)HasCaptionIcon(v51) )
              return 3LL;
            return v11;
          }
LABEL_62:
          v39 = v17 - v36;
          if ( v7 >= v39 )
            return 20LL;
          if ( (char)v37[24] >= 0 )
          {
            if ( (v38 & 3) != 0 )
            {
              v40 = v39 - v36;
              if ( v7 >= v40 )
                return 9LL;
              if ( v7 >= v40 - v36 )
                return 8LL;
            }
            else if ( (v37[25] & 4) != 0 && v7 >= v39 - v36 )
            {
              return 21;
            }
          }
          return v11;
        }
        if ( (v37[21] & 2) == 0 )
          goto LABEL_62;
      }
    }
    return v11;
  }
  v30 = *(_BYTE *)(v19 + 30);
  if ( (v30 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v30 >> 6) & (unsigned __int8)~(*(_BYTE *)(v19 + 21) >> 1) & 1) != 0
      && (*(_BYTE *)(v19 + 24) & 1) == 0 )
    {
      return 0LL;
    }
    return 18LL;
  }
  if ( *(char *)(v19 + 24) >= 0 )
  {
    v31 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
    v32 = 12LL;
  }
  else
  {
    v31 = GetDpiDependentMetric(24LL, WindowDpiLastNotify);
    v32 = 23LL;
  }
  v33 = -v31;
  v34 = -(int)GetDpiDependentMetric(v32, WindowDpiLastNotify);
  if ( SHIDWORD(v46) >= v18 - v33 )
  {
    v4 = 0;
    if ( SHIDWORD(v46) >= v33 + (int)v48 )
      v4 = 6;
  }
  if ( v7 >= v45 - v34 )
  {
    if ( v7 >= v17 + v34 )
      v4 += 2;
  }
  else
  {
    ++v4;
  }
  return (unsigned int)(v4 + 9);
}
