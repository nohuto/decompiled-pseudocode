/*
 * XREFs of ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1C00C4DE0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS32D1(struct BLTINFO *a1)
{
  __int64 v1; // rbx
  char v2; // si
  int v4; // r10d
  int v5; // ebp
  XLATEOBJ *v6; // r14
  __int64 v7; // r9
  _BYTE *v8; // r13
  _BYTE *v9; // r15
  ULONG *v10; // rdi
  int v11; // eax
  ULONG v12; // edx
  bool v13; // zf
  int v14; // ebx
  char v15; // r8
  char v16; // cl
  int v17; // [rsp+60h] [rbp+8h]
  __int64 v18; // [rsp+68h] [rbp+10h]

  v1 = *((int *)a1 + 14);
  v2 = 0;
  v4 = *((_DWORD *)a1 + 8);
  v5 = v1 + *((_DWORD *)a1 + 7);
  v6 = *(XLATEOBJ **)a1;
  v7 = *((_QWORD *)a1 + 1) + 4LL * *((int *)a1 + 12);
  v8 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v1 >> 3));
  v17 = v4;
  while ( 1 )
  {
    v18 = v7;
    v9 = v8;
    v10 = (ULONG *)v7;
    if ( (v1 & 7) != 0 )
      v2 = *v8 >> (8 - (v1 & 7));
    v11 = v1;
    if ( (_DWORD)v1 != v5 )
    {
      do
      {
        v12 = *v10++;
        v2 *= 2;
        if ( XLATEOBJ_iXlate(v6, v12) )
          v2 |= 1u;
        LODWORD(v1) = v1 + 1;
        if ( (v1 & 7) == 0 )
          *v9++ = v2;
      }
      while ( (_DWORD)v1 != v5 );
      v11 = *((_DWORD *)a1 + 14);
      v7 = v18;
      v4 = v17;
    }
    v14 = v1 & 7;
    v13 = v14 == 0;
    v15 = v14;
    v16 = v14;
    LODWORD(v1) = v11;
    if ( !v13 )
    {
      v2 <<= 8 - v15;
      *v9 = (255 >> v16) & *v9 | v2 & ~(255 >> v16);
      LODWORD(v1) = *((_DWORD *)a1 + 14);
    }
    v13 = v4-- == 1;
    v17 = v4;
    if ( v13 )
      break;
    v7 += *((int *)a1 + 10);
    v8 += *((int *)a1 + 11);
  }
}
