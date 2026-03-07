double __fastcall LinearFitT<256>::ComputeAverage(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v1 >= 0x100 )
  {
    v1 = 256;
  }
  else if ( !v1 )
  {
    return 0.0;
  }
  return (double)(int)*(_QWORD *)(a1 + 64) / (double)v1 + (double)(int)*(_QWORD *)(a1 + 48);
}
