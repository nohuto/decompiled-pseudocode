void __fastcall RECTANGLEPATHOBJ::vInit(RECTANGLEPATHOBJ *this, struct _RECTL *a2, int a3)
{
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax

  *((_DWORD *)this + 104) = 15;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 400;
  *((_QWORD *)this + 15) = (char *)this + 400;
  *((_QWORD *)this + 1) = (char *)this + 80;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 105) = 4;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 1) = 4;
  *(_DWORD *)this = 0;
  v5 = 16 * a2->left;
  *((_DWORD *)this + 108) = v5;
  *((_DWORD *)this + 110) = v5;
  *((_DWORD *)this + 32) = v5;
  v6 = 16 * a2->right;
  *((_DWORD *)this + 106) = v6;
  *((_DWORD *)this + 112) = v6;
  *((_DWORD *)this + 34) = v6;
  v7 = 16 * a2->top;
  *((_DWORD *)this + 33) = v7;
  v8 = 16 * a2->bottom;
  *((_DWORD *)this + 35) = v8;
  v9 = v8;
  if ( a3 )
  {
    v9 = v7;
    v7 = v8;
  }
  *((_DWORD *)this + 111) = v9;
  *((_DWORD *)this + 113) = v9;
  *((_DWORD *)this + 107) = v7;
  *((_DWORD *)this + 109) = v7;
}
