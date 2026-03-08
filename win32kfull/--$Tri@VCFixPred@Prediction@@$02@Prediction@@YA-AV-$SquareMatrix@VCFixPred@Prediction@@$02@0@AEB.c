/*
 * XREFs of ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C0145C40
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145CCE (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

_QWORD *__fastcall Prediction::Tri<Prediction::CFixPred,3>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r11
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // r10
  _QWORD *v10; // rcx

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v4 = 0LL;
  v5 = a1;
  v6 = 3LL;
  do
  {
    if ( v4 < 3 )
    {
      v7 = a2 - (_QWORD)a1;
      v8 = v5;
      v9 = 3 - v4;
      v10 = v5;
      do
      {
        if ( v10 != (_QWORD *)((char *)v8 + v7) )
          *v10 = *(_QWORD *)((char *)v8 + v7);
        if ( v8 != v10 )
          *v8 = *v10;
        ++v8;
        v10 += 3;
        --v9;
      }
      while ( v9 );
    }
    ++v4;
    v5 += 4;
    --v6;
  }
  while ( v6 );
  return a1;
}
