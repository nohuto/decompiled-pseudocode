_BOOL8 __fastcall SymCryptFdefRawSubAsm(unsigned __int64 *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  int v4; // r9d
  bool v5; // cf
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rtt

  v4 = 2 * a4;
  v5 = 0;
  do
  {
    v6 = v5 + *a2;
    v5 = *a1 < v6;
    *a3 = *a1 - v6;
    v7 = a1[1];
    v8 = v5 + a2[1];
    v5 = v7 < v8;
    a3[1] = v7 - v8;
    v9 = a1[2];
    v10 = v5 + a2[2];
    v5 = v9 < v10;
    a3[2] = v9 - v10;
    v11 = a1[3];
    v12 = v5 + a2[3];
    v5 = v11 < v12;
    a3[3] = v11 - v12;
    a1 += 4;
    a2 += 4;
    a3 += 4;
    --v4;
  }
  while ( v4 );
  return v5;
}
