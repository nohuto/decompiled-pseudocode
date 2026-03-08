/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C018B0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00448F0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HDEV v2; // rbp
  struct PDEV **i; // rbx

  v2 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v2 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v2;
    for ( i = *(struct PDEV ***)a1; i; i = (struct PDEV **)*i )
    {
      if ( i[7] == (struct PDEV *)a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7);
        i[6] = (struct PDEV *)v2;
        i[7] = (struct PDEV *)v2;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7));
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
