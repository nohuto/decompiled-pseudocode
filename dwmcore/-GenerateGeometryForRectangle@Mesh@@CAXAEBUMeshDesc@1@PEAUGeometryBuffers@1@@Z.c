/*
 * XREFs of ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180074440
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005D950 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800B0C34 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180075AC0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

void __fastcall Mesh::GenerateGeometryForRectangle(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm2_4
  struct Mesh::GeometryBuffers *v5; // r15
  int v6; // r8d
  char v7; // al
  int v8; // xmm1_4
  int v9; // xmm0_4
  char *v10; // rax
  int v11; // eax
  int v12; // ebx
  int v13; // r14d
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // r8d
  int v18; // esi
  int v19; // esi
  int v20; // edi
  int v21; // edi
  int v22; // ebx
  int v23; // ebx
  int v24; // r14d
  int v25; // r14d
  float *v26; // rcx
  __int64 v27; // r8
  float v28; // xmm3_4
  int *v29; // rdx
  float v30; // xmm2_4
  __int64 v31; // rax
  float v32; // xmm0_4
  int *v33; // rdx
  __int64 v34; // rax
  int v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm1_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  int v50; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v51; // [rsp+28h] [rbp-D8h]
  _DWORD *v52; // [rsp+30h] [rbp-D0h]
  __m128i *p_si128; // [rsp+38h] [rbp-C8h]
  char *v54; // [rsp+40h] [rbp-C0h]
  char *v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+50h] [rbp-B0h]
  char v57; // [rsp+54h] [rbp-ACh]
  char v58; // [rsp+55h] [rbp-ABh]
  char v59[8]; // [rsp+60h] [rbp-A0h] BYREF
  float v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+6Ch] [rbp-94h]
  float v62; // [rsp+74h] [rbp-8Ch]
  float v63; // [rsp+78h] [rbp-88h] BYREF
  float v64; // [rsp+88h] [rbp-78h]
  float v65; // [rsp+8Ch] [rbp-74h]
  float v66; // [rsp+94h] [rbp-6Ch]
  float v67; // [rsp+98h] [rbp-68h]
  float v68; // [rsp+A8h] [rbp-58h]
  float v69; // [rsp+ACh] [rbp-54h]
  float v70; // [rsp+B4h] [rbp-4Ch]
  float v71; // [rsp+B8h] [rbp-48h]
  float v72; // [rsp+C8h] [rbp-38h]
  float v73; // [rsp+CCh] [rbp-34h]
  float v74; // [rsp+D4h] [rbp-2Ch]
  float v75; // [rsp+D8h] [rbp-28h]
  __m128i si128; // [rsp+E0h] [rbp-20h] BYREF
  int v77; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v78[3]; // [rsp+F4h] [rbp-Ch] BYREF
  int v79; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v80[3]; // [rsp+104h] [rbp+4h] BYREF
  _DWORD v81[8]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 4);
  v4 = *((_DWORD *)a1 + 2);
  v5 = a2;
  v6 = *((_DWORD *)a1 + 6);
  v52 = v81;
  v55 = (char *)a1 + 28;
  v56 = *((_DWORD *)a1 + 12);
  v7 = *((_BYTE *)a1 + 53);
  v81[1] = v2;
  v81[2] = v3;
  v81[3] = v2;
  v8 = *((_DWORD *)a1 + 5);
  v81[4] = v3;
  v9 = *(_DWORD *)a1;
  v58 = v7;
  v81[0] = v4;
  v81[5] = v8;
  v81[6] = v4;
  v81[7] = v8;
  v50 = v9;
  v57 = 0;
  v51 = 4LL;
  if ( v6 == 50529027 )
  {
    p_si128 = &si128;
    v10 = (char *)&unk_1802DC1B0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    goto LABEL_4;
  }
  if ( !v6 )
  {
    p_si128 = &si128;
    v10 = (char *)&unk_1803392F0;
    si128 = 0LL;
    goto LABEL_4;
  }
  v11 = v6 & 0x3000000;
  v12 = 3;
  if ( (v6 & 0x3000000) == 0x1000000 )
  {
    v13 = 1;
  }
  else if ( v11 == 0x2000000 )
  {
    v13 = 2;
  }
  else
  {
    v13 = 3;
    if ( v11 != 50331648 )
      v13 = 0;
  }
  si128.m128i_i32[3] = v13;
  switch ( v6 & 3 )
  {
    case 1:
      v14 = 1;
      break;
    case 2:
      v14 = 2;
      break;
    case 3:
      v14 = 3;
      break;
    default:
      v14 = 0;
      break;
  }
  si128.m128i_i32[0] = v14;
  v15 = v6 & 0x300;
  if ( v15 == 256 )
  {
    v16 = 1;
  }
  else if ( v15 == 512 )
  {
    v16 = 2;
  }
  else
  {
    v16 = 3;
    if ( v15 != 768 )
      v16 = 0;
  }
  si128.m128i_i32[1] = v16;
  v17 = v6 & 0x30000;
  if ( v17 == 0x10000 )
  {
    v12 = 1;
  }
  else if ( v17 == 0x20000 )
  {
    v12 = 2;
  }
  else if ( v17 != 196608 )
  {
    v12 = 0;
  }
  si128.m128i_i32[2] = v12;
  memset_0(v59, 0, 0x80uLL);
  v18 = v14 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
    {
      v61 = -1090519040;
      v44 = v63 + -0.5;
      v65 = v65 + -0.5;
      v45 = v67 + -0.5;
      goto LABEL_56;
    }
    if ( v19 != 1 )
      goto LABEL_24;
    v44 = v63 + -0.5;
    v65 = v65 + 0.5;
    v45 = v67 + -0.5;
  }
  else
  {
    v44 = v63 + 0.5;
    v65 = v65 + 0.5;
    v45 = v67 + 0.5;
  }
  v61 = 1056964608;
LABEL_56:
  v63 = v44;
  v67 = v45;
LABEL_24:
  v20 = v16 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        goto LABEL_27;
      v36 = v64 + -0.5;
      v37 = v68 + -0.5;
    }
    else
    {
      v36 = v64 + 0.5;
      v37 = v68 + 0.5;
    }
    v64 = v36;
    v68 = v37;
    v38 = v66 + 0.5;
    v39 = v70 + 0.5;
  }
  else
  {
    v64 = v64 + -0.5;
    v68 = v68 + -0.5;
    v38 = v66 + -0.5;
    v39 = v70 + -0.5;
  }
  v66 = v38;
  v70 = v39;
LABEL_27:
  v22 = v12 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_30;
      v40 = v73 + -0.5;
      v41 = v69 + -0.5;
    }
    else
    {
      v40 = v73 + 0.5;
      v41 = v69 + 0.5;
    }
    v73 = v40;
    v69 = v41;
    v42 = v75 + 0.5;
    v43 = v71 + 0.5;
  }
  else
  {
    v73 = v73 + -0.5;
    v69 = v69 + -0.5;
    v42 = v75 + -0.5;
    v43 = v71 + -0.5;
  }
  v75 = v42;
  v71 = v43;
LABEL_30:
  v24 = v13 - 1;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_33;
      v46 = v60 + 0.5;
      v47 = v72 + 0.5;
    }
    else
    {
      v46 = v60 + -0.5;
      v47 = v72 + -0.5;
    }
    v60 = v46;
    v72 = v47;
    v48 = v62 + -0.5;
    v49 = v74 + -0.5;
  }
  else
  {
    v60 = v60 + 0.5;
    v72 = v72 + 0.5;
    v48 = v62 + 0.5;
    v49 = v74 + 0.5;
  }
  v62 = v48;
  v74 = v49;
LABEL_33:
  v26 = &v63;
  v27 = 4LL;
  do
  {
    v77 = 0;
    v28 = *(v26 - 4);
    v78[0] = 1056964608;
    v78[1] = 1060439283;
    v29 = &v77;
    if ( v28 != 0.0 )
      v29 = v78;
    v30 = *(v26 - 3);
    v31 = 0LL;
    if ( v30 != 0.0 )
      v31 = 1LL;
    *((_DWORD *)v26 - 2) = v29[v31];
    v32 = *(v26 - 1);
    if ( v28 == v32 && v30 == *v26 )
    {
      v35 = 0;
    }
    else
    {
      v79 = 0;
      v80[0] = 1056964608;
      v80[1] = 1060439283;
      v33 = &v79;
      if ( v32 != 0.0 )
        v33 = v80;
      v34 = 0LL;
      if ( *v26 != 0.0 )
        v34 = 1LL;
      v35 = v33[v34];
    }
    *((_DWORD *)v26 + 1) = v35;
    v26 += 8;
    --v27;
  }
  while ( v27 );
  a2 = v5;
  p_si128 = &si128;
  v10 = v59;
LABEL_4:
  v54 = v10;
  Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v50, a2);
}
