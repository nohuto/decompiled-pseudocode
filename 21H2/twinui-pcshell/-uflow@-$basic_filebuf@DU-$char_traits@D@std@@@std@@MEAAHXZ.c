/*
 * XREFs of ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180129030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108E9C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Reset_back@?$basic_filebuf@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x18012704C (-_Reset_back@-$basic_filebuf@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180128BAC (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filebuf::uflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  void **v9; // rcx
  void **v10; // r8
  int v11; // eax
  void **v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  void **v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void **v18; // rax
  unsigned __int8 v19; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v20[7]; // [rsp+41h] [rbp-3Fh] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 *v22; // [rsp+50h] [rbp-30h] BYREF
  void *v23[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-18h]
  unsigned __int64 v25; // [rsp+70h] [rbp-10h]

  if ( std::streambuf::gptr(a1) )
  {
    v2 = std::streambuf::egptr(a1);
    if ( std::streambuf::gptr(a1) < v2 )
      return *(unsigned __int8 *)std::streambuf::_Gninc(a1);
  }
  if ( !*(_QWORD *)(a1 + 128) )
    return 0xFFFFFFFFLL;
  std::filebuf::_Reset_back(a1);
  v4 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v24 = 0LL;
    v25 = 15LL;
    LOBYTE(v23[0]) = 0;
    v7 = _o_fgetc(v4);
    v6 = -1;
    while ( v7 != -1 )
    {
      LOBYTE(v8) = v7;
      std::string::push_back(v23, v8);
      v9 = v23;
      if ( v25 >= 0x10 )
        v9 = (void **)v23[0];
      v10 = v23;
      if ( v25 >= 0x10 )
        v10 = (void **)v23[0];
      v11 = std::codecvt<char,char,_Mbstatet>::in(
              *(_QWORD *)(a1 + 104),
              a1 + 116,
              v10,
              (char *)v9 + v24,
              &v21,
              &v19,
              v20,
              &v22);
      if ( v11 < 0 )
        break;
      if ( v11 > 1 )
      {
        if ( v11 == 3 )
        {
          v18 = v23;
          if ( v25 >= 0x10 )
            v18 = (void **)v23[0];
          v6 = *(char *)v18;
        }
        break;
      }
      v12 = v23;
      if ( v22 != &v19 )
      {
        if ( v25 >= 0x10 )
          v12 = (void **)v23[0];
        v16 = v21;
        v17 = (__int64)v12 + v24 - v21;
        if ( v17 > 0 )
        {
          while ( 1 )
          {
            _o_ungetc((unsigned int)*(char *)(--v17 + v16));
            if ( v17 <= 0 )
              break;
            v16 = v21;
          }
        }
        v6 = v19;
        break;
      }
      if ( v25 >= 0x10 )
        v12 = (void **)v23[0];
      v13 = v21 - (_QWORD)v12;
      v14 = v24;
      if ( v24 < v21 - (__int64)v12 )
        v13 = v24;
      v15 = v23;
      if ( v25 >= 0x10 )
        v15 = (void **)v23[0];
      v24 -= v13;
      memmove_0(v15, (char *)v15 + v13, v14 - v13 + 1);
      v7 = _o_fgetc(*(_QWORD *)(a1 + 128));
    }
    std::string::~string((__int64)v23);
  }
  else
  {
    v5 = _o_fgetc(v4);
    v6 = -1;
    if ( v5 != -1 )
      return (unsigned __int8)v5;
  }
  return v6;
}
