__int64 __fastcall AdjustBoundingBox(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int *a5, int *a6)
{
  _DWORD *v6; // r10
  _DWORD *v8; // r11
  int v9; // ecx
  int v10; // edx
  __int64 result; // rax
  int v12; // r8d
  int v13; // ecx
  int v14; // ecx

  v6 = *(_DWORD **)a1;
  v8 = *(_DWORD **)a2;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 320LL) - *(_DWORD *)(*(_QWORD *)a2 + 320LL);
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 316LL) - v6[79];
  result = (unsigned int)(v10 + v9);
  if ( (_DWORD)result )
  {
    result = 0LL;
    if ( v9 >= 0 )
      result = (unsigned int)v9;
    v12 = 0;
    if ( v10 >= 0 )
      v12 = v10;
    if ( v12 || (_DWORD)result )
    {
      if ( (int)result > *a4 )
      {
        v13 = v8[84] - v6[84];
        *a4 = result;
        *a6 = v13;
        a6[1] = v8[85] - v6[85];
      }
      if ( v12 > *a3 )
      {
        v14 = v8[82] - v6[82];
        *a3 = v12;
        *a5 = v14;
        a5[1] = v8[83] - v6[83];
      }
    }
  }
  return result;
}
