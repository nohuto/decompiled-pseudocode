void __fastcall vFillGRectDIB16Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // rbp
  int v3; // edx
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r13
  char v22; // al
  _WORD *v23; // rbp
  int v24; // ecx
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-C8h]
  __int64 v27; // [rsp+28h] [rbp-C0h]
  __int64 v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  __int64 v30; // [rsp+40h] [rbp-A8h]
  __int64 v31; // [rsp+48h] [rbp-A0h]
  __int64 v32; // [rsp+50h] [rbp-98h]
  __int64 v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h]
  __int64 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-68h]
  __int64 v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h]
  int v39; // [rsp+F0h] [rbp+8h]
  int v41; // [rsp+100h] [rbp+18h]
  __int64 v42; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v42 = *((_QWORD *)v2 + 14);
  v26 = *((_QWORD *)v2 + 15);
  v27 = *((_QWORD *)v2 + 16);
  v34 = *((_QWORD *)v2 + 21);
  v10 = *((int *)v2 + 45);
  v31 = v9;
  v35 = v4;
  v36 = v5;
  v37 = *((_QWORD *)v2 + 12);
  v28 = v6;
  v29 = v7;
  v30 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v28 = v6;
    v29 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v30 = v8;
  }
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v11 = v3 + *((_DWORD *)v2 + 37);
    v38 = *((int *)a1 + 22);
    v12 = *((_QWORD *)v2 + 14);
    v13 = *((_QWORD *)v2 + 15);
    v32 = *((unsigned int *)v2 + 11);
    v14 = *((_QWORD *)v2 + 16);
    v41 = v11;
    do
    {
      v15 = v6;
      v16 = v7;
      v17 = v8;
      v33 = 0x1C0000000LL + 16LL * (v11 & 3) + 3323776;
      v18 = *((int *)v2 + 44);
      if ( (_DWORD)v18 )
      {
        v15 = v6 + v12 * v18;
        v16 = v7 + v13 * v18;
        v17 = v8 + v14 * v18;
      }
      v19 = *((int *)v2 + 8);
      v39 = v19 + *((_DWORD *)v2 + 36);
      v20 = v9 + 2 * v19;
      if ( v20 < v20 + 2LL * *((int *)v2 + 10) )
      {
        v21 = v20 + 2LL * *((int *)v2 + 10);
        v22 = v39;
        v23 = (_WORD *)v20;
        do
        {
          v24 = *(_DWORD *)(v33 + 4LL * (v22 & 3));
          *v23 = XEPALOBJ::ulDispatchGFPEFunction(
                   v34,
                   *(unsigned int *)(*(_QWORD *)v34 + 100LL),
                   8
                 * (byte_1C032B0C0[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v15) >> 3)) >> 16] | ((byte_1C032B0C0[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v16) >> 3)) >> 16] | (byte_1C032B0C0[(unsigned __int64)(unsigned int)(v24 + (HIDWORD(v17) >> 3)) >> 16] << 8)) << 8)));
          v15 += v42;
          v16 += v26;
          v22 = v39 + 1;
          v17 += v27;
          ++v23;
          ++v39;
        }
        while ( (unsigned __int64)v23 < v21 );
        v2 = a2;
        v6 = v28;
        v7 = v29;
        v8 = v30;
        v9 = v31;
        v4 = v35;
        v5 = v36;
        v12 = v42;
        v13 = v26;
        v14 = v27;
      }
      v8 += v37;
      LOBYTE(v11) = v41 + 1;
      v9 += v38;
      v6 += v4;
      v7 += v5;
      v28 = v6;
      v25 = v32-- == 1;
      v29 = v7;
      v30 = v8;
      ++v41;
      v31 = v9;
    }
    while ( !v25 );
  }
}
