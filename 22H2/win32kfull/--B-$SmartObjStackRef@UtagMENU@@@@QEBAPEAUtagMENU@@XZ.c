/*
 * XREFs of ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C0064DD8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
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
