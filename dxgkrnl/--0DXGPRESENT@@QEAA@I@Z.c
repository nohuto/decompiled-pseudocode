DXGPRESENT *__fastcall DXGPRESENT::DXGPRESENT(DXGPRESENT *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  __int64 v5; // rax

  *((_DWORD *)this + 17) = a2;
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 214) = 0;
  *((_QWORD *)this + 140) = 0LL;
  v3 = 0;
  *((_DWORD *)this + 282) = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_WORD *)this + 214) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *(_OWORD *)((char *)this + 100) = 0LL;
  *((_OWORD *)this + 8) = 0LL;
  *((_OWORD *)this + 9) = 0LL;
  while ( 1 )
  {
    v4 = 1;
    if ( *((_DWORD *)this + 17) )
      v4 = *((_DWORD *)this + 17);
    if ( v3 >= v4 )
      break;
    v5 = v3++;
    *((_QWORD *)this + v5 + 28) = 0LL;
    *((_DWORD *)this + v5 + 88) = 0;
    *((_DWORD *)this + v5 + 40) = 0;
  }
  return this;
}
