float __fastcall CCpuClipAntialiasSink::Bounds::ComputeRelativeOutlinePosition(
        CCpuClipAntialiasSink::Bounds *this,
        float a2)
{
  float v3; // xmm1_4
  float v5; // xmm2_4
  int v6; // edi
  int v7; // ebx
  float v9; // xmm0_4
  float v10; // xmm1_4
  float Y; // [rsp+48h] [rbp+10h] BYREF

  v3 = *((float *)this + 1);
  if ( a2 == v3 )
    return 0.0;
  v5 = *((float *)this + 2);
  v6 = (int)v3;
  v7 = (unsigned __int16)(int)v3;
  if ( a2 == v5 )
    return ceilf_0(*((float *)this + 2)) - (float)v7;
  if ( (float)(v7 + 1) > a2 )
    return (float)(a2 - v3) / (float)(fminf((float)v7 + 1.0, v5) - v3);
  v9 = modff(*((float *)this + 2), &Y);
  v10 = (float)(unsigned __int16)(int)Y;
  if ( a2 < v10 )
    return a2 - (float)v7;
  else
    return (float)((float)(a2 - v10) / v9) + (float)(unsigned __int16)((int)Y - v6);
}
