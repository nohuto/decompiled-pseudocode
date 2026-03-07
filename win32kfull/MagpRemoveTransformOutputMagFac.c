int __fastcall MagpRemoveTransformOutputMagFac(float *a1)
{
  int result; // eax
  __int64 v3; // rbx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm1_4

  result = grpdeskRitInput;
  v3 = *(_QWORD *)(grpdeskRitInput + 224LL);
  if ( v3 )
  {
    result = *(_DWORD *)(v3 + 16);
    if ( (result & 2) != 0 )
    {
      result = memcmp((const void *)(v3 + 88), &gMagOutTransformIdentity, 0x20uLL);
      if ( result )
      {
        v4 = *(double *)(v3 + 88);
        v5 = *(double *)(v3 + 104);
        v6 = *(double *)(v3 + 112);
        if ( v4 != 1.0 || v5 != 0.0 || v6 != 0.0 )
        {
          v7 = a1[12] - v5;
          v8 = a1[13] - v6;
          a1[12] = v7;
          a1[13] = v8;
          if ( v4 != 0.0 )
          {
            v9 = a1[5] / v4;
            *a1 = *a1 / v4;
            a1[5] = v9;
            a1[12] = v7 / v4;
            a1[13] = v8 / v4;
          }
        }
      }
    }
  }
  return result;
}
