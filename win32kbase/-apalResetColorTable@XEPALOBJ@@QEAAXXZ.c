void __fastcall XEPALOBJ::apalResetColorTable(int **this)
{
  int *v1; // rax
  int *v3; // rcx

  v1 = *this;
  v3 = (int *)*((_QWORD *)*this + 15);
  if ( v3 != v1 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  *((_QWORD *)*this + 14) = *((_QWORD *)*this + 16);
  *((_QWORD *)*this + 15) = *this;
}
