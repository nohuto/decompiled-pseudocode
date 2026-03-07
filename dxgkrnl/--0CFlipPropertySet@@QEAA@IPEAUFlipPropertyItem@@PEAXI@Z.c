CFlipPropertySet *__fastcall CFlipPropertySet::CFlipPropertySet(
        CFlipPropertySet *this,
        int a2,
        struct FlipPropertyItem *a3,
        void *a4,
        unsigned int a5)
{
  CFlipPropertySet *result; // rax

  *((_DWORD *)this + 8) = a5;
  *(_QWORD *)this = &CFlipPropertySet::`vftable';
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = a4;
  return result;
}
