void __fastcall ClipPlaneIterator::GetMoreStandardClipPlanes(
        ClipPlaneIterator *this,
        struct D2D_VECTOR_4F *a2,
        unsigned int *a3)
{
  __int64 v3; // r9
  int v7; // r10d
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // r11d
  __int64 v11; // r8
  unsigned int v12; // esi
  _DWORD *v13; // rcx
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  unsigned int v17; // edx
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _DWORD v23[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v24[14]; // [rsp+28h] [rbp-70h]

  v3 = *((unsigned int *)this + 2);
  v7 = 1;
  v8 = *((_DWORD *)this + 12) - v3;
  v9 = v8;
  v10 = 3 - ((_DWORD)v3 != 0);
  if ( v10 < v8 )
    v9 = 3 - ((_DWORD)v3 != 0);
  if ( (unsigned int)v3 + v9 >= *((_DWORD *)this + 12) - 1 )
  {
    v7 = 0;
    v9 = *((_DWORD *)this + 12) - v3;
    if ( v10 + 1 < v8 )
      v9 = v10 + 1;
  }
  v11 = 0LL;
  v12 = v7 + v9 + ((_DWORD)v3 != 0);
  if ( (_DWORD)v3 )
  {
    v13 = (_DWORD *)*((_QWORD *)this + 3);
    v11 = 1LL;
    v14 = v13[1];
    v23[0] = *v13;
    v15 = v13[4 * v3];
    v23[1] = v14;
    v16 = v13[4 * v3 + 1];
    v24[0] = v15;
    v24[1] = v16;
  }
  v17 = 0;
  if ( v9 )
  {
    v18 = *((_QWORD *)this + 3);
    do
    {
      v19 = 2LL * ((unsigned int)v3 + v17);
      v20 = 2LL * (unsigned int)v11;
      v11 = (unsigned int)(v11 + 1);
      ++v17;
      *(_OWORD *)&v23[2 * v20] = *(_OWORD *)(v18 + 8 * v19);
    }
    while ( v17 < v9 );
  }
  if ( v7 )
  {
    v21 = (_QWORD *)*((_QWORD *)this + 3);
    v22 = 2 * v11;
    *(_QWORD *)&v24[2 * v22] = *v21;
    *(_QWORD *)&v23[2 * v22] = v21[2 * v9 - 1 + 2 * (_DWORD)v3];
  }
  ClipPlaneIterator::CalculateClipPlanesFromLineSegments(this, (struct ClipPlaneIterator::LineSegment *)v23, v12, a2);
  *a3 = v12;
  *((_DWORD *)this + 2) += v9;
  if ( *((_DWORD *)this + 2) >= *((_DWORD *)this + 12) )
    *((_DWORD *)this + 1) = 1;
}
