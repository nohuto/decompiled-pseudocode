/*
 * XREFs of sub_180008EAC @ 0x180008EAC
 * Callers:
 *     sub_180008A64 @ 0x180008A64 (sub_180008A64.c)
 *     sub_180008B0C @ 0x180008B0C (sub_180008B0C.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 *     sub_18000B4D0 @ 0x18000B4D0 (sub_18000B4D0.c)
 *     sub_180038BCC @ 0x180038BCC (sub_180038BCC.c)
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_18005821C @ 0x18005821C (sub_18005821C.c)
 *     sub_18005FFB8 @ 0x18005FFB8 (sub_18005FFB8.c)
 *     sub_180064288 @ 0x180064288 (sub_180064288.c)
 *     sub_180064D2C @ 0x180064D2C (sub_180064D2C.c)
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_180066ED8 @ 0x180066ED8 (sub_180066ED8.c)
 *     sub_18006729C @ 0x18006729C (sub_18006729C.c)
 *     sub_180067E5C @ 0x180067E5C (sub_180067E5C.c)
 *     sub_180068284 @ 0x180068284 (sub_180068284.c)
 *     sub_18006DE20 @ 0x18006DE20 (sub_18006DE20.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800D1744 @ 0x1800D1744 (sub_1800D1744.c)
 *     sub_1800E2BEC @ 0x1800E2BEC (sub_1800E2BEC.c)
 *     sub_1800E3360 @ 0x1800E3360 (sub_1800E3360.c)
 *     sub_1800EA2C8 @ 0x1800EA2C8 (sub_1800EA2C8.c)
 *     sub_1800EF44C @ 0x1800EF44C (sub_1800EF44C.c)
 *     sub_1800EFF1C @ 0x1800EFF1C (sub_1800EFF1C.c)
 *     sub_1800F0078 @ 0x1800F0078 (sub_1800F0078.c)
 *     sub_1800F01D4 @ 0x1800F01D4 (sub_1800F01D4.c)
 *     sub_1801053E0 @ 0x1801053E0 (sub_1801053E0.c)
 *     sub_180105764 @ 0x180105764 (sub_180105764.c)
 *     sub_18010933C @ 0x18010933C (sub_18010933C.c)
 *     sub_1801094B0 @ 0x1801094B0 (sub_1801094B0.c)
 *     sub_18010C668 @ 0x18010C668 (sub_18010C668.c)
 *     sub_180110E94 @ 0x180110E94 (sub_180110E94.c)
 *     sub_180120C98 @ 0x180120C98 (sub_180120C98.c)
 *     sub_180133C14 @ 0x180133C14 (sub_180133C14.c)
 *     sub_180133D60 @ 0x180133D60 (sub_180133D60.c)
 *     sub_180137CBC @ 0x180137CBC (sub_180137CBC.c)
 *     sub_180138BF4 @ 0x180138BF4 (sub_180138BF4.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 */

_QWORD *__fastcall sub_180008EAC(SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rax
  _QWORD *result; // rax
  SIZE_T v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( dwBytes >= 0x1000 )
  {
    v4 = dwBytes + 39;
    if ( v4 <= dwBytes )
      v4 = -1LL;
    v5 = sub_180055F40(v4);
    v6 = v5;
    if ( !v5 )
    {
      o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
      JUMPOUT(0x1800801E4LL);
    }
    result = (_QWORD *)((v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v6;
  }
  else if ( dwBytes )
  {
    ProcessHeap = GetProcessHeap();
    return HeapAlloc(ProcessHeap, 0, dwBytes);
  }
  else
  {
    return 0LL;
  }
  return result;
}
