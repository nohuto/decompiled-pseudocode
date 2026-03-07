__int64 __fastcall CSnapshot::GetBounds(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  int v4; // eax

  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  v3 = (float)*(int *)(a1 - 40);
  *(float *)(a3 + 8) = v3;
  v4 = *(_DWORD *)(a1 - 36);
  *(float *)(a3 + 12) = (float)v4;
  if ( *a2 != 0.0 && a2[1] != 0.0 )
  {
    *(float *)(a3 + 8) = fminf(v3, *a2);
    *(float *)(a3 + 12) = fminf((float)v4, a2[1]);
  }
  return 0LL;
}
