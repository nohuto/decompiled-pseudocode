/*
 * XREFs of sub_1800CB9E8 @ 0x1800CB9E8
 * Callers:
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 *     sub_1800410CC @ 0x1800410CC (sub_1800410CC.c)
 *     sub_180043798 @ 0x180043798 (sub_180043798.c)
 *     sub_180061358 @ 0x180061358 (sub_180061358.c)
 *     sub_180091370 @ 0x180091370 (sub_180091370.c)
 *     sub_180094344 @ 0x180094344 (sub_180094344.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 * Callees:
 *     sub_180115398 @ 0x180115398 (sub_180115398.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CB9E8(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx

  v6 = a4;
  LOBYTE(a4) = a6;
  sub_180115398(a1, v6, a5, a4);
  *a1 = &Spectre::Engine::EngineException::`vftable';
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
        JUMPOUT(0x1800CBA96LL);
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
