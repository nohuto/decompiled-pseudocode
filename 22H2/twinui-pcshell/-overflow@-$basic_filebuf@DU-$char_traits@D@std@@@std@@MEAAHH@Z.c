/*
 * XREFs of ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180128790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x180126EDC (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::filebuf::overflow(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  char v11; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v12[7]; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE *v13; // [rsp+48h] [rbp-38h] BYREF
  char *v14; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF

  v2 = -1;
  if ( a2 == -1 )
    return 0LL;
  if ( ((__int64 (*)(void))std::streambuf::pptr)() )
  {
    v6 = std::streambuf::epptr(a1);
    if ( std::streambuf::pptr(a1) < v6 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return v2;
  std::filebuf::_Reset_back(a1);
  v7 = *(_QWORD *)(a1 + 104);
  if ( !v7 )
  {
    v8 = (unsigned int)(char)a2;
    goto LABEL_9;
  }
  v11 = a2;
  v9 = std::codecvt<char,char,_Mbstatet>::out(v7, a1 + 116, &v11, v12, &v14, v15, &v16, &v13);
  if ( v9 < 0 )
    return v2;
  if ( v9 > 1 )
  {
    if ( v9 == 3 )
    {
      v8 = (unsigned int)v11;
LABEL_9:
      if ( (unsigned int)_o_fputc(v8, *(_QWORD *)(a1 + 128)) != -1 )
        return a2;
      return v2;
    }
    return v2;
  }
  if ( v13 != v15 )
  {
    v10 = v13 - v15;
    if ( v10 != _o_fwrite(v15, 1LL, v13 - v15, *(_QWORD *)(a1 + 128)) )
      return v2;
  }
  *(_BYTE *)(a1 + 113) = 1;
  result = a2;
  if ( v14 == &v11 )
    return v2;
  return result;
}
