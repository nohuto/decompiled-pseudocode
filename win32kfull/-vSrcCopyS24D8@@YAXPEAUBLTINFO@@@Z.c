void __fastcall vSrcCopyS24D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  struct BLTINFO *v2; // r14
  int v3; // esi
  _BYTE *v4; // r13
  unsigned __int8 *v5; // rbx
  struct _XLATEOBJ *v6; // rcx
  unsigned int v7; // edi
  int v8; // ebp
  unsigned int v9; // edi
  _BYTE *v10; // r12
  unsigned __int8 *v11; // r15
  int v12; // edi
  unsigned int v13; // r13d
  int v14; // esi
  int v15; // edi
  unsigned __int8 v16; // al
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int8 *v20; // r15
  int v21; // ebx
  int v22; // [rsp+24h] [rbp-74h]
  unsigned __int8 *v23; // [rsp+28h] [rbp-70h]
  struct _XLATEOBJ *v24; // [rsp+30h] [rbp-68h]
  unsigned __int8 *Xlate555; // [rsp+38h] [rbp-60h]
  _BYTE *v26; // [rsp+40h] [rbp-58h]
  unsigned int v28; // [rsp+A8h] [rbp+10h]
  int v29; // [rsp+B0h] [rbp+18h]
  int v30; // [rsp+B8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = a1;
  v3 = v1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v30 = *((_DWORD *)a1 + 8);
  v26 = v4;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v6 = *(struct _XLATEOBJ **)a1;
  v23 = v5;
  if ( (-(int)v4 & 3u) <= v1 )
    v3 = -(int)v4 & 3;
  v24 = v6;
  v29 = v3;
  v7 = v1 - v3;
  v8 = (v1 - v3) & 3;
  v9 = v7 >> 2;
  v28 = v9;
  v22 = v8;
  Xlate555 = XLATEOBJ_pGetXlate555(v6);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v10 = v4;
      v11 = v5;
      if ( v3 )
      {
        v12 = v3;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v24, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v11 += 3;
          ++v10;
          --v12;
        }
        while ( v12 );
        v2 = a1;
        v5 = v23;
        v9 = v28;
      }
      if ( v9 )
      {
        v13 = v9;
        do
        {
          v14 = XLATEOBJ_RGB32ToPalSurf(v24, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v15 = XLATEOBJ_RGB32ToPalSurf(v24, Xlate555, v11[5] | ((v11[4] | (v11[3] << 8)) << 8));
          v16 = XLATEOBJ_RGB32ToPalSurf(v24, Xlate555, v11[8] | ((v11[7] | (v11[6] << 8)) << 8));
          v17 = v11[10];
          v18 = v11[9];
          v19 = v11[11];
          v11 += 12;
          *(_DWORD *)v10 = v14 | ((v15 | ((v16 | (XLATEOBJ_RGB32ToPalSurf(
                                                    v24,
                                                    Xlate555,
                                                    v19 | ((v17 | (v18 << 8)) << 8)) << 8)) << 8)) << 8);
          v10 += 4;
          --v13;
        }
        while ( v13 );
        v2 = a1;
        v8 = v22;
        v4 = v26;
        v5 = v23;
        v9 = v28;
        v3 = v29;
      }
      if ( v8 )
      {
        v20 = v11 + 2;
        v21 = v8;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v24, Xlate555, *v20 | ((*(v20 - 1) | (*(v20 - 2) << 8)) << 8));
          v20 += 3;
          ++v10;
          --v21;
        }
        while ( v21 );
        v5 = v23;
        v9 = v28;
        v3 = v29;
      }
      if ( !--v30 )
        break;
      v5 += *((int *)v2 + 10);
      v4 += *((int *)v2 + 11);
      v23 = v5;
      v26 = v4;
    }
  }
}
