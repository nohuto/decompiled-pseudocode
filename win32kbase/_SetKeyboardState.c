__int64 __fastcall SetKeyboardState(char *a1)
{
  char *v1; // r8
  __int64 v2; // r10
  int v4; // r9d
  int v5; // eax
  unsigned __int64 v6; // rdx
  int v7; // ecx
  char v8; // al
  int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  char v12; // al
  int v13; // ecx

  v1 = a1;
  v2 = *((_QWORD *)gptiCurrent + 54);
  v4 = 0;
  v5 = 0;
  while ( v5 < 256 )
  {
    v6 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v7 = *(unsigned __int8 *)(v6 + v2 + 236);
    v8 = 2 * (v4 & 3);
    if ( *v1 < 0 )
      v9 = v7 | (1 << v8);
    else
      v9 = v7 & ~(1 << v8);
    *(_BYTE *)(v6 + v2 + 236) = v9;
    v10 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v11 = *(unsigned __int8 *)(v10 + v2 + 236);
    v12 = 2 * (v4 & 3) + 1;
    if ( (*v1 & 1) != 0 )
      v13 = v11 | (1 << v12);
    else
      v13 = v11 & ~(1 << v12);
    *(_BYTE *)(v10 + v2 + 236) = v13;
    v5 = ++v4;
    ++v1;
  }
  if ( v1 != a1 )
    ++*((_DWORD *)gpsi + 1746);
  return 1LL;
}
