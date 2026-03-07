void __fastcall Mesh::GenerateGeometryWorker(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rsi
  char v8; // cl
  __int16 v9; // r12
  unsigned int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r9
  char v13; // bp
  bool v14; // r14
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  float v19; // xmm1_4
  float v20; // xmm2_4
  __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // r14
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  float v28; // xmm1_4
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // r10d
  __int16 v32; // r9
  __int64 v33; // rdx
  __int16 v34; // ax
  char *v35; // [rsp+50h] [rbp+8h]

  v4 = (unsigned int)(*((_DWORD *)a1 + 2) - 1);
  v5 = 0LL;
  v6 = 0LL;
  v7 = (_DWORD *)((char *)a1 + 48);
  v35 = (char *)a1 + 48;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v4) != 3 )
    goto LABEL_2;
  if ( *v7 == 1 )
  {
    v8 = 1;
    goto LABEL_3;
  }
  if ( *v7 == 2 )
  {
    v8 = *(_BYTE *)(v4 + *((_QWORD *)a1 + 5));
    goto LABEL_3;
  }
  if ( *v7 != 3 )
  {
LABEL_2:
    v8 = 0;
LABEL_3:
    v35 = (char *)a1 + 48;
    goto LABEL_4;
  }
  v8 = *(_BYTE *)(v4 + *((_QWORD *)a1 + 5)) == 0;
LABEL_4:
  v9 = 0;
  v10 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *((_QWORD *)a1 + 4) + 32 * v11;
      if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v11) != 3 )
        break;
      switch ( *v7 )
      {
        case 3:
          v13 = *(_BYTE *)(v11 + *((_QWORD *)a1 + 5)) == 0;
          break;
        case 1:
          v13 = 1;
          break;
        case 2:
          v13 = *(_BYTE *)(v11 + *((_QWORD *)a1 + 5));
          break;
        default:
          goto LABEL_7;
      }
LABEL_8:
      v14 = *(float *)(v12 + 28) > 0.0 && (v8 || v13);
      if ( *((_BYTE *)a1 + 53) || v14 )
      {
        v15 = (unsigned __int16)v5++;
        v16 = *((_QWORD *)a2 + 2) + *((_DWORD *)a2 + 6) * v15;
        *(_QWORD *)v16 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v11);
        *(_DWORD *)(v16 + 8) = *(_DWORD *)(v12 + 16);
        *(_DWORD *)(v16 + 12) = 1065353216;
        v17 = *((_QWORD *)a1 + 2);
        v18 = *(_QWORD *)a2;
        v19 = *(float *)(v17 + 8 * v11);
        v20 = *(float *)(v17 + 8 * v11 + 4);
        v21 = *((_DWORD *)a2 + 2) * v15;
        *(float *)(v21 + v18) = v19;
        *(float *)(v21 + v18 + 4) = v20;
        *(_DWORD *)(v21 + v18 + 8) = 1065353216;
        if ( *(float *)(v16 + 8) != 0.0 )
        {
          *(float *)(v21 + v18) = v19 + *(float *)(v12 + 8);
          *(float *)(v21 + v18 + 4) = v20 + *(float *)(v12 + 12);
        }
        if ( v10 >= 2 && *((_BYTE *)a1 + 53) )
        {
          if ( v6 >= *((_QWORD *)a2 + 5) )
            goto LABEL_46;
          v22 = *((_QWORD *)a2 + 6);
          *(_WORD *)(v22 + 2 * v6) = 0;
          *(_WORD *)(v22 + 2 * v6 + 2) = v9;
          *(_WORD *)(v22 + 2 * v6 + 4) = v15;
          v6 += 3LL;
        }
        if ( v14 )
        {
          v23 = v5;
          v24 = (unsigned __int16)v5;
          v25 = *((_DWORD *)a2 + 6) * (unsigned __int16)v5++;
          v26 = *((_QWORD *)a2 + 2) + v25;
          *(_QWORD *)v26 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v11);
          *(_DWORD *)(v26 + 8) = *(_DWORD *)(v12 + 28);
          *(_DWORD *)(v26 + 12) = 0;
          v27 = *((_QWORD *)a1 + 2);
          v28 = *(float *)(v27 + 8 * v11 + 4) + *(float *)(v12 + 24);
          v29 = *(_QWORD *)a2 + *((_DWORD *)a2 + 2) * v24;
          *(float *)v29 = *(float *)(v12 + 20) + *(float *)(v27 + 8 * v11);
          *(float *)(v29 + 4) = v28;
          *(_DWORD *)(v29 + 8) = 1065353216;
          if ( v13 )
          {
            v30 = (unsigned __int64)(v10 + 1) % *((_QWORD *)a1 + 1);
            v31 = v30;
            if ( *(float *)(32LL * (unsigned int)v30 + *((_QWORD *)a1 + 4) + 28) > 0.0 )
            {
              v32 = v5;
              if ( !(_DWORD)v30 )
                v32 = 0;
              if ( v6 >= *((_QWORD *)a2 + 5) )
              {
LABEL_46:
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v33 = *((_QWORD *)a2 + 6);
              v34 = 1;
              if ( v31 )
                v34 = v32 + 1;
              *(_WORD *)(v33 + 2 * v6) = v23;
              *(_WORD *)(v33 + 2 * v6 + 2) = v34;
              *(_WORD *)(v33 + 2 * v6 + 4) = v32;
              *(_WORD *)(v33 + 2 * v6 + 6) = v23;
              *(_WORD *)(v33 + 2 * v6 + 8) = v32;
              *(_WORD *)(v33 + 2 * v6 + 10) = v15;
              v6 += 6LL;
            }
          }
        }
        v9 = v15;
        v7 = v35;
      }
      ++v10;
      v8 = v13;
      v11 = v10;
      if ( (unsigned __int64)v10 >= *((_QWORD *)a1 + 1) )
        goto LABEL_20;
    }
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
LABEL_20:
  *((_QWORD *)a2 + 4) = v5;
  *((_QWORD *)a2 + 7) = v6;
}
