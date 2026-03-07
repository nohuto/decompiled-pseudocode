__int64 __fastcall xxxToUnicodeEx(int a1, int a2, char *a3, int a4, int a5, char a6, __int64 a7)
{
  int v11; // edx
  _BYTE *v12; // r8
  char v13; // r10
  int v14; // eax
  int v15; // eax
  char v16; // r10
  int v17; // eax
  _DWORD v19[4]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v20[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  v11 = 0;
  v19[0] = 0;
  do
  {
    v12 = &v20[(unsigned __int64)(unsigned __int8)v11 >> 2];
    v13 = 2 * (v11 & 3);
    v14 = (unsigned __int8)*v12;
    if ( *a3 < 0 )
      v15 = v14 | (1 << v13);
    else
      v15 = v14 & ~(1 << v13);
    v16 = 2 * (v11 & 3) + 1;
    if ( (*a3 & 1) != 0 )
      v17 = (unsigned __int8)v15 | (1 << v16);
    else
      v17 = (unsigned __int8)v15 & ~(1 << v16);
    ++v11;
    *v12 = v17;
    ++a3;
  }
  while ( v11 < 256 );
  return xxxInternalToUnicode(a1, a2, (unsigned int)v20, a4, a5, a6, (__int64)v19, a7);
}
