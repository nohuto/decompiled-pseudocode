EBOX *__fastcall EBOX::EBOX(EBOX *this, struct EXFORMOBJ *a2, struct _RECTL *a3)
{
  __int128 v3; // xmm0
  _QWORD *v4; // rbx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  EBOX *result; // rax
  int v10; // edx

  v3 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v4 = (_QWORD *)((char *)this + 8);
  *((_DWORD *)this + 1) = 0;
  *((_OWORD *)this + 4) = v3;
  *((_DWORD *)this + 2) = a3->right;
  *((_DWORD *)this + 3) = a3->top;
  *((_DWORD *)this + 4) = a3->left;
  *((_DWORD *)this + 5) = a3->top;
  *((_DWORD *)this + 6) = a3->left;
  *((_DWORD *)this + 7) = a3->bottom;
  EXFORMOBJ::bXformRound(a2, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
  *((_QWORD *)this + 6) = *v4;
  *((_DWORD *)this + 12) -= *((_DWORD *)this + 4);
  *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
  *((_QWORD *)this + 7) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 14) -= *((_DWORD *)this + 6);
  *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
  *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
  *((_DWORD *)this + 8) += *((_DWORD *)this + 12);
  v6 = *((_DWORD *)this + 13);
  *((_DWORD *)this + 9) += v6;
  v7 = *((_DWORD *)this + 12) + 1;
  *((_DWORD *)this + 13) = (v6 + 1) >> 1;
  v8 = *((_DWORD *)this + 14) + 1;
  v7 >>= 1;
  *((_DWORD *)this + 12) = v7;
  *((_DWORD *)this + 14) = v8 >> 1;
  *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 3);
  result = this;
  *((_DWORD *)this + 10) += v7;
  v10 = *((_DWORD *)this + 13) + *((_DWORD *)this + 11);
  *((_DWORD *)this + 11) = v10;
  *((_DWORD *)this + 10) += *((_DWORD *)this + 14);
  *((_DWORD *)this + 11) = v10 + *((_DWORD *)this + 15);
  return result;
}
