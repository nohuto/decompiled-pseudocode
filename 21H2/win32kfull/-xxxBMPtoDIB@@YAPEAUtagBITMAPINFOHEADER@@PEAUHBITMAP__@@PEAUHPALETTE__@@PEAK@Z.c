/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0219890
 * Callers:
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C0219B58 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0027480 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     _SelectPalette @ 0x1C00EE130 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0147070 (xxxRealizePalette.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HSURF a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagBITMAPINFO *v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v20; // r15
  BOOL v21; // edi
  __int64 ThreadWin32Thread; // rax
  _BYTE v24[40]; // [rsp+58h] [rbp-19h] BYREF
  int v25[4]; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v26; // [rsp+90h] [rbp+1Fh]

  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( (unsigned int)GreExtGetObjectW((HBRUSH)a1, 32LL, (char *)v25) )
  {
    v5 = v26 * WORD1(v26);
    if ( (unsigned __int16)(v26 * WORD1(v26)) > 1u )
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
    memset(&v24[16], 0, 24);
    v7 = v25[2];
    *(_QWORD *)&v24[4] = *(_QWORD *)&v25[1];
    v8 = v6 * (unsigned __int64)(unsigned int)v25[1];
    *(_DWORD *)v24 = 40;
    *(_WORD *)&v24[12] = 1;
    *(_WORD *)&v24[14] = v6;
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = (unsigned int)v25[2] * (unsigned __int64)(((unsigned int)(v8 + 31) >> 3) & 0x1FFFFFFC);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 0;
        if ( v6 > 8u )
        {
          if ( ((v6 - 16) & 0xFFEF) == 0 )
          {
            v10 = 12;
            *(_DWORD *)&v24[16] = 3;
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
          v16 = (struct tagBITMAPINFO *)v12;
          if ( v12 )
          {
            if ( a3 )
              *a3 = v11;
            v17 = *(_OWORD *)&v24[16];
            *(_OWORD *)v12 = *(_OWORD *)v24;
            v18 = *(_QWORD *)&v24[32];
            *(_OWORD *)(v12 + 16) = v17;
            *(_QWORD *)(v12 + 32) = v18;
            CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v13, v14, v15);
            if ( CompatibleDC )
            {
              memset(v24, 0, 24);
              v20 = 0LL;
              PushW32ThreadLock((__int64)v16, v24, (__int64)Win32FreePool);
              if ( a2 )
              {
                v20 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette(CompatibleDC);
              }
              v21 = GreGetDIBitsInternal(
                      CompatibleDC,
                      a1,
                      0,
                      v7,
                      (__int64)v16 + v16->bmiHeader.biSize + v10,
                      v16,
                      0,
                      v9,
                      v16->bmiHeader.biSize + v10) != 0;
              if ( v20 )
              {
                SelectPalette((__int64)CompatibleDC, v20, 0);
                xxxRealizePalette(CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = *(_QWORD *)v24;
              if ( v21 )
                return v16;
            }
            Win32FreePool(v16);
          }
        }
      }
    }
  }
  return 0LL;
}
