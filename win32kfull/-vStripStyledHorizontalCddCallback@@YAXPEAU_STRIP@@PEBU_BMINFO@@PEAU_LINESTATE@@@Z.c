void __fastcall vStripStyledHorizontalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  __int64 v4; // rbp
  int v5; // esi
  int v7; // edi
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r10d
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r11
  unsigned int v13; // r13d
  int v14; // r12d
  unsigned int v15; // r14d
  __int64 v16; // rcx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-88h]
  int v20; // [rsp+24h] [rbp-84h]
  char *v21; // [rsp+28h] [rbp-80h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+40h] [rbp-68h]
  char *v25; // [rsp+48h] [rbp-60h]
  _DWORD v26[4]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (char *)a1 + 28;
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a3 + 20);
  v7 = *((_DWORD *)a3 + 5);
  v25 = (char *)a1 + 4 * *(int *)a1 + 28;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v21 = (char *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  v19 = *((_DWORD *)a3 + 1);
  v9 = 1;
  if ( v8 <= 0 )
    v9 = -1;
  v20 = v9;
  v10 = abs32(v8);
  v11 = (((int)v4 - *((_DWORD *)a1 + 110)) % v10) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v13 = ((int)v4 - *((_DWORD *)a1 + 110)) / v10;
  v23 = v12;
  v24 = v8;
  do
  {
    v14 = *(_DWORD *)v3;
    do
    {
      v15 = v11 + 1;
      if ( !v5 )
      {
        v16 = *((_QWORD *)a1 + 54);
        v26[3] = v13 + 1;
        v26[0] = v11;
        v26[1] = v13;
        v26[2] = v11 + 1;
        v12(v16, v19, v26);
        v12 = v23;
      }
      v7 -= *((_DWORD *)a3 + 2);
      v4 += 4LL;
      v11 = v15;
      if ( v7 <= 0 )
      {
        v17 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v17;
        if ( (unsigned __int64)v17 > *((_QWORD *)a3 + 6) )
        {
          v17 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v17;
        }
        v7 += *v17;
        v5 = v5 == 0;
      }
      --v14;
    }
    while ( v14 );
    v4 += v24;
    v13 += v20;
    v7 -= *((_DWORD *)a3 + 3);
    if ( v7 <= 0 )
    {
      v18 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v18;
      if ( (unsigned __int64)v18 > *((_QWORD *)a3 + 6) )
      {
        v18 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v18;
      }
      v7 += *v18;
      v5 = v5 == 0;
    }
    v3 = v21 + 4;
    v21 = v3;
  }
  while ( v3 != v25 );
  *((_QWORD *)a1 + 2) = v4;
  *((_DWORD *)a3 + 20) = v5;
  *((_DWORD *)a3 + 5) = v7;
}
