void __fastcall vSrcCopyS24D1(struct BLTINFO *a1)
{
  int *v1; // rsi
  char v2; // di
  int v3; // r8d
  _BYTE *v4; // r14
  int v5; // r13d
  __int64 v6; // rbp
  int v7; // ebx
  _BYTE *v8; // r15
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // edx
  int v12; // ebx
  bool v13; // zf
  int v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp+20h]

  v1 = (int *)a1;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 14) + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  v5 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v15 = v3;
  v16 = v5;
  v6 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  while ( 1 )
  {
    v7 = v1[14];
    v8 = v4;
    if ( (v7 & 7) != 0 )
      v2 = *v4 >> (8 - (v7 & 7));
    if ( v7 != v3 )
    {
      v9 = (unsigned __int8 *)(v6 + 1);
      do
      {
        v10 = *v9;
        v11 = v9[1];
        v9 += 3;
        v2 *= 2;
        if ( XLATEOBJ_iXlate(pxlo, *(v9 - 4) | ((v10 | (v11 << 8)) << 8)) )
          v2 |= 1u;
        if ( (++v7 & 7) == 0 )
          *v8++ = v2;
      }
      while ( v7 != v15 );
      v1 = (int *)a1;
      v5 = v16;
      v3 = v15;
    }
    v12 = v7 & 7;
    if ( v12 )
    {
      v2 <<= 8 - v12;
      *v8 = (255 >> v12) & *v8 | v2 & ~(255 >> v12);
    }
    v13 = v5-- == 1;
    v16 = v5;
    if ( v13 )
      break;
    v6 += v1[10];
    v4 += v1[11];
  }
}
