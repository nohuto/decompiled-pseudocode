/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CFC3C
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006EBC4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0067530 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
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
  __int64 v16; // rax
  __int64 v17; // rbx
  __int128 v18; // [rsp+38h] [rbp-39h] BYREF
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp+7h] BYREF
  __int64 v23; // [rsp+80h] [rbp+Fh]
  __int128 v24; // [rsp+88h] [rbp+17h] BYREF

  v20 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v22) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v23) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v22) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v23) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *GetMonitorRect(&v19, i);
      v6 = *(_QWORD *)(i + 40);
      v18 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v24, (int *)&v22, (int *)&v18) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v24;
        v10 = v8 + DWORD1(v24);
        v11 = v24 + v7;
        DWORD1(v20) = v8 + DWORD1(v24);
        v12 = DWORD2(v24) + v7;
        LODWORD(v20) = v24 + v7;
        DWORD2(v20) = DWORD2(v24) + v7;
        HIDWORD(v20) = v8 + HIDWORD(v24);
        IntersectRect(&v21, (int *)&v20, (int *)&v18);
        v16 = v21 - v20;
        if ( (_QWORD)v21 == (_QWORD)v20 )
          v16 = *((_QWORD *)&v21 + 1) - *((_QWORD *)&v20 + 1);
        if ( v16 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v14, v13, v15);
          GreSetRectRgn(ghrgnInv2, v11, v10, v12, HIDWORD(v20));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v21, DWORD1(v21), DWORD2(v21), HIDWORD(v21));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v17 = v9 - v22;
          if ( (_QWORD)v9 == v22 )
            v17 = *((_QWORD *)&v9 + 1) - v23;
          if ( !v17 )
            return;
        }
      }
    }
  }
}
