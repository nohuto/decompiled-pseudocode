/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A5FF8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // ecx
  int v3; // edx
  __int64 i; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  __int128 v9; // kr00_16
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int128 v19; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v21; // [rsp+58h] [rbp-19h] BYREF
  __int128 v22; // [rsp+68h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp+7h] BYREF
  __int64 v24; // [rsp+80h] [rbp+Fh]
  __int128 v25; // [rsp+88h] [rbp+17h] BYREF

  v21 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v23) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v24) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v23) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v24) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *(_OWORD *)GetMonitorRect((__int64)v20, i);
      v6 = *(_QWORD *)(i + 40);
      v19 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v25, (int *)&v23, (int *)&v19) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v25;
        v10 = v8 + DWORD1(v25);
        v11 = v25 + v7;
        DWORD1(v21) = v8 + DWORD1(v25);
        v12 = DWORD2(v25) + v7;
        LODWORD(v21) = v25 + v7;
        DWORD2(v21) = DWORD2(v25) + v7;
        HIDWORD(v21) = v8 + HIDWORD(v25);
        IntersectRect(&v22, (int *)&v21, (int *)&v19);
        v17 = v22 - v21;
        if ( (_QWORD)v22 == (_QWORD)v21 )
          v17 = *((_QWORD *)&v22 + 1) - *((_QWORD *)&v21 + 1);
        if ( v17 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v14, v13, v15, v16);
          GreSetRectRgn(ghrgnInv2, v11, v10, v12, HIDWORD(v21));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v22, DWORD1(v22), DWORD2(v22), HIDWORD(v22));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v18 = v9 - v23;
          if ( (_QWORD)v9 == v23 )
            v18 = *((_QWORD *)&v9 + 1) - v24;
          if ( !v18 )
            return;
        }
      }
    }
  }
}
