/*
 * XREFs of ??4?$SharedPointerFieldlpstr@G@tagITEM@@QEAAPEAGPEAG@Z @ 0x1C00FD52C
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagITEM::SharedPointerFieldlpstr<unsigned short>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 3);
  if ( a2 )
    *(_QWORD *)(v2 + 40) = a2 + *(a1 - 2) - v2;
  else
    *(_QWORD *)(v2 + 40) = 0LL;
  *a1 = a2;
  return a2;
}
