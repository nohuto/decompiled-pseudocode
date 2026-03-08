/*
 * XREFs of ?EndFigure@CPathEmitterEdge@EmitterShapes@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180266840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EmitterShapes::CPathEmitterEdge::EndFigure(
        EmitterShapes::CPathEmitterEdge *this,
        enum D2D1_FIGURE_END a2)
{
  EmitterShapes::CPathEmitterEdge::Figure::CalculateFigureLength(
    (EmitterShapes::CPathEmitterEdge::Figure *)(*((_QWORD *)this + 4) - 56LL),
    a2 == D2D1_FIGURE_END_CLOSED);
}
