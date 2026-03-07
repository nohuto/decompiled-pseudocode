struct D2DMatrix *__fastcall D2DMatrixTranspose(struct D2DMatrix *a1, const struct D2DMatrix *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 1);
  *((_DWORD *)a1 + 1) = v2;
  v3 = *((_DWORD *)a2 + 8);
  *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a1 + 2) = v3;
  v4 = *((_DWORD *)a2 + 12);
  *((_DWORD *)a1 + 12) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a1 + 3) = v4;
  v5 = *((_DWORD *)a2 + 9);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 6);
  *((_DWORD *)a1 + 6) = v5;
  v6 = *((_DWORD *)a2 + 13);
  *((_DWORD *)a1 + 13) = *((_DWORD *)a2 + 7);
  *((_DWORD *)a1 + 7) = v6;
  v7 = *((_DWORD *)a2 + 14);
  *((_DWORD *)a1 + 14) = *((_DWORD *)a2 + 11);
  *((_DWORD *)a1 + 11) = v7;
  if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *((_DWORD *)a1 + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a1 + 15) = *((_DWORD *)a2 + 15);
  }
  return a1;
}
