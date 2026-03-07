__int64 __fastcall BgpGxInitializeRectangle(int *a1, int a2, __int64 a3, unsigned int a4)
{
  int v4; // r10d
  int v5; // r11d
  unsigned int v6; // ecx
  __int64 result; // rax

  if ( !a1 || !a3 )
    return 3221225485LL;
  v4 = a1[1];
  v5 = *a1;
  v6 = (unsigned int)(a2 * v4 * *a1 + 7) >> 3;
  if ( v6 + 72 > a4 )
    return 3221225626LL;
  *(_DWORD *)a3 = v4;
  *(_QWORD *)(a3 + 24) = a3 + 72;
  result = 0LL;
  *(_DWORD *)(a3 + 4) = v5;
  *(_DWORD *)(a3 + 8) = a2;
  *(_DWORD *)(a3 + 16) = 8;
  *(_DWORD *)(a3 + 12) = v6;
  return result;
}
