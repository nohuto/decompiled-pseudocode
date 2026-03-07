void __fastcall HFDBASIS64::vUntransform(HFDBASIS64 *this, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v2 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 1);
  v5 = *(_QWORD *)this;
  v6 = 6 * v4 - *((_QWORD *)this + 2);
  v7 = 2 * v6 - v2;
  v8 = v6 - 2 * v2;
  if ( v8 < 0 )
    v9 = -(__int64)((2 * v2 - v6) / 0x12uLL);
  else
    v9 = v8 / 0x12uLL;
  if ( v7 < 0 )
    v10 = -(__int64)((v2 - 2 * v6) / 0x12uLL);
  else
    v10 = v7 / 0x12uLL;
  *a2 = (v5 + 0x8000000) >> 28;
  a2[2] = (__int64)(v9 + v5 + 0x8000000) >> 28;
  a2[4] = (__int64)(v10 + v5 + 0x8000000) >> 28;
  a2[6] = (v5 + v4 + 0x8000000) >> 28;
}
