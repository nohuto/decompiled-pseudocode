struct tagBITMAPINFOHEADER *__fastcall xxxBMPtoDIB(HBRUSH a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  int v7; // r12d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rax
  _DWORD *v13; // rbx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v17; // r15
  BOOL v18; // edi
  __int64 ThreadWin32Thread; // rax
  int v21; // [rsp+38h] [rbp-39h]
  _BYTE v22[40]; // [rsp+58h] [rbp-19h] BYREF
  int v23[4]; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+D8h] [rbp+67h]

  v25 = (int)a1;
  *(_OWORD *)v23 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, v23) )
  {
    v5 = v24 * WORD1(v24);
    if ( (unsigned __int16)(v24 * WORD1(v24)) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
          {
            v6 = 24;
          }
          else if ( v5 > 0x10u )
          {
            v6 = 24;
            if ( v5 > 0x18u )
              v6 = 32;
          }
          else
          {
            v6 = 16;
          }
        }
        else
        {
          v6 = 8;
        }
      }
    }
    else
    {
      v6 = 1;
    }
    v7 = v23[2];
    *(_QWORD *)&v22[4] = *(_QWORD *)&v23[1];
    v8 = v6 * (unsigned __int64)(unsigned int)v23[1];
    *(_DWORD *)v22 = 40;
    *(_WORD *)&v22[12] = 1;
    *(_WORD *)&v22[14] = v6;
    memset(&v22[16], 0, 24);
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = (unsigned int)v23[2] * (unsigned __int64)(((unsigned int)(v8 + 31) >> 3) & 0x1FFFFFFC);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 0;
        if ( v6 > 8u )
        {
          if ( ((v6 - 16) & 0xFFEF) == 0 )
          {
            v10 = 12;
            *(_DWORD *)&v22[16] = 3;
          }
        }
        else
        {
          v10 = 4 * (1 << v6);
        }
        v11 = v10 + 40 + v9;
        if ( v11 >= v10 + 40 )
        {
          v12 = Win32AllocPoolZInit(v11, 1650684757LL);
          v13 = (_DWORD *)v12;
          if ( v12 )
          {
            if ( a3 )
              *a3 = v11;
            v14 = *(_OWORD *)&v22[16];
            *(_OWORD *)v12 = *(_OWORD *)v22;
            v15 = *(_QWORD *)&v22[32];
            *(_OWORD *)(v12 + 16) = v14;
            *(_QWORD *)(v12 + 32) = v15;
            CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
            if ( CompatibleDC )
            {
              memset(v22, 0, 24);
              v17 = 0LL;
              PushW32ThreadLock((__int64)v13, v22, (__int64)Win32FreePool);
              if ( a2 )
              {
                v17 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette(CompatibleDC);
              }
              v18 = GreGetDIBitsInternal(
                      (int)CompatibleDC,
                      v25,
                      (_DWORD)v13 + *v13 + v10,
                      v7,
                      (__int64)v13 + *v13 + v10,
                      v13,
                      v21,
                      v9,
                      *v13 + v10) != 0;
              if ( v17 )
              {
                SelectPalette((__int64)CompatibleDC, v17, 0);
                xxxRealizePalette(CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = *(_QWORD *)v22;
              if ( v18 )
                return (struct tagBITMAPINFOHEADER *)v13;
            }
            Win32FreePool(v13);
          }
        }
      }
    }
  }
  return 0LL;
}
