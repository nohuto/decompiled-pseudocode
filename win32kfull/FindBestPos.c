__int64 __fastcall FindBestPos(
        LONG a1,
        LONG a2,
        int a3,
        int a4,
        struct tagRECT *a5,
        unsigned int a6,
        unsigned int ***a7,
        struct tagMONITOR *a8,
        unsigned __int64 a9)
{
  int v10; // r14d
  unsigned int **v12; // rax
  __m128i v14; // xmm6
  __m128i *MonitorRectForWindow; // rax
  unsigned int *v16; // rcx
  const struct tagWND *v17; // r14
  unsigned int *v18; // rcx
  BOOL v19; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct tagRECT *v21; // rax
  struct tagRECT v22; // xmm0
  unsigned int **v23; // rax
  int v24; // ecx
  int v25; // r14d
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // r15
  int v29; // r14d
  int v30; // r14d
  int v31; // r14d
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  struct tagMONITOR *v35[2]; // [rsp+48h] [rbp-A1h] BYREF
  int v36[2]; // [rsp+58h] [rbp-91h]
  struct tagPOINT v37; // [rsp+60h] [rbp-89h] BYREF
  struct tagRECT v38; // [rsp+68h] [rbp-81h] BYREF
  struct tagMONITOR *v39; // [rsp+78h] [rbp-71h]
  struct tagRECT v40; // [rsp+80h] [rbp-69h] BYREF
  __int64 v41; // [rsp+90h] [rbp-59h] BYREF
  __m128i v42; // [rsp+A0h] [rbp-49h] BYREF
  struct tagRECT v43; // [rsp+B0h] [rbp-39h] BYREF
  unsigned int v44[2]; // [rsp+C0h] [rbp-29h]
  _BYTE v45[4]; // [rsp+C8h] [rbp-21h]
  _BYTE v46[4]; // [rsp+CCh] [rbp-1Dh]

  v37 = 0LL;
  v10 = a3;
  v12 = *a7;
  v36[0] = a3;
  v39 = a8;
  v38 = 0LL;
  if ( *v12 )
  {
    v16 = **a7;
    if ( *((_QWORD *)v16 + 7) )
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 7);
    else
      v17 = (const struct tagWND *)*((_QWORD *)v16 + 2);
    v43 = *(struct tagRECT *)GetMonitorMenuRectForWindow(&v40);
    v14 = *GetMonitorWorkRectForWindow(&v42, (__int64)a8, v17);
    *(__m128i *)v35 = v14;
    MonitorRectForWindow = (__m128i *)GetMonitorRectForWindow(&v41, (__int64)a8, v17);
    v10 = v36[0];
  }
  else
  {
    v43 = *(struct tagRECT *)GetMonitorMenuRect(&v43, a8);
    v14 = *GetMonitorWorkRect(&v42, (__int64)a8);
    *(__m128i *)v35 = v14;
    MonitorRectForWindow = (__m128i *)GetMonitorRect((__int64 *)&v40.left, (__int64)a8);
  }
  v42 = *MonitorRectForWindow;
  if ( (a6 & 0x10000) != 0 )
    goto LABEL_12;
  if ( PtInRect(v35, a9) )
  {
    if ( !**a7 || (v18 = **a7, (*v18 & 0x10000000) == 0) )
    {
      v14 = *(__m128i *)v35;
LABEL_12:
      *(__m128i *)v35 = v14;
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
    v19 = CurrentProcessWin32Process
       && *(_QWORD *)CurrentProcessWin32Process
       && (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) == 0;
  }
  v21 = (struct tagRECT *)&v42;
  if ( v19 )
    v21 = &v43;
  v22 = *v21;
  v23 = *a7;
  *(struct tagRECT *)v35 = v22;
  if ( *v23 )
    ***a7 |= 0x10000000u;
LABEL_13:
  if ( a5 )
  {
    v38 = *a5;
    IntersectRect(&v38, &v38.left, (int *)v35);
  }
  else
  {
    v38.left = a1;
    v38.top = a2;
    v38.right = a1;
    v38.bottom = a2;
  }
  if ( v10 + a1 > SLODWORD(v35[1]) )
  {
    a1 = LODWORD(v35[1]) - v10;
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0xFF7FFFFF) & 0x1800000;
    }
  }
  if ( a1 < SLODWORD(v35[0]) )
  {
    a1 = (LONG)v35[0];
    if ( **a7 )
    {
      if ( (***a7 & 0x1800000) != 0 )
        ***a7 ^= (***a7 ^ 0x800000) & 0x1800000;
    }
  }
  if ( (a6 & 8) != 0 && v10 + a1 > SLODWORD(v35[1]) )
    a1 = LODWORD(v35[1]) - v10;
  v24 = HIDWORD(v35[1]);
  if ( a4 + a2 > SHIDWORD(v35[1]) )
  {
    if ( (a6 & 0x20010) != 0 || a2 - a4 < SHIDWORD(v35[0]) || a2 >= SHIDWORD(v35[1]) )
      a2 = HIDWORD(v35[1]) - a4;
    else
      a2 -= a4;
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0xFDFFFFFF) & 0x6000000;
    v24 = HIDWORD(v35[1]);
  }
  if ( a2 < SHIDWORD(v35[0]) )
  {
    a2 = HIDWORD(v35[0]);
    if ( **a7 && (***a7 & 0x6000000) != 0 )
      ***a7 ^= (***a7 ^ 0x2000000) & 0x6000000;
    v24 = HIDWORD(v35[1]);
  }
  v25 = a6 & 0x20;
  if ( (a6 & 0x20) != 0 && a4 + a2 > v24 && (a6 & 0x20000) != 0 )
    a2 = v24 - a4;
  if ( !(unsigned int)TryRect(4, a1, a2, v36[0], a4, &v38, &v37, v39) )
  {
    v26 = (a6 >> 5) & 2;
    v27 = (a6 & 8) == 0 ? 2 : 0;
    v44[v26 + 1] = 2 - v27;
    v44[v26] = v27;
    *(_DWORD *)&v45[-4 * v26] = v25 != 0 ? 1 : 3;
    v28 = 0LL;
    *(_DWORD *)&v46[-4 * v26] = v25 != 0 ? 3 : 1;
    while ( 1 )
    {
      v29 = v44[v28];
      if ( (unsigned int)TryRect(v29, a1, a2, v36[0], a4, &v38, &v37, v39) )
        break;
      if ( ++v28 >= 4 )
        return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
    }
    if ( !**a7 )
      goto LABEL_71;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
          {
LABEL_71:
            LOWORD(a1) = v37.x;
            LOWORD(a2) = v37.y;
            return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
          }
          v32 = **a7;
          v33 = *v32 & 0xF07FFFFF | 0x2000000;
        }
        else
        {
          v32 = **a7;
          v33 = *v32 & 0xF07FFFFF | 0x800000;
        }
      }
      else
      {
        v32 = **a7;
        v33 = *v32 & 0xF07FFFFF | 0x4000000;
      }
    }
    else
    {
      v32 = **a7;
      v33 = *v32 & 0xF07FFFFF | 0x1000000;
    }
    *v32 = v33;
    goto LABEL_71;
  }
  return (unsigned __int16)a1 | ((unsigned __int16)a2 << 16);
}
