/*
 * XREFs of sub_18006D134 @ 0x18006D134
 * Callers:
 *     sub_18006740C @ 0x18006740C (sub_18006740C.c)
 * Callees:
 *     sub_18006D078 @ 0x18006D078 (sub_18006D078.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18006D134(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7,
        unsigned int a8,
        int a9)
{
  _UNKNOWN **result; // rax
  unsigned int v11; // ecx
  int v12; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  switch ( a9 )
  {
    case 0:
      return result;
    case 1:
      v12 = a6 != 0 ? 448 : 384;
      break;
    case 2:
      v12 = a6 != 0 ? 320 : 256;
      break;
    default:
      v11 = 255;
      goto LABEL_8;
  }
  v11 = a7 + v12;
LABEL_8:
  result = (_UNKNOWN **)sub_18006D078(a1, 0xF4D82Du, a3, a4, v11, a8);
  if ( (_DWORD)result )
  {
    result = (_UNKNOWN **)qword_18019FA58;
    if ( qword_18019FA58 )
      return (_UNKNOWN **)qword_18019FA58(16046125LL, a5, 0LL, a6, 0LL, &a9, a7, 1LL);
  }
  return result;
}
