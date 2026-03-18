/*
 * XREFs of ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C0074C40
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall RemovePDEVFromList(struct PDEV **a1, struct PDEV *a2)
{
  struct PDEV *v2; // r8
  struct PDEV *v3; // rax

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(struct PDEV **)a2;
  }
  else if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(struct PDEV **)v2;
      if ( *(struct PDEV **)v2 == a2 )
        break;
      v2 = *(struct PDEV **)v2;
      if ( !v3 )
        return;
    }
    *(_QWORD *)v2 = *(_QWORD *)a2;
  }
}
