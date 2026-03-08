/*
 * XREFs of ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00D2230
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall RemovePDEVFromList(struct PDEV **a1, struct PDEV *a2)
{
  struct PDEV *v4; // r8
  struct PDEV *v5; // rax

  SGDGetSessionState(a1);
  v4 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(struct PDEV **)a2;
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(struct PDEV **)v4;
      if ( *(struct PDEV **)v4 == a2 )
        break;
      v4 = *(struct PDEV **)v4;
      if ( !v5 )
        return;
    }
    *(_QWORD *)v4 = *(_QWORD *)a2;
  }
}
