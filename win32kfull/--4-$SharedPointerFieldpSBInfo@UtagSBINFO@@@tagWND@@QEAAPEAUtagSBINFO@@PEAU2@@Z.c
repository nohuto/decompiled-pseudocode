/*
 * XREFs of ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1C00DA2A8
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     _InitPwSB @ 0x1C00DA0E8 (_InitPwSB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 14);
  if ( a2 )
    *(_QWORD *)(v2 + 144) = a2 + *(a1 - 13) - v2;
  else
    *(_QWORD *)(v2 + 144) = 0LL;
  *a1 = a2;
  return a2;
}
