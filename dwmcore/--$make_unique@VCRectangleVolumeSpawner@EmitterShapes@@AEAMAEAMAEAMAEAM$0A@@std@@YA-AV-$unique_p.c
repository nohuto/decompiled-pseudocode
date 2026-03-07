_QWORD *__fastcall std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float &,float &,float &,float &,0>(
        _QWORD *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5)
{
  _DWORD *v9; // rax
  int v10; // xmm2_4
  int v11; // xmm1_4
  int v12; // xmm0_4

  v9 = operator new(0x18uLL);
  if ( v9 )
  {
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    v9[5] = *a5;
    v9[2] = v12;
    v9[3] = v11;
    v9[4] = v10;
    *(_QWORD *)v9 = &EmitterShapes::CRectangleVolumeSpawner::`vftable';
  }
  *a1 = v9;
  return a1;
}
