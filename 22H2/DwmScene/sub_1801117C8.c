/*
 * XREFs of sub_1801117C8 @ 0x1801117C8
 * Callers:
 *     sub_18010FFA0 @ 0x18010FFA0 (sub_18010FFA0.c)
 *     sub_1801104AC @ 0x1801104AC (sub_1801104AC.c)
 *     sub_180110BC8 @ 0x180110BC8 (sub_180110BC8.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18010FB50 @ 0x18010FB50 (sub_18010FB50.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801117C8(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_18000FD48(v3);
      sub_18010FB50(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_18000FD48(v3);
      sub_18010FB50(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
