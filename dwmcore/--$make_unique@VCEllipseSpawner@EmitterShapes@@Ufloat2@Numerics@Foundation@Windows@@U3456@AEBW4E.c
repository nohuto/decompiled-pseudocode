_QWORD *__fastcall std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom const &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4)
{
  _DWORD *v8; // rax
  int v9; // r9d
  int v10; // xmm1_4
  __int64 v12; // [rsp+20h] [rbp-18h]

  v8 = operator new(0x20uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = HIDWORD(*a2);
    v12 = *a3;
    v8[2] = *a2;
    v8[3] = v10;
    *((_QWORD *)v8 + 2) = v12;
    *(_QWORD *)v8 = &EmitterShapes::CEllipseSpawner::`vftable';
    v8[6] = v9;
  }
  *a1 = v8;
  return a1;
}
