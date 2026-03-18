/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CC668
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
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
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int128 v16; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v17[16]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+58h] [rbp-19h] BYREF
  __int128 v19; // [rsp+68h] [rbp-9h] BYREF
  __int64 v20; // [rsp+78h] [rbp+7h] BYREF
  __int64 v21; // [rsp+80h] [rbp+Fh]
  __int128 v22; // [rsp+88h] [rbp+17h] BYREF

  v18 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v20) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v21) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v20) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v21) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *(_OWORD *)GetMonitorRect((__int64)v17, i);
      v6 = *(_QWORD *)(i + 40);
      v16 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v22, (int *)&v20, (int *)&v16) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v22;
        v10 = v8 + DWORD1(v22);
        v11 = v22 + v7;
        DWORD1(v18) = v8 + DWORD1(v22);
        v12 = DWORD2(v22) + v7;
        LODWORD(v18) = v22 + v7;
        DWORD2(v18) = DWORD2(v22) + v7;
        HIDWORD(v18) = v8 + HIDWORD(v22);
        IntersectRect(&v19, (int *)&v18, (int *)&v16);
        v14 = v19 - v18;
        if ( (_QWORD)v19 == (_QWORD)v18 )
          v14 = *((_QWORD *)&v19 + 1) - *((_QWORD *)&v18 + 1);
        if ( v14 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v13);
          GreSetRectRgn(ghrgnInv2, v11, v10, v12, HIDWORD(v18));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v19, DWORD1(v19), DWORD2(v19), HIDWORD(v19));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v15 = v9 - v20;
          if ( (_QWORD)v9 == v20 )
            v15 = *((_QWORD *)&v9 + 1) - v21;
          if ( !v15 )
            return;
        }
      }
    }
  }
}
