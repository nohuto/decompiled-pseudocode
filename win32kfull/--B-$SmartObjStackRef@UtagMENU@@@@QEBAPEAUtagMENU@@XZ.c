/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C00A0438
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRef<tagMENU>::operator tagMENU *(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[2];
  if ( !result )
    return *(_QWORD *)*a1;
  return result;
}
