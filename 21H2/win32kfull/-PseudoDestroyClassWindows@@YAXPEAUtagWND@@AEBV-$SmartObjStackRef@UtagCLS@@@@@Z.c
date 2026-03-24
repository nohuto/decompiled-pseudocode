/*
 * XREFs of ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0227C90
 * Callers:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0227C90 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     _WOWModuleUnload @ 0x1C0227E50 (_WOWModuleUnload.c)
 * Callees:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C0227C90 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

_QWORD *__fastcall PseudoDestroyClassWindows(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *i; // rbx
  __int64 v5; // rdx

  result = (_QWORD *)gptiCurrent;
  for ( i = *(_QWORD **)(a1 + 112); i; i = (_QWORD *)i[11] )
  {
    result = (_QWORD *)*a2;
    if ( i[17] == *(_QWORD *)*a2 && gptiCurrent == i[2] )
    {
      v5 = i[5];
      if ( (*(_BYTE *)(v5 + 18) & 4) == 0 )
      {
        result = *(_QWORD **)(gpsi + 424LL);
        *(_QWORD *)(v5 + 120) = result;
      }
    }
    if ( i[14] )
      result = (_QWORD *)PseudoDestroyClassWindows(i, a2);
  }
  return result;
}
