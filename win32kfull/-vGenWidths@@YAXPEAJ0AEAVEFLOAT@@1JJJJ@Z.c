void __fastcall vGenWidths(int *a1, int *a2, struct EFLOAT *a3, struct EFLOAT *a4, int a5, int a6, int a7, int a8)
{
  int v11; // r10d
  EFLOAT *v12; // r11
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // r8d
  int v19; // r10d
  float *v20; // r11
  float v21; // xmm4_4

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( EFLOAT::bIsZero(a3) )
  {
    *a1 = v11 / 2;
    *a2 = v11 - v11 / 2;
  }
  else
  {
    v13 = a7;
    v14 = a6;
    if ( a7 == a6 )
    {
      v13 = a8 / -4;
      v14 = a8 / -4 + a8 / 2;
    }
    v15 = 0;
    if ( v13 < 0 )
      v15 = v13;
    v16 = 0;
    if ( v14 > 0 )
      v16 = v14;
    if ( *(float *)a3 < 0.0 )
      v16 = -v15;
    v17 = a8 / 16 + v16;
    if ( !v17 )
      v17 = 1;
    if ( EFLOAT::bIsZero(v12) )
    {
      *a2 = v17;
      *a1 = -v18;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v18) * (float)(*(float *)a3 / (float)v18))
                    + (float)((float)(*v20 / (float)((float)v19 * 0.5)) * (float)(*v20 / (float)((float)v19 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a1, 6u);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v17) * (float)(*(float *)a3 / (float)v17)) + v21;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a2, 6u);
    }
  }
}
