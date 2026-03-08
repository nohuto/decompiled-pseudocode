/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldrgItems@UtagITEM@@@tagMENU@@QEAAPEAUtagITEM@@PEAU2@@Z @ 0x1C00A09B4
 * Callers:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00A07D4 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 6);
  if ( a2 )
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(a2 + 8);
  else
    *(_QWORD *)(v2 + 32) = 0LL;
  *a1 = a2;
  return a2;
}
