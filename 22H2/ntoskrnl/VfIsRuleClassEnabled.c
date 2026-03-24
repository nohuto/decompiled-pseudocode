/*
 * XREFs of VfIsRuleClassEnabled @ 0x1409C6030
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x14037D908 (ViDifCheckCallbackInterception.c)
 *     ViXdvDriverLoadImage @ 0x1409C8E3C (ViXdvDriverLoadImage.c)
 *     IovpCancelRoutine @ 0x1409D03E0 (IovpCancelRoutine.c)
 *     ViThunkReplaceSharedExports @ 0x1409D96C8 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VfIsRuleClassEnabled(unsigned int a1)
{
  int v2; // eax

  if ( a1 >= 0x40 )
    return 0;
  v2 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  return _bittest(&v2, a1 & 0x1F);
}
