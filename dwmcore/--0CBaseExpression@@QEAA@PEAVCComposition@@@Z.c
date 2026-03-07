CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 72, 0, 0x40uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 18;
  *((_BYTE *)this + 148) = 0;
  *((_BYTE *)this + 216) |= 1u;
  *((_QWORD *)this + 20) = -1LL;
  *((_QWORD *)this + 21) = -1LL;
  *((_QWORD *)this + 28) = -1LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 30) = (char *)this + 272;
  *((_QWORD *)this + 31) = (char *)this + 272;
  *((_DWORD *)this + 64) = 2;
  *((_DWORD *)this + 65) = 2;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
