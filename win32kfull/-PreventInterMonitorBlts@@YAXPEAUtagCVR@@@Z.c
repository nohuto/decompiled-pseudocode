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
  __int64 v15; // rax
  __int64 v16; // rbx
  __int128 v17; // [rsp+38h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h] BYREF
  __int128 v20; // [rsp+68h] [rbp-9h] BYREF
  __int64 v21; // [rsp+78h] [rbp+7h] BYREF
  __int64 v22; // [rsp+80h] [rbp+Fh]
  __int128 v23; // [rsp+88h] [rbp+17h] BYREF

  v19 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 18);
    v3 = *((_DWORD *)a1 + 19);
    LODWORD(v21) = *((_DWORD *)a1 + 14) - v2;
    LODWORD(v22) = *((_DWORD *)a1 + 16) - v2;
    HIDWORD(v21) = *((_DWORD *)a1 + 15) - v3;
    HIDWORD(v22) = *((_DWORD *)a1 + 17) - v3;
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      v5 = *(_OWORD *)GetMonitorRect(&v18, i);
      v6 = *(_QWORD *)(i + 40);
      v17 = v5;
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v23, (int *)&v21, (int *)&v17) )
      {
        v7 = *((_DWORD *)a1 + 18);
        v8 = *((_DWORD *)a1 + 19);
        v9 = v23;
        v10 = v8 + DWORD1(v23);
        v11 = v23 + v7;
        DWORD1(v19) = v8 + DWORD1(v23);
        v12 = DWORD2(v23) + v7;
        LODWORD(v19) = v23 + v7;
        DWORD2(v19) = DWORD2(v23) + v7;
        HIDWORD(v19) = v8 + HIDWORD(v23);
        IntersectRect(&v20, (int *)&v19, (int *)&v17);
        v15 = v20 - v19;
        if ( (_QWORD)v20 == (_QWORD)v19 )
          v15 = *((_QWORD *)&v20 + 1) - *((_QWORD *)&v19 + 1);
        if ( v15 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v14, v13);
          GreSetRectRgn(ghrgnInv2, v11, v10, v12, HIDWORD(v19));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v20, DWORD1(v20), DWORD2(v20), HIDWORD(v20));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v16 = v9 - v21;
          if ( (_QWORD)v9 == v21 )
            v16 = *((_QWORD *)&v9 + 1) - v22;
          if ( !v16 )
            return;
        }
      }
    }
  }
}
