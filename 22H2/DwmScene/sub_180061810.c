/*
 * XREFs of sub_180061810 @ 0x180061810
 * Callers:
 *     sub_18006C560 @ 0x18006C560 (sub_18006C560.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180087160 @ 0x180087160 (sub_180087160.c)
 *     sub_180087204 @ 0x180087204 (sub_180087204.c)
 *     sub_18008741C @ 0x18008741C (sub_18008741C.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_1800876A0 @ 0x1800876A0 (sub_1800876A0.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 *     sub_1800B4B00 @ 0x1800B4B00 (sub_1800B4B00.c)
 *     sub_1800B4E44 @ 0x1800B4E44 (sub_1800B4E44.c)
 *     sub_1800B5188 @ 0x1800B5188 (sub_1800B5188.c)
 *     sub_1800B54CC @ 0x1800B54CC (sub_1800B54CC.c)
 *     sub_1800B5810 @ 0x1800B5810 (sub_1800B5810.c)
 *     sub_1800B5B54 @ 0x1800B5B54 (sub_1800B5B54.c)
 *     sub_1800BCC2C @ 0x1800BCC2C (sub_1800BCC2C.c)
 *     sub_1800D6570 @ 0x1800D6570 (sub_1800D6570.c)
 *     sub_1800D86A8 @ 0x1800D86A8 (sub_1800D86A8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180061358 @ 0x180061358 (sub_180061358.c)
 *     sub_1800617C8 @ 0x1800617C8 (sub_1800617C8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180061810(__int64 a1)
{
  char result; // al
  __int64 *v2; // rax
  _QWORD v3[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v4[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  result = sub_1800617C8(a1);
  if ( !result )
  {
    sub_18000FD48(v4);
    v2 = sub_18000FD48(v3);
    sub_180061358(pExceptionObject, v2, 248, (__int64)v4, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  return result;
}
