/*
 * XREFs of FindBestPos @ 0x1C024A6B0
 * Callers:
 *     NtUserCalculatePopupWindowPosition @ 0x1C01F6DC0 (NtUserCalculatePopupWindowPosition.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorWorkRect @ 0x1C0041430 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041DF8 (GetMonitorRect.c)
 *     GetMonitorRectForWindow @ 0x1C0042874 (GetMonitorRectForWindow.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C024A5C0 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorMenuRect @ 0x1C025D9AC (GetMonitorMenuRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D9F0 (GetMonitorMenuRectForWindow.c)
 */

__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  unsigned int **v12; // rax
  __int128 v14; // xmm6
  __int128 *MonitorRectForWindow; // rax
  unsigned int *v16; // rcx
  const struct tagWND *v17; // r14
  unsigned int *v18; // rcx
  BOOL v19; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int128 *v21; // rax
  __int128 v22; // xmm0
  unsigned int **v23; // rax
  int v24; // ecx
  int v25; // r15d
  int v26; // r14d
  bool v27; // cf
  int v28; // r8d
  int v29; // ecx
  int v30; // r15d
  __int64 v31; // r14
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int *v35; // rcx
  unsigned int v36; // eax
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  struct tagMONITOR *v40; // [rsp+58h] [rbp-A8h]
  struct tagPOINT v41; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v42; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  char v44[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-50h] BYREF
  char v47[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v49; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v51; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v52[4]; // [rsp+110h] [rbp+10h]

  v41 = 0LL;
  v12 = *a7;
  v40 = a8;
  v42 = 0LL;
  if ( *v12 )
  {
    v16 = **a7;
    if ( *((_QWORD *)v16 + 7) )
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 7);
    else
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 2);
    v51 = *(_OWORD *)GetMonitorMenuRectForWindow(v47, v40, v17);
    v14 = *GetMonitorWorkRectForWindow(&v48, (__int64)v40, v17);
    v43 = v14;
    MonitorRectForWindow = GetMonitorRectForWindow(&v49, (__int64)v40, v17);
  }
  else
  {
    v51 = *(_OWORD *)GetMonitorMenuRect(v44, a8);
    v14 = *GetMonitorWorkRect(&v45, (__int64)a8);
    v43 = v14;
    MonitorRectForWindow = GetMonitorRect(&v46, (__int64)a8);
  }
  v50 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(&v43, a9) )
  {
    if ( !**a7 || (v18 = **a7, (*v18 & 0x10000000) == 0) )
    {
      v14 = v43;
LABEL_12:
      v38 = v14;
      goto LABEL_13;
    }
  }
  if ( **a7 )
  {
    v19 = ***a7 >> 31;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
    if ( CurrentProcessWin32Process )
      v19 = (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) == 0;
    else
      v19 = 0;
  }
  v21 = &v50;
  if ( v19 )
    v21 = &v51;
  v22 = *v21;
  v23 = *a7;
  v38 = v22;
  if ( *v23 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v42 = *a5;
    IntersectRect(&v42, &v42.left, (int *)&v38);
  }
  else
  {
    v42.left = a1;
    v42.top = a2;
    v42.right = a1;
    v42.bottom = a2;
  }
  if ( a1 + a3 > SDWORD2(v38) )
  {
    a1 = DWORD2(v38) - a3;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < (int)v38 )
  {
    a1 = v38;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  v39 = a6 & 8;
  if ( (a6 & 8) != 0 && a1 + a3 > SDWORD2(v38) )
    a1 = DWORD2(v38) - a3;
  v24 = HIDWORD(v38);
  if ( a4 + a2 > SHIDWORD(v38) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SDWORD1(v38) || a2 >= SHIDWORD(v38) )
      a2 = HIDWORD(v38) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v24 = HIDWORD(v38);
  }
  if ( a2 < SDWORD1(v38) )
  {
    a2 = DWORD1(v38);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v24 = HIDWORD(v38);
  }
  v25 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a4 + a2 > v24 && (a6 & 0x20000) != 0 )
    a2 = v24 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, a3, a4, &v42, &v41, v40) )
  {
    v26 = a6 & 0x40;
    v27 = v39 != 0;
    v39 = -v39;
    v28 = v27 ? 0 : 2;
    *(unsigned int *)((char *)v52 + (v26 != 0 ? 8 : 0)) = v28;
    *(unsigned int *)((char *)&v52[1] + (v26 != 0 ? 8 : 0)) = 2 - v28;
    *(unsigned int *)((char *)v52 + (v26 == 0 ? 8 : 0)) = v25 != 0 ? 1 : 3;
    v29 = v25 != 0 ? 3 : 1;
    v30 = 0;
    v31 = 0LL;
    *(unsigned int *)((char *)&v52[3] + (-(__int64)((a6 & 0x40) != 0) & 0xFFFFFFFFFFFFFFF8uLL)) = v29;
    while ( !(unsigned int)TryRect(v52[v31], a1, a2, a3, a4, &v42, &v41, v40) )
    {
      ++v30;
      if ( ++v31 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_70;
    v32 = v52[v30];
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 != 1 )
          {
LABEL_70:
            LOWORD(a1) = v41.x;
            LOWORD(a2) = v41.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v35 = **a7;
          v36 = *v35 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v35 = **a7;
          v36 = *v35 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v35 = **a7;
        v36 = *v35 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v35 = **a7;
      v36 = *v35 & 0xF07FFFFF | 0x1000000;
    }
    *v35 = v36;
    goto LABEL_70;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
