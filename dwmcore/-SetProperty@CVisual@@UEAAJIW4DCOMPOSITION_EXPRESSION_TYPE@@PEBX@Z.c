__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, float *a4)
{
  CVisual *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  unsigned int v11; // ebx
  double v13; // xmm6_8
  FLOAT z; // xmm3_4
  FLOAT v15; // xmm2_4
  FLOAT x; // xmm1_4
  double v17; // xmm2_8
  double v18; // xmm1_8
  float v19; // xmm2_4
  float v20; // xmm1_4
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  FLOAT y; // xmm2_4
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F v30; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_VECTOR_3F v31; // [rsp+40h] [rbp-28h] BYREF

  v4 = (CVisual *)a1;
  v5 = a3 - 17;
  if ( !v5 )
  {
    if ( a2 == 26 )
    {
      CVisual::SetPixelSnappingEnabled((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    if ( a2 == 37 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    goto LABEL_43;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_QWORD *)&v13 = *(unsigned int *)a4;
    if ( a2 <= 0x19 )
    {
      if ( a2 == 25 )
      {
        CVisual::SetOpacity((CVisual *)a1, *a4);
        return 0;
      }
      if ( !a2 )
      {
        v8 = a1[30];
        v10 = *a4;
        v9 = a1[29];
        goto LABEL_7;
      }
      v21 = a2 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 21;
          if ( v23 )
          {
            if ( v23 != 1 )
              goto LABEL_43;
            v20 = a1[33];
            v19 = *a4;
          }
          else
          {
            v19 = a1[34];
            v20 = *a4;
          }
          goto LABEL_33;
        }
        v9 = a1[29];
        v8 = *a4;
      }
      else
      {
        v8 = a1[30];
        v9 = *a4;
      }
      v10 = a1[28];
      goto LABEL_7;
    }
    v24 = a2 - 31;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_43;
            *(_QWORD *)&v17 = *(unsigned int *)a4;
            *(_QWORD *)&v18 = **(unsigned int **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1, &v30);
            goto LABEL_23;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v30)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v4, &v31);
          CVisual::SetRelativeOffset(v4, RelativeOffsetInternal->x, y, *(FLOAT *)&v13);
        }
        v18 = v13;
        *(_QWORD *)&v17 = *(unsigned int *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v4, &v30) + 4LL);
LABEL_23:
        a1 = (float *)v4;
        goto LABEL_24;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      v15 = *(float *)&v13;
      x = CVisual::GetRelativeOffsetInternal(v4, &v30)->x;
    }
    else
    {
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->z;
      x = *(float *)&v13;
      v15 = CVisual::GetRelativeOffsetInternal(v4, &v30)->y;
    }
    a1 = (float *)v4;
    goto LABEL_49;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    if ( a2 != 28 )
    {
      if ( a2 != 30 )
        goto LABEL_43;
      *(_QWORD *)&v17 = *((unsigned int *)a4 + 1);
      *(_QWORD *)&v18 = *(unsigned int *)a4;
LABEL_24:
      CVisual::SetRelativeSize((CVisual *)a1, v18, v17);
      return 0;
    }
    v19 = a4[1];
    v20 = *a4;
LABEL_33:
    CVisual::SetSize((CVisual *)a1, v20, v19);
    return 0;
  }
  if ( v7 != 17 )
    goto LABEL_43;
  if ( a2 != 27 )
  {
    if ( a2 == 29 )
    {
      z = a4[2];
      v15 = a4[1];
      x = *a4;
LABEL_49:
      CVisual::SetRelativeOffset((CVisual *)a1, x, v15, z);
      return 0;
    }
LABEL_43:
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0x987u, 0LL);
    return v11;
  }
  v8 = a4[2];
  v9 = a4[1];
  v10 = *a4;
LABEL_7:
  CVisual::SetOffset((CVisual *)a1, v10, v9, v8);
  return 0;
}
