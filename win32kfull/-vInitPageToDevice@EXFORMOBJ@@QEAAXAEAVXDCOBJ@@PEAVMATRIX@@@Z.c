void __fastcall EXFORMOBJ::vInitPageToDevice(EXFORMOBJ *this, struct XDCOBJ *a2, struct MATRIX *a3)
{
  _DWORD *v4; // r8
  __int64 v5; // rax
  unsigned int v6; // r8d

  *(_QWORD *)this = a3;
  *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)a2 + 428LL);
  v4 = *(_DWORD **)this;
  v5 = *(_QWORD *)a2;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = *(_DWORD *)(v5 + 432);
  *(_DWORD *)(*(_QWORD *)this + 16LL) = *(_DWORD *)(*(_QWORD *)a2 + 436LL);
  *(_DWORD *)(*(_QWORD *)this + 20LL) = *(_DWORD *)(*(_QWORD *)a2 + 440LL);
  bFToL(*(float *)(*(_QWORD *)this + 16LL), (int *)(*(_QWORD *)this + 24LL), 6u);
  bFToL(*(float *)(*(_QWORD *)this + 20LL), (int *)(*(_QWORD *)this + 28LL), v6);
  EXFORMOBJ::vComputeWtoDAccelFlags(this);
}
