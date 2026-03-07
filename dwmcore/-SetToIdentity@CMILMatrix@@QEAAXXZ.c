void __fastcall CMILMatrix::SetToIdentity(CMILMatrix *this)
{
  char v1; // al

  *(_QWORD *)this = 1065353216LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  v1 = *((_BYTE *)this + 65);
  *((_BYTE *)this + 64) = 85;
  *((_BYTE *)this + 65) = v1 & 0xC0 | 0x17;
}
