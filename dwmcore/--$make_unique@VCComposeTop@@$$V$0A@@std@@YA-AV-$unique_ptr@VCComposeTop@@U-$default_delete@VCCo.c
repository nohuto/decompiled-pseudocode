_QWORD *__fastcall std::make_unique<CComposeTop,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = operator new(0xA8uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    CMILMatrix::SetToIdentity((CMILMatrix *)(v2 + 3));
    CMILMatrix::SetToIdentity((CMILMatrix *)(v3 + 92));
    *(_QWORD *)(v4 + 160) = v5;
  }
  else
  {
    v4 = 0LL;
  }
  *a1 = v4;
  return a1;
}
