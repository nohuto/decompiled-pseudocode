/*
 * XREFs of xxxDeleteMenu @ 0x1C013DB68
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 * Callees:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00649F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 */

__int64 __fastcall xxxDeleteMenu(__int64 a1, unsigned int a2, __int16 a3)
{
  return xxxRemoveDeleteMenuHelper(a1, a2, a3, 1);
}
