/*
 * XREFs of FindNCHit @ 0x1C00E609C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0021944 (GetWindowBordersForDpi.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     GetWindowDpiLastNotify @ 0x1C00A3A34 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A47EC (_HasCaptionIcon.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     SizeBoxHwnd @ 0x1C024E490 (SizeBoxHwnd.c)
 */

__int64 __fastcall FindNCHit(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  int v4; // r13d
  unsigned int v5; // esi
  int WindowDpiLastNotify; // esi
  int v7; // r15d
  unsigned __int64 v8; // rbx
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
  int v22; // ecx
  unsigned __int8 v23; // r9
  int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int WindowBordersForDpi; // eax
  _DWORD *v29; // r8
  int v30; // r12d
  unsigned __int8 v31; // cl
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // r12d
  int v37; // r9d
  _BYTE *v38; // rdx
  char v39; // r10
  int v40; // edi
  int v41; // edi
  char v42; // al
  __int64 v43; // rax
  int v44; // eax
  __int128 v45; // [rsp+38h] [rbp-39h] BYREF
  int v46; // [rsp+48h] [rbp-29h]
  unsigned __int64 v47; // [rsp+50h] [rbp-21h]
  __int128 v48; // [rsp+58h] [rbp-19h] BYREF
  __int64 v49; // [rsp+68h] [rbp-9h]
  __int64 v50; // [rsp+70h] [rbp-1h]
  __int128 v51; // [rsp+78h] [rbp+7h] BYREF
  __int64 v52; // [rsp+88h] [rbp+17h]

  v2 = *(_DWORD **)(a1 + 40);
  v47 = 0LL;
  v4 = 3;
  v52 = a1;
  v5 = v2[72];
  v48 = 0LL;
  v45 = 0LL;
  if ( (v5 & 0xF) == 3 )
  {
    WindowDpiLastNotify = (v5 >> 8) & 0x1FF;
  }
  else if ( (v2[58] & 0x400) != 0 )
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
  HIDWORD(v47) = SHIWORD(a2);
  LODWORD(v47) = (__int16)a2;
  v8 = v47;
  if ( !PtInRect(v2 + 22, v47) )
    return 0LL;
  v11 = 2;
  if ( (*(_BYTE *)(v10 + 31) & 0x20) != 0 )
  {
    v16 = v9[3] - 4;
    v17 = v9[2] - 4;
    v18 = v9[1] + 4;
    v46 = *v9 + 4;
    LODWORD(v48) = v46;
    *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v17, v18);
    HIDWORD(v48) = v16;
    if ( !PtInRect(&v48, v47) )
      return v11;
    goto LABEL_16;
  }
  v12 = *(_OWORD *)(v10 + 104);
  v51 = v12;
  if ( PtInRect(&v51, v47) )
    return 1LL;
  v23 = v13[25];
  if ( (v23 & 2) != 0 )
  {
    LODWORD(v45) = v51 - 2;
    v24 = HIDWORD(v51) + 2;
    v50 = (unsigned int)(DWORD1(v51) - 2);
    HIDWORD(v45) = HIDWORD(v51) + 2;
    DWORD2(v45) = DWORD2(v51) + 2;
    DWORD1(v45) = DWORD1(v51) - 2;
  }
  else
  {
    v45 = v12;
    v24 = HIDWORD(v12);
    v50 = DWORD1(v12);
  }
  if ( (v13[16] & 2) != 0 )
  {
    if ( ((v23 ^ v13[26]) & 0x40) != 0 )
      LODWORD(v45) = v45 - GetDpiDependentMetric(0, WindowDpiLastNotify);
    else
      DWORD2(v45) += GetDpiDependentMetric(0, WindowDpiLastNotify);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
  {
    v24 += GetDpiDependentMetric(1, WindowDpiLastNotify);
    HIDWORD(v45) = v24;
  }
  v49 = *(_QWORD *)(a1 + 40);
  if ( PtInRect(&v45, v47) )
  {
    if ( (*(_BYTE *)(v26 + 25) & 2) != 0 )
    {
      LODWORD(v45) = v45 + 2;
      DWORD2(v45) -= 2;
      DWORD1(v45) = v50 + 2;
      HIDWORD(v45) = v24 - 2;
      if ( !PtInRect(&v45, v8) )
        return 18LL;
    }
    v42 = *(_BYTE *)(v26 + 16);
    if ( (v42 & 4) == 0 || SHIDWORD(v47) < SHIDWORD(v51) )
      return 7LL;
    if ( (v42 & 2) != 0 )
    {
      v43 = SizeBoxHwnd(a1, v25, v26);
      if ( v7 >= SDWORD2(v51) )
      {
        v44 = v43 != 0 ? 0xD : 0;
        return (unsigned int)(v44 + 4);
      }
      if ( (*(_BYTE *)(v49 + 26) & 0x40) != 0 && v7 < (int)v51 )
      {
        v44 = v43 != 0 ? 0xC : 0;
        return (unsigned int)(v44 + 4);
      }
    }
    return 6LL;
  }
  WindowBordersForDpi = GetWindowBordersForDpi(
                          *(_DWORD *)(v26 + 28),
                          *(_DWORD *)(v26 + 24),
                          v26,
                          v27,
                          WindowDpiLastNotify);
  v29 = *(_DWORD **)(a1 + 40);
  v30 = v29[23];
  v17 = v29[24] - WindowBordersForDpi;
  LODWORD(v48) = WindowBordersForDpi + v29[22];
  v18 = WindowBordersForDpi + v30;
  v46 = v48;
  HIDWORD(v48) = v29[25] - WindowBordersForDpi;
  LODWORD(v49) = HIDWORD(v48);
  *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v17, v18);
  if ( PtInRect(&v48, v8) )
  {
    v20 = HIDWORD(v47);
    if ( SHIDWORD(v47) >= (int)v50 )
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
        DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
        v22 = 12;
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(22, WindowDpiLastNotify);
        v22 = 23;
      }
      v36 = DpiDependentMetric + v18;
      v37 = GetDpiDependentMetric(v22, WindowDpiLastNotify);
      if ( SHIDWORD(v47) >= v36 && (*(_BYTE *)(*(_QWORD *)(v52 + 40) + 16LL) & 1) != 0 )
        return 5LL;
      if ( v7 >= v46 && v7 < v17 && SHIDWORD(v47) < v36 )
      {
        v38 = *(_BYTE **)(v52 + 40);
        v39 = v38[30];
        if ( (v39 & 8) != 0 )
        {
          if ( v7 < v37 + v46 )
          {
            if ( (unsigned int)HasCaptionIcon(v52) )
              return 3LL;
            return v11;
          }
LABEL_62:
          v40 = v17 - v37;
          if ( v7 >= v40 )
            return 20LL;
          if ( (char)v38[24] >= 0 )
          {
            if ( (v39 & 3) != 0 )
            {
              v41 = v40 - v37;
              if ( v7 >= v41 )
                return 9LL;
              if ( v7 >= v41 - v37 )
                return 8LL;
            }
            else if ( (v38[25] & 4) != 0 && v7 >= v40 - v37 )
            {
              return 21;
            }
          }
          return v11;
        }
        if ( (v38[21] & 2) == 0 )
          goto LABEL_62;
      }
    }
    return v11;
  }
  v31 = *(_BYTE *)(v19 + 30);
  if ( (v31 & 4) == 0 )
  {
    if ( ((unsigned __int8)~(v31 >> 6) & (unsigned __int8)~(*(_BYTE *)(v19 + 21) >> 1) & 1) != 0
      && (*(_BYTE *)(v19 + 24) & 1) == 0 )
    {
      return 0LL;
    }
    return 18LL;
  }
  if ( *(char *)(v19 + 24) >= 0 )
  {
    v32 = GetDpiDependentMetric(13, WindowDpiLastNotify);
    v33 = 12;
  }
  else
  {
    v32 = GetDpiDependentMetric(24, WindowDpiLastNotify);
    v33 = 23;
  }
  v34 = -v32;
  v35 = -(int)GetDpiDependentMetric(v33, WindowDpiLastNotify);
  if ( SHIDWORD(v47) >= v18 - v34 )
  {
    v4 = 0;
    if ( SHIDWORD(v47) >= v34 + (int)v49 )
      v4 = 6;
  }
  if ( v7 >= v46 - v35 )
  {
    if ( v7 >= v17 + v35 )
      v4 += 2;
  }
  else
  {
    ++v4;
  }
  return (unsigned int)(v4 + 9);
}
