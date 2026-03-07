CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  CTreeData *v1; // rdx

  *(_QWORD *)this = &CTreeData::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)this + 40;
  *((_QWORD *)this + 3) = (char *)this + 40;
  *((_QWORD *)this + 4) = (char *)this + 88;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 16843008;
  *((_QWORD *)this + 21) = (char *)this + 192;
  *((_QWORD *)this + 22) = (char *)this + 192;
  *((_QWORD *)this + 23) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 224;
  *((_QWORD *)this + 26) = (char *)this + 224;
  *((_QWORD *)this + 27) = (char *)this + 232;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  CMILMatrix::SetToIdentity((CTreeData *)((char *)this + 288));
  return v1;
}
