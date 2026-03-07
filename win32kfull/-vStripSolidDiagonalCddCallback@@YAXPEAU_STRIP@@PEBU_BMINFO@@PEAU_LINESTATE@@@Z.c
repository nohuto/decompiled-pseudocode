void __fastcall vStripSolidDiagonalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  __int64 v5; // rbx
  int v6; // r12d
  int v7; // r13d
  unsigned int v8; // r8d
  unsigned int v9; // ett
  unsigned int v10; // esi
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // r9
  int v12; // edi
  int v13; // r15d
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-78h]
  unsigned int v16; // [rsp+24h] [rbp-74h]
  char *v17; // [rsp+28h] [rbp-70h]
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-68h]
  char *v19; // [rsp+38h] [rbp-60h]
  _DWORD v20[4]; // [rsp+40h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = 1;
  v17 = (char *)a1 + 28;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v19 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v15 = *((_DWORD *)a3 + 1);
  if ( v7 <= 0 )
    v6 = -1;
  v8 = abs32(v7);
  v9 = v5 - *((_DWORD *)a1 + 110);
  v10 = (v9 % v8) >> 2;
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v12 = v9 / v8;
  v18 = v11;
  do
  {
    v13 = *(_DWORD *)v3;
    while ( 1 )
    {
      v14 = *((_QWORD *)a1 + 54);
      v20[0] = v10;
      v20[3] = v12 + 1;
      v16 = v10++;
      v20[1] = v12;
      v20[2] = v10;
      v11(v14, v15, v20);
      v5 += 4LL;
      if ( !--v13 )
        break;
      v11 = v18;
      v5 += v7;
      v12 += v6;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v10 = v16;
      v5 += v7 - 4;
      v12 += v6;
    }
    v11 = v18;
    v3 = v17 + 4;
    v17 = v3;
  }
  while ( v3 < v19 );
  *((_QWORD *)a1 + 2) = v5;
}
