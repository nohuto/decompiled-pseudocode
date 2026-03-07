_QWORD *__fastcall std::make_unique<CMILMatrix,,0>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x44uLL);
  if ( v2 )
    v2[16] = 0;
  *a1 = v2;
  return a1;
}
