bool __fastcall DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(
        DXGTRACKEDWORKLOAD *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10
  double v7; // xmm0_8
  __int64 v8; // rcx
  double v9; // xmm1_8
  __int64 v10; // rcx
  double v11; // xmm0_8
  double v12; // xmm1_8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx

  v5 = a4 - a3;
  if ( a4 <= a3 )
    v5 = a3 - a4;
  if ( v5 < 0 )
    v7 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
  else
    v7 = (double)(int)v5;
  v8 = *((_QWORD *)this + 39);
  if ( v8 < 0 )
    v9 = (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1)) + (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1));
  else
    v9 = (double)(int)v8;
  v10 = *((_QWORD *)this + 40);
  v11 = v7 / v9;
  if ( v10 < 0 )
  {
    v13 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
    v12 = (double)(int)v13 + (double)(int)v13;
  }
  else
  {
    v12 = (double)(int)v10;
  }
  v14 = a2 + (unsigned int)(int)(v11 * v12);
  *a5 = v14;
  return v14 > a2;
}
