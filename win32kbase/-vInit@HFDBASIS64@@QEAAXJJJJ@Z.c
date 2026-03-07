void __fastcall HFDBASIS64::vInit(HFDBASIS64 *this, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax

  v5 = a3;
  v7 = a4;
  v8 = a3;
  v9 = 2LL;
  v10 = 2LL;
  do
  {
    v8 -= v7;
    --v10;
  }
  while ( v10 );
  v11 = a5 + v8;
  v12 = a2;
  do
  {
    v12 -= v5;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)this = (__int64)a2 << 28;
  *((_QWORD *)this + 2) = 1610612736 * v11;
  *((_QWORD *)this + 3) = 1610612736 * (v12 + v7);
  *((_QWORD *)this + 1) = (a5 - (__int64)a2) << 28;
}
