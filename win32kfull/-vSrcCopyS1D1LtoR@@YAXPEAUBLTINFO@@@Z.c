/*
 * XREFs of ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00C4950
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vSrcCopyS1D1LtoR(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r13
  int v2; // r8d
  unsigned int v3; // edi
  int v4; // r15d
  int v5; // edx
  unsigned int v6; // r14d
  char v7; // r11
  int v8; // esi
  int v9; // r10d
  int v10; // ebp
  __int64 v11; // rcx
  int v12; // esi
  _BYTE *v13; // r12
  _BYTE *v14; // rdi
  char *v15; // rbx
  int v16; // ebp
  int v17; // r9d
  int v18; // r10d
  _QWORD *v19; // rcx
  int *v20; // r8
  _QWORD *v21; // rdi
  int *v22; // r9
  _QWORD *v23; // r15
  int v24; // ebx
  int v25; // r8d
  int v26; // eax
  int v27; // ebp
  int v28; // edx
  char v29; // bl
  int v30; // esi
  int v31; // r15d
  int v32; // r10d
  __int64 v33; // rax
  int v34; // r9d
  unsigned int v35; // edx
  unsigned __int8 *v36; // r8
  unsigned int v37; // ecx
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // rbp
  char *v41; // r9
  char v42; // r8
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  char v45; // dl
  unsigned __int8 v46; // al
  __int64 v47; // rax
  __int64 v48; // rbp
  char *v49; // r9
  char v50; // r8
  unsigned __int8 v51; // dl
  char v52; // al
  unsigned __int8 v53; // r15
  __int64 v54; // rax
  int i; // ecx
  char v56; // al
  int v57; // eax
  _BYTE *v58; // r9
  unsigned __int8 *v59; // rsi
  int v60; // edi
  char v61; // bp
  unsigned __int8 v62; // dl
  unsigned __int8 v63; // al
  unsigned __int8 v64; // dl
  unsigned __int8 v65; // dl
  unsigned __int8 v66; // cl
  char v67; // bp
  unsigned __int8 v68; // dl
  unsigned __int8 v69; // al
  unsigned __int8 v70; // dl
  unsigned __int8 v71; // dl
  char v72; // cl
  char v73; // bl
  int v74; // ebp
  char v75; // r10
  unsigned __int8 v76; // dl
  char v77; // dl
  unsigned __int8 v78; // al
  char v79; // cl
  int v80; // [rsp+20h] [rbp-88h]
  int v81; // [rsp+24h] [rbp-84h]
  char v82; // [rsp+28h] [rbp-80h]
  char v83; // [rsp+2Ch] [rbp-7Ch]
  int *v84; // [rsp+30h] [rbp-78h]
  char *v85; // [rsp+38h] [rbp-70h]
  int v86; // [rsp+40h] [rbp-68h]
  __int64 v87; // [rsp+48h] [rbp-60h]
  __int64 v88; // [rsp+48h] [rbp-60h]
  __int64 v89; // [rsp+48h] [rbp-60h]
  unsigned int v90; // [rsp+54h] [rbp-54h]
  char v91; // [rsp+58h] [rbp-50h]
  char v93; // [rsp+B8h] [rbp+10h]
  char v94; // [rsp+C0h] [rbp+18h]
  int v95; // [rsp+C8h] [rbp+20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 12);
  v3 = v2 & 7;
  v86 = 1;
  v90 = v3;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 4LL) | (2 * **(_DWORD **)(*(_QWORD *)a1 + 16LL));
  v5 = *((_DWORD *)a1 + 14);
  v6 = v5 & 7;
  v81 = v4;
  v7 = (v2 & 7) - (*((_BYTE *)a1 + 56) & 7);
  if ( v3 < v6 )
    v7 += 8;
  v8 = *((_DWORD *)a1 + 7);
  v9 = *((_DWORD *)a1 + 11);
  v83 = 8 - v7;
  v10 = v5 + v8;
  v95 = *((_DWORD *)a1 + 10);
  v93 = v7;
  v91 = v8;
  v82 = v5 + v8;
  v80 = v9;
  if ( (((v5 + v8) ^ v5) & 0xFFFFFFF8) != 0 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = *((_DWORD *)v1 + 8);
    v13 = (_BYTE *)(v11 + ((__int64)v10 >> 3));
    v14 = (_BYTE *)(v11 + ((__int64)(v5 + 7) >> 3));
    v15 = (char *)(*((_QWORD *)v1 + 1) + ((__int64)(int)(v2 + (-v6 & 7)) >> 3));
    v94 = 1;
    v16 = (v10 >> 3) - ((v5 + 7) >> 3);
    v85 = (char *)v1 + 8;
    v17 = v9 - v16;
    v84 = (int *)((char *)v1 + 32);
    v18 = v95 - v16;
    if ( v7 )
    {
      if ( v4 && v4 != 3 )
      {
        v20 = (int *)((char *)v1 + 32);
        v19 = (_QWORD *)((char *)v1 + 16);
        if ( v4 == 1 )
        {
          if ( v12 )
          {
            v39 = v16;
            v87 = v16;
            v40 = v17;
            do
            {
              v41 = &v15[v39];
              --v12;
              v42 = *v15 << v7;
              if ( v15 != &v15[v39] )
              {
                do
                {
                  v43 = *++v15;
                  *v14++ = v42 | (v43 >> v83);
                  v42 = v43 << v7;
                }
                while ( v15 != v41 );
                v39 = v87;
              }
              v14 += v40;
              v15 += v18;
            }
            while ( v12 );
          }
          v22 = (int *)((char *)v1 + 32);
          v21 = (_QWORD *)((char *)v1 + 8);
          v84 = (int *)((char *)v1 + 32);
          v85 = (char *)v1 + 8;
          v23 = (_QWORD *)((char *)v1 + 16);
          goto LABEL_9;
        }
        if ( v4 == 2 )
        {
          if ( v12 )
          {
            v47 = v16;
            v88 = v16;
            v48 = v17;
            do
            {
              v49 = &v15[v47];
              --v12;
              v50 = *v15 << v7;
              if ( v15 != &v15[v47] )
              {
                do
                {
                  v51 = *++v15;
                  v52 = v50 | (v51 >> v83);
                  v50 = v51 << v7;
                  *v14++ = ~v52;
                }
                while ( v15 != v49 );
                v47 = v88;
              }
              v14 += v48;
              v15 += v18;
            }
            while ( v12 );
          }
          v23 = (_QWORD *)((char *)v1 + 16);
          v21 = (_QWORD *)((char *)v1 + 8);
          v22 = (int *)((char *)v1 + 32);
          goto LABEL_9;
        }
        goto LABEL_58;
      }
    }
    else if ( v4 == 1 )
    {
      v19 = (_QWORD *)((char *)v1 + 16);
      v20 = (int *)((char *)v1 + 32);
      if ( v12 )
      {
        do
        {
          memmove(v14, v15, v16);
          v14 += v80;
          v15 += v95;
          --v12;
        }
        while ( v12 );
        v21 = (_QWORD *)((char *)v1 + 8);
        v7 = v93;
        v22 = (int *)((char *)v1 + 32);
        v85 = (char *)v1 + 8;
        v23 = (_QWORD *)((char *)v1 + 16);
        v84 = (int *)((char *)v1 + 32);
        goto LABEL_9;
      }
LABEL_58:
      v22 = v20;
      v84 = v20;
      v21 = (_QWORD *)((char *)v1 + 8);
      v85 = (char *)v1 + 8;
      v23 = v19;
LABEL_9:
      v24 = 255 >> v6;
      v25 = v82 & 7;
      v26 = 0;
      goto LABEL_10;
    }
    v19 = (_QWORD *)((char *)v1 + 16);
    v20 = (int *)((char *)v1 + 32);
    switch ( v4 )
    {
      case 0:
        goto LABEL_46;
      case 2:
        for ( ; v12; v15 += v18 )
        {
          --v12;
          for ( i = v16; i; --i )
          {
            v56 = *v15++;
            *v14++ = ~v56;
          }
          v14 += v17;
        }
        v21 = (_QWORD *)((char *)v1 + 8);
        v22 = (int *)((char *)v1 + 32);
        v85 = (char *)v1 + 8;
        v84 = (int *)((char *)v1 + 32);
        v23 = (_QWORD *)((char *)v1 + 16);
        goto LABEL_9;
      case 3:
LABEL_46:
        v53 = -(v4 != 0);
        if ( v12 )
        {
          v54 = v17;
          v89 = v17;
          do
          {
            --v12;
            if ( v16 )
            {
              memset_0(v14, v53, (unsigned int)v16);
              v54 = v89;
              v14 += (unsigned int)v16;
            }
            v14 += v54;
          }
          while ( v12 );
          v7 = v93;
        }
        v21 = (_QWORD *)((char *)v1 + 8);
        v22 = (int *)((char *)v1 + 32);
        v85 = (char *)v1 + 8;
        v84 = (int *)((char *)v1 + 32);
        v23 = (_QWORD *)((char *)v1 + 16);
        goto LABEL_9;
    }
    goto LABEL_58;
  }
  v23 = (_QWORD *)((char *)a1 + 16);
  v25 = v10 & 7;
  v94 = 0;
  v13 = 0LL;
  v22 = (int *)((char *)a1 + 32);
  LOBYTE(v24) = (-1 << (8 - v25)) & (255 >> v6);
  v57 = v8 + v3;
  v21 = (_QWORD *)((char *)a1 + 8);
  if ( v57 <= 8 )
  {
    v86 = 0;
    v94 = 0;
  }
  else
  {
    v86 = 1;
    v23 = (_QWORD *)((char *)a1 + 16);
  }
  v26 = 1;
  v85 = (char *)a1 + 8;
  v84 = (int *)((char *)a1 + 32);
LABEL_10:
  v27 = v81;
  v28 = v25;
  if ( v6 | v26 )
  {
    v58 = (_BYTE *)(*v23 + ((__int64)*((int *)v1 + 14) >> 3));
    v59 = (unsigned __int8 *)(*v21 + ((__int64)*((int *)v1 + 12) >> 3));
    v60 = *v84;
    switch ( v81 )
    {
      case 0:
        if ( v60 )
        {
          v30 = v80;
          v73 = ~(_BYTE)v24;
          do
          {
            *v58 &= v73;
            v58 += v80;
            --v60;
          }
          while ( v60 );
          v29 = v82;
          v22 = v84;
          v28 = v82 & 7;
          v31 = v95;
          goto LABEL_108;
        }
        goto LABEL_105;
      case 1:
        if ( !v60 )
          goto LABEL_80;
        if ( v90 <= v6 )
        {
          v31 = v95;
          if ( v90 >= v6 )
          {
            do
            {
              v72 = *v59 & v24 | ~(_BYTE)v24 & *v58;
              v59 += v95;
              *v58 = v72;
              v58 += v80;
              --v60;
            }
            while ( v60 );
            v27 = v81;
            goto LABEL_88;
          }
          do
          {
            v71 = *v59;
            v59 += v95;
            *v58 = ~(_BYTE)v24 & *v58 | v24 & (v71 >> v83);
            v58 += v80;
            --v60;
          }
          while ( v60 );
          goto LABEL_78;
        }
        v67 = ~(_BYTE)v24;
        if ( !v86 )
        {
          do
          {
            v70 = *v59;
            v59 += v95;
            *v58 = v67 & *v58 | v24 & (v70 << v7);
            v58 += v80;
            --v60;
          }
          while ( v60 );
          goto LABEL_79;
        }
        do
        {
          v68 = v59[1];
          v69 = *v59;
          v59 += v95;
          *v58 = v67 & *v58 | v24 & ((v69 << v7) | (v68 >> v83));
          v58 += v80;
          --v60;
        }
        while ( v60 );
        break;
      case 2:
        if ( !v60 )
          goto LABEL_80;
        if ( v90 <= v6 )
        {
          v31 = v95;
          if ( v90 >= v6 )
          {
            do
            {
              v66 = *v59;
              v59 += v95;
              *v58 = ~(_BYTE)v24 & *v58 | v24 & ~v66;
              v58 += v80;
              --v60;
            }
            while ( v60 );
            v27 = v81;
            goto LABEL_88;
          }
          do
          {
            v65 = *v59;
            v59 += v95;
            *v58 = ~(_BYTE)v24 & *v58 | v24 & ~(v65 >> v83);
            v58 += v80;
            --v60;
          }
          while ( v60 );
          goto LABEL_78;
        }
        v61 = ~(_BYTE)v24;
        if ( !v86 )
        {
          do
          {
            v64 = *v59;
            v59 += v95;
            *v58 = v61 & *v58 | v24 & ~(v64 << v7);
            v58 += v80;
            --v60;
          }
          while ( v60 );
          goto LABEL_79;
        }
        do
        {
          v62 = v59[1];
          v63 = *v59;
          v59 += v95;
          *v58 = v61 & *v58 | v24 & ~((v63 << v7) | (v62 >> v83));
          v58 += v80;
          --v60;
        }
        while ( v60 );
        break;
      case 3:
        if ( v60 )
        {
          v30 = v80;
          do
          {
            *v58 |= v24;
            v58 += v80;
            --v60;
          }
          while ( v60 );
        }
        else
        {
          v30 = v80;
        }
        v22 = v84;
        goto LABEL_106;
      default:
LABEL_105:
        v30 = v80;
        v22 = v84;
LABEL_106:
        v31 = v95;
        goto LABEL_107;
    }
    v7 = v93;
LABEL_78:
    v1 = a1;
LABEL_79:
    v27 = v81;
LABEL_80:
    v31 = v95;
LABEL_88:
    v22 = v84;
    v28 = v25;
    v30 = v80;
LABEL_107:
    v29 = v82;
LABEL_108:
    v21 = v85;
    goto LABEL_12;
  }
  v29 = v82;
  v30 = v80;
  v31 = v95;
LABEL_12:
  v32 = 255 >> ((*((_BYTE *)v1 + 56) + v91) & 7);
  if ( v28 && v94 )
  {
    v33 = *((int *)v1 + 13);
    v34 = *v22;
    v35 = (v29 - 1) & 7;
    v36 = (unsigned __int8 *)(*v21 + ((v33 - 1) >> 3));
    v37 = ((_BYTE)v33 - 1) & 7;
    if ( v27 == 1 )
    {
      if ( v34 )
      {
        if ( v37 > v35 )
        {
          do
          {
            v44 = *v36;
            v36 += v31;
            *v13 = v32 & *v13 | ~(_BYTE)v32 & (v44 << v7);
            v13 += v30;
            --v34;
          }
          while ( v34 );
        }
        else if ( v37 < v35 )
        {
          do
          {
            v45 = *(v36 - 1);
            v46 = *v36;
            v36 += v31;
            *v13 = v32 & *v13 | ~(_BYTE)v32 & ((v46 >> v83) | (v45 << v7));
            v13 += v30;
            --v34;
          }
          while ( v34 );
        }
        else
        {
          do
          {
            v38 = *v36 & ~(_BYTE)v32;
            v36 += v31;
            *v13 = v38 | v32 & *v13;
            v13 += v30;
            --v34;
          }
          while ( v34 );
        }
      }
    }
    else if ( v27 )
    {
      v74 = v27 - 2;
      if ( v74 )
      {
        if ( v74 == 1 && v34 )
        {
          v75 = ~(_BYTE)v32;
          do
          {
            *v13 |= v75;
            v13 += v30;
            --v34;
          }
          while ( v34 );
        }
      }
      else if ( v34 )
      {
        if ( v37 <= v35 )
        {
          if ( v37 >= v35 )
          {
            do
            {
              v79 = ~(*v36 | v32);
              v36 += v31;
              *v13 = v32 & *v13 | v79;
              v13 += v30;
              --v34;
            }
            while ( v34 );
          }
          else
          {
            do
            {
              v77 = *(v36 - 1);
              v78 = *v36;
              v36 += v31;
              *v13 = v32 & *v13 | ~(v32 | (v78 >> v83) | (v77 << v7));
              v13 += v30;
              --v34;
            }
            while ( v34 );
          }
        }
        else
        {
          do
          {
            v76 = *v36;
            v36 += v31;
            *v13 = v32 & *v13 | ~(v32 | (v76 << v7));
            v13 += v30;
            --v34;
          }
          while ( v34 );
        }
      }
    }
    else
    {
      for ( ; v34; --v34 )
      {
        *v13 &= v32;
        v13 += v30;
      }
    }
  }
}
