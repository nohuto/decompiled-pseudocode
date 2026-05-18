/*
 * XREFs of sub_180061358 @ 0x180061358
 * Callers:
 *     sub_180060FF4 @ 0x180060FF4 (sub_180060FF4.c)
 *     sub_1800610BC @ 0x1800610BC (sub_1800610BC.c)
 *     sub_180061184 @ 0x180061184 (sub_180061184.c)
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall sub_180061358(_QWORD *a1, __int64 *a2, int a3, __int64 a4, char a5)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD v16[6]; // [rsp+30h] [rbp-68h] BYREF

  v16[5] = a2;
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_18001CDF8(v16, (__int64)a2);
  sub_1800CB9E8((_DWORD)a1, (unsigned int)v16, a3, -2147024891, a4, a5);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  v9 = a2[3];
  if ( v9 >= 0x10 )
  {
    v10 = v9 + 1;
    v11 = *a2;
    if ( v10 >= 0x1000 )
    {
      v12 = v10 + 39;
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v11 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        JUMPOUT(0x180061436LL);
      }
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
