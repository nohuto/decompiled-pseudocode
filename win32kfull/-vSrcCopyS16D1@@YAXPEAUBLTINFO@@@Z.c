/*
 * XREFs of ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02EAF50
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D1(struct BLTINFO *a1)
{
  __int64 v1; // rdx
  int *v2; // rsi
  char v3; // di
  int v4; // r8d
  _BYTE *v5; // r14
  int v6; // r13d
  __int64 v7; // r12
  int v8; // ebx
  _BYTE *v9; // r15
  unsigned __int16 *v10; // rbp
  ULONG v11; // edx
  int v12; // ebx
  bool v13; // zf
  int v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp+20h]

  v1 = *((int *)a1 + 14);
  v2 = (int *)a1;
  v3 = 0;
  v4 = v1 + *((_DWORD *)a1 + 7);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v1 >> 3));
  v6 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v15 = v4;
  v16 = v6;
  v7 = *((_QWORD *)a1 + 1) + 2LL * *((int *)a1 + 12);
  while ( 1 )
  {
    v8 = v2[14];
    v9 = v5;
    v10 = (unsigned __int16 *)v7;
    if ( (v8 & 7) != 0 )
      v3 = *v5 >> (8 - (v8 & 7));
    if ( v8 != v4 )
    {
      do
      {
        v11 = *v10++;
        v3 *= 2;
        if ( XLATEOBJ_iXlate(pxlo, v11) )
          v3 |= 1u;
        if ( (++v8 & 7) == 0 )
          *v9++ = v3;
      }
      while ( v8 != v15 );
      v2 = (int *)a1;
      v6 = v16;
      v4 = v15;
    }
    v12 = v8 & 7;
    if ( v12 )
    {
      v3 <<= 8 - v12;
      *v9 = (255 >> v12) & *v9 | v3 & ~(255 >> v12);
    }
    v13 = v6-- == 1;
    v16 = v6;
    if ( v13 )
      break;
    v7 += v2[10];
    v5 += v2[11];
  }
}
