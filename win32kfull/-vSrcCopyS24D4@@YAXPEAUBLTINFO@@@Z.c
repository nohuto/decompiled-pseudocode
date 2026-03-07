void __fastcall vSrcCopyS24D4(struct BLTINFO *a1)
{
  int *v1; // r14
  __int64 v2; // r12
  XLATEOBJ *v3; // r13
  _BYTE *v4; // r12
  unsigned __int8 *v5; // rbp
  ULONG v6; // edi
  char v7; // r8
  int v8; // esi
  _BYTE *v9; // r15
  unsigned __int8 *v10; // rbx
  ULONG v11; // edx
  int v12; // eax
  int v13; // r13d
  ULONG v14; // edx
  char v15; // r14
  ULONG v16; // edx
  ULONG v17; // edx
  unsigned __int8 *v18; // [rsp+20h] [rbp-58h]
  _BYTE *v19; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+90h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((int *)a1 + 14);
  v3 = *(XLATEOBJ **)a1;
  v21 = v2 + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 1));
  v19 = v4;
  pxlo = *(XLATEOBJ **)a1;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v22 = *((_DWORD *)a1 + 8);
  v18 = v5;
  v6 = *v5 | (*(unsigned __int16 *)(v5 + 1) << 8);
  v7 = XLATEOBJ_iXlate(*(XLATEOBJ **)a1, v6);
  while ( 1 )
  {
    v8 = v1[14];
    v9 = v4;
    v10 = v5;
    if ( (v8 & 1) != 0 )
    {
      v11 = *v5 | (*(unsigned __int16 *)(v5 + 1) << 8);
      if ( v6 != v11 )
      {
        v6 = *v5 | (*(unsigned __int16 *)(v5 + 1) << 8);
        v7 = XLATEOBJ_iXlate(v3, v11);
      }
      v9 = v4 + 1;
      v10 = v5 + 3;
      *v4 = v7 | *v4 & 0xF0;
      ++v8;
    }
    v12 = v21;
    v13 = v8 + 1;
    if ( v8 + 1 < v21 )
    {
      do
      {
        v14 = *v10 | (*(unsigned __int16 *)(v10 + 1) << 8);
        if ( v6 != v14 )
        {
          v6 = *v10 | (*(unsigned __int16 *)(v10 + 1) << 8);
          v7 = XLATEOBJ_iXlate(pxlo, v14);
        }
        v15 = v7;
        v16 = v10[3] | (*((unsigned __int16 *)v10 + 2) << 8);
        if ( v6 != v16 )
        {
          v6 = v10[3] | (*((unsigned __int16 *)v10 + 2) << 8);
          v7 = XLATEOBJ_iXlate(pxlo, v16);
        }
        v10 += 6;
        v8 += 2;
        *v9 = v7 | (16 * v15);
        v13 += 2;
        ++v9;
      }
      while ( v13 < v21 );
      v5 = v18;
      v4 = v19;
      v1 = (int *)a1;
      v12 = v21;
    }
    if ( v8 < v12 )
    {
      v17 = *v10 | (*(unsigned __int16 *)(v10 + 1) << 8);
      if ( v6 != v17 )
      {
        v6 = *v10 | (*(unsigned __int16 *)(v10 + 1) << 8);
        v7 = XLATEOBJ_iXlate(pxlo, v17);
      }
      *v9 = (16 * v7) | *v9 & 0xF;
    }
    if ( !--v22 )
      break;
    v3 = pxlo;
    v5 += v1[10];
    v4 += v1[11];
    v18 = v5;
    v19 = v4;
  }
}
