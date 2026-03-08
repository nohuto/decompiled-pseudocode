/*
 * XREFs of _lambda_9a9771997357178f95a5eaf72b6b0000_::operator() @ 0x1801A02F4
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801A1CFC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_9a9771997357178f95a5eaf72b6b0000_::operator()(_BYTE **a1, __int64 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    if ( !a3 )
      goto LABEL_6;
    v4 = *(_QWORD *)(*(_QWORD *)*a1 + 104LL);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 64);
    *a2 = v3;
    if ( !v3 )
LABEL_6:
      *a1[1] = 0;
  }
}
