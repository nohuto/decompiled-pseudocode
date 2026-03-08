/*
 * XREFs of ?CalculateFigureLength@Figure@CPathEmitterEdge@EmitterShapes@@QEAAX_N@Z @ 0x18026646C
 * Callers:
 *     ?EndFigure@CPathEmitterEdge@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180266840 (-EndFigure@CPathEmitterEdge@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18023EAEC (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 */

void __fastcall EmitterShapes::CPathEmitterEdge::Figure::CalculateFigureLength(
        EmitterShapes::CPathEmitterEdge::Figure *this,
        char a2)
{
  __int64 v3; // rax
  float v4; // xmm0_4
  float *v5; // rdx
  float *v6; // rcx
  float *v7; // rax
  float v8; // xmm0_4
  float v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = sqrtf_0(
           (float)((float)(*(float *)(v3 - 4) - *(float *)(*(_QWORD *)this + 4LL))
                 * (float)(*(float *)(v3 - 4) - *(float *)(*(_QWORD *)this + 4LL)))
         + (float)((float)(*(float *)(v3 - 8) - **(float **)this) * (float)(*(float *)(v3 - 8) - **(float **)this)));
    v5 = (float *)*((_QWORD *)this + 4);
    v9 = v4;
    if ( v5 == *((float **)this + 5) )
    {
      std::vector<float>::_Emplace_reallocate<float>((_QWORD *)this + 3, v5, &v9);
    }
    else
    {
      *v5 = v4;
      *((_QWORD *)this + 4) = v5 + 1;
    }
  }
  *((_DWORD *)this + 12) = 0;
  v6 = (float *)*((_QWORD *)this + 4);
  v7 = (float *)*((_QWORD *)this + 3);
  if ( v7 != v6 )
  {
    v8 = 0.0;
    do
    {
      v8 = v8 + *v7++;
      *((float *)this + 12) = v8;
    }
    while ( v7 != v6 );
  }
}
