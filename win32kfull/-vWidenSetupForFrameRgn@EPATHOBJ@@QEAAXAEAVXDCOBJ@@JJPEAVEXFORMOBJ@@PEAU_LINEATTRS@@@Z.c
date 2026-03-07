void __fastcall EPATHOBJ::vWidenSetupForFrameRgn(
        EPATHOBJ *this,
        struct XDCOBJ *a2,
        int a3,
        int a4,
        struct EXFORMOBJ *a5,
        struct _LINEATTRS *a6)
{
  struct _LINEATTRS *v6; // r10
  FLOATL v8; // ecx
  int v9; // eax
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v13; // edx
  int v14; // r11d
  __int64 v15; // rax
  EXFORMOBJ *v16; // r8
  __int64 v17; // rcx
  float *v18; // rax
  float v19; // [rsp+40h] [rbp+18h] BYREF

  v6 = a6;
  a6->iEndCap = 0;
  v6->fl = 65537;
  v6->iJoin = 2;
  v8 = *(float *)(*(_QWORD *)a2 + 224LL);
  v9 = a4;
  v6->pstyle = 0LL;
  v6->cstyle = 0;
  v6->eMiterLimit = v8;
  if ( 2 * a3 >= 2 * a4 )
    v9 = a3;
  v10 = 2 * v9;
  if ( 2 * a3 >= 2 * a4 )
    a3 = a4;
  v11 = (float)v10;
  v19 = (float)v10;
  v6->elWidth.e = (float)v10;
  v12 = (float)(2 * a3);
  if ( !EFLOAT::bIsZero((EFLOAT *)&v19) )
    v12 = v12 / v11;
  v15 = *(_QWORD *)a2;
  v16 = a5;
  v17 = *(_QWORD *)a5;
  *(_OWORD *)v17 = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
  *(_OWORD *)(v17 + 16) = *(_OWORD *)(v15 + 336);
  *(_DWORD *)(v17 + 32) = *(_DWORD *)(v15 + 352);
  v18 = *(float **)v16;
  if ( v13 >= v14 )
  {
    v18[2] = v12 * v18[2];
    *(float *)(*(_QWORD *)v16 + 12LL) = v12 * *(float *)(*(_QWORD *)v16 + 12LL);
  }
  else
  {
    *v18 = v12 * *v18;
    *(float *)(*(_QWORD *)v16 + 4LL) = v12 * *(float *)(*(_QWORD *)v16 + 4LL);
  }
  EXFORMOBJ::vComputeAccelFlags(v16, 8u);
}
