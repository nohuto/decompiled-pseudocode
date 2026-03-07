void __fastcall Mesh::CalcVertexAAOffsets(
        const struct Mesh::MeshDesc *a1,
        struct Mesh::VertexAAOffsetDesc *a2,
        char a3)
{
  __int64 *v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  float *v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r10
  __int64 v10; // rax
  float v11; // xmm2_4
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  float v16; // xmm6_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float *v22; // rdx
  float *v23; // rbp
  float v24; // xmm9_4
  int v25; // ecx
  int v26; // ecx
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm5_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float *v32; // r15
  float v33; // xmm4_4
  float *v34; // r14
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  struct Mesh::VertexAAOffsetDesc *v38; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v40; // rdx
  char *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // ecx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // [rsp+20h] [rbp-E8h]
  struct Mesh::VertexAAOffsetDesc *v48; // [rsp+28h] [rbp-E0h] BYREF
  int v49; // [rsp+30h] [rbp-D8h]
  int v50; // [rsp+34h] [rbp-D4h]
  const struct Mesh::MeshDesc *v51; // [rsp+110h] [rbp+8h]
  char v52; // [rsp+120h] [rbp+18h]
  unsigned int v53; // [rsp+128h] [rbp+20h]

  v51 = a1;
  v3 = (__int64 *)((char *)a1 + 8);
  if ( a3 )
  {
    v42 = *v3;
    v43 = *((_QWORD *)a1 + 2);
    v50 = *v3;
    v48 = a2;
    v49 = 32;
    Mesh::CalcEdgeDirections(v43, v42, &v48);
    a1 = v51;
  }
  v5 = *(_DWORD *)v3;
  do
  {
    if ( !v5 )
      break;
    v6 = 32LL * --v5;
    if ( *(float *)((char *)a2 + v6) != 0.0 )
      break;
  }
  while ( *(float *)((char *)a2 + v6 + 4) == 0.0 );
  if ( v5 )
  {
    v7 = (float *)((char *)a2 + 24);
    v8 = 0;
    v9 = 0LL;
    v10 = v5;
    v53 = v5;
    v47 = 0LL;
    while ( 1 )
    {
      v11 = *(v7 - 6);
      v12 = (unsigned int)v10;
      v13 = 32 * v10;
      if ( v11 != 0.0 || *(v7 - 5) != 0.0 )
        break;
      v10 = v53;
LABEL_27:
      a1 = v51;
      v9 += 4LL;
      ++v8;
      v47 = v9;
      v7 += 8;
      if ( v8 > v5 )
        return;
    }
    v14 = *((_QWORD *)a1 + 3);
    v15 = *(_DWORD *)(v14 + v9);
    if ( !v15 && !*(_DWORD *)(v14 + 4 * v12) )
    {
      v38 = (struct Mesh::VertexAAOffsetDesc *)(v7 - 4);
      *(v7 - 3) = 0.0;
      v32 = v7 - 2;
      *(v7 - 4) = 0.0;
      v23 = v7 - 1;
      *(v7 - 2) = 0.0;
      *(v7 - 1) = 0.0;
      v34 = v7 + 1;
      *v7 = 0.0;
      goto LABEL_33;
    }
    v16 = *(float *)((char *)a2 + v13 + 4);
    LODWORD(v17) = LODWORD(v11) ^ _xmm;
    v18 = *(float *)((char *)a2 + v13);
    v19 = *(v7 - 5);
    v20 = (float)(v18 * v19) + (float)(v16 * v17);
    if ( COERCE_FLOAT(LODWORD(v20) & _xmm) < 0.0000011920929 )
    {
      v18 = *(v7 - 5);
      v16 = v17;
      v20 = FLOAT_2_0;
      v21 = v18;
    }
    else
    {
      v21 = v17;
      LODWORD(v17) = LODWORD(v19) ^ _xmm;
    }
    v52 = 0;
    v22 = v7 - 4;
    v48 = (struct Mesh::VertexAAOffsetDesc *)(v7 - 4);
    v23 = v7 - 1;
    v24 = 0.5 / v20;
    v25 = v15 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
        {
          v52 = 1;
          LODWORD(v27) = LODWORD(v18) ^ _xmm;
          LODWORD(v28) = LODWORD(v16) ^ _xmm;
        }
        else
        {
          v16 = 0.0;
          v18 = 0.0;
          v28 = 0.0;
          v27 = 0.0;
        }
LABEL_17:
        *v22 = v27;
        *(v7 - 3) = v28;
        *v23 = v18;
        *v7 = v16;
        switch ( *(_DWORD *)(v14 + 4 * v12) )
        {
          case 1:
            v18 = v18 - v21;
            v16 = v16 - v17;
            v27 = v27 - v21;
            v28 = v28 - v17;
            *v23 = v18;
            *v7 = v16;
            goto LABEL_22;
          case 2:
            v27 = v21 + v27;
            v28 = v17 + v28;
            break;
          case 3:
            v52 = 1;
            v27 = v27 - v21;
            v28 = v28 - v17;
            break;
          default:
LABEL_22:
            v31 = v28 * v24;
            v32 = v7 - 2;
            v33 = v27 * v24;
            *(v7 - 3) = v31;
            *v22 = v33;
            *(v7 - 2) = sqrtf_0((float)(v31 * v31) + (float)(v33 * v33));
            v34 = v7 + 1;
            if ( v52 )
            {
              v35 = v16 * v24;
              v36 = v18 * v24;
              *v7 = v35;
              *v23 = v36;
              v37 = sqrtf_0((float)(v35 * v35) + (float)(v36 * v36));
              v38 = v48;
              v9 = v47;
              *v34 = v37;
              goto LABEL_24;
            }
            v38 = v48;
            v9 = v47;
LABEL_33:
            *v34 = 0.0;
LABEL_24:
            for ( i = v53 + 1; ; i = (unsigned int)(v40 + 1) )
            {
              v40 = i % *v3;
              if ( (_DWORD)v40 == v8 )
                break;
              v41 = (char *)a2 + 32 * (unsigned int)v40;
              *((_QWORD *)v41 + 1) = *(_QWORD *)v38;
              *((float *)v41 + 4) = *v32;
              *(_QWORD *)(v41 + 20) = *(_QWORD *)v23;
              *((float *)v41 + 7) = *v34;
            }
            v10 = v8;
            v53 = v8;
            goto LABEL_27;
        }
        v29 = v21 + v18;
        v30 = v17 + v16;
        *v23 = v29;
        v18 = v29;
        *v7 = v30;
        v16 = v30;
        goto LABEL_22;
      }
    }
    else
    {
      LODWORD(v18) ^= _xmm;
      LODWORD(v16) ^= _xmm;
    }
    v28 = v16;
    v27 = v18;
    goto LABEL_17;
  }
  v44 = 0;
  if ( *v3 )
  {
    v45 = 0LL;
    do
    {
      ++v44;
      v46 = (_QWORD *)((char *)a2 + 32 * v45);
      v46[1] = 0LL;
      v46[2] = 0LL;
      v46[3] = 0LL;
      v45 = v44;
    }
    while ( v44 < (unsigned __int64)*v3 );
  }
}
