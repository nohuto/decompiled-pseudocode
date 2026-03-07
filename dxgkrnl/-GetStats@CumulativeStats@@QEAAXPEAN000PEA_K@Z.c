void __fastcall CumulativeStats::GetStats(
        CumulativeStats *this,
        double *a2,
        double *a3,
        double *a4,
        double *a5,
        unsigned __int64 *a6)
{
  int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v8; // xmm1_8
  __int64 v9; // xmm4_8
  double v10; // xmm3_8
  double v11; // xmm2_8

  v6 = *(_DWORD *)this;
  v7 = 0LL;
  if ( *(_DWORD *)this )
  {
    v7 = (unsigned int)v6;
    v8 = *((_QWORD *)this + 2);
    v9 = *((_QWORD *)this + 1);
    v10 = *((double *)this + 3) / (double)v6;
    v11 = *((double *)this + 4) / (double)v6 - v10 * v10;
  }
  else
  {
    v8 = 0LL;
    v11 = 0.0;
    v9 = 0LL;
    v10 = 0.0;
  }
  *a4 = v10;
  *(_QWORD *)a2 = v9;
  *a5 = v11;
  *(_QWORD *)a3 = v8;
  *a6 = v7;
}
