__int64 __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::SetCenterX(float *a1, float a2)
{
  __int64 v3; // rax

  if ( a2 != a1[42] )
  {
    v3 = *(_QWORD *)a1;
    a1[42] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v3 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
