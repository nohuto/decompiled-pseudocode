/*
 * XREFs of sub_180056F44 @ 0x180056F44
 * Callers:
 *     sub_180056CA8 @ 0x180056CA8 (sub_180056CA8.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800571F8 @ 0x1800571F8 (sub_1800571F8.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180057384 @ 0x180057384 (sub_180057384.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180056F44(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  _WORD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // esi
  __int64 v22; // r8
  int v24; // [rsp+30h] [rbp-288h] BYREF
  __int64 v25; // [rsp+38h] [rbp-280h] BYREF
  __int64 v26; // [rsp+40h] [rbp-278h] BYREF
  __int64 v27; // [rsp+48h] [rbp-270h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp-268h] BYREF
  __int64 v29; // [rsp+58h] [rbp-260h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-258h] BYREF
  void **p_pv; // [rsp+68h] [rbp-250h]
  void *v32; // [rsp+70h] [rbp-248h] BYREF
  char v33; // [rsp+78h] [rbp-240h]
  _WORD Src[264]; // [rsp+80h] [rbp-238h] BYREF
  _UNKNOWN *retaddr; // [rsp+2B8h] [rbp+0h]

  v2 = sub_180057384(a1, &v24);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_18004BD84(
      (int)retaddr,
      210,
      (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
      v2);
    return v3;
  }
  else
  {
    if ( v24 )
      return 0LL;
    v4 = *(_QWORD *)(a1 + 24);
    v25 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &unk_18015B078,
           23LL,
           0LL,
           &v25);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        219,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
        v5);
      sub_18000F708(&v25);
      return v6;
    }
    else
    {
      v26 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v25 + 32LL))(v25, 0LL, &v26);
      v8 = v7;
      if ( v7 < 0 )
      {
        sub_18004BD84(
          (int)retaddr,
          224,
          (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
          v7);
        sub_18000F708(&v26);
        sub_18000F708(&v25);
        return v8;
      }
      else
      {
        v28 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v26 + 64LL))(
               v26,
               &v28);
        if ( v9 < 0 )
        {
          sub_18000F708((__int64 *)&v28);
          sub_18000F708(&v26);
          sub_18000F708(&v25);
          return (unsigned int)v9;
        }
        else
        {
          v27 = 0LL;
          v10 = (**v28)(v28, &unk_18015AFA0, &v27);
          v11 = v10;
          if ( v10 < 0 )
          {
            sub_18004BD84(
              (int)retaddr,
              237,
              (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
              v10);
            sub_18000F708(&v27);
            sub_18000F708((__int64 *)&v28);
            sub_18000F708(&v26);
            sub_18000F708(&v25);
            return v11;
          }
          else
          {
            v24 = 0;
            v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v24);
            v13 = v12;
            if ( v12 < 0 )
            {
              sub_18004BD84(
                (int)retaddr,
                242,
                (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                v12);
              sub_18000F708(&v27);
              sub_18000F708((__int64 *)&v28);
              sub_18000F708(&v26);
              sub_18000F708(&v25);
              return v13;
            }
            else
            {
              *(_DWORD *)(a1 + 116) = (unsigned __int16)v24;
              v29 = 0LL;
              v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 96LL))(v27, &v29);
              v15 = v14;
              if ( v14 < 0 )
              {
                sub_18004BD84(
                  (int)retaddr,
                  247,
                  (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                  v14);
                sub_18000F708(&v29);
                sub_18000F708(&v27);
                sub_18000F708((__int64 *)&v28);
                sub_18000F708(&v26);
                sub_18000F708(&v25);
                return v15;
              }
              else
              {
                pv = 0LL;
                p_pv = &pv;
                v32 = 0LL;
                v33 = 1;
                v16 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v29 + 64LL))(v29, &v32);
                if ( v33 )
                  sub_18002A504(p_pv, v32);
                if ( v16 < 0 )
                {
                  sub_18004BD84(
                    (int)retaddr,
                    250,
                    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    v16);
                  if ( pv )
                    CoTaskMemFree(pv);
                  sub_18000F708(&v29);
                  sub_18000F708(&v27);
                  sub_18000F708((__int64 *)&v28);
                  sub_18000F708(&v26);
                  sub_18000F708(&v25);
                  return (unsigned int)v16;
                }
                else
                {
                  v17 = pv;
                  v18 = -1LL;
                  v19 = -1LL;
                  do
                    ++v19;
                  while ( *((_WORD *)pv + v19) );
                  while ( *((_WORD *)pv + v19) != 92 )
                    --v19;
                  v20 = sub_180057300(Src, 260LL, (char *)pv + 2 * v19 + 2);
                  v21 = v20;
                  if ( v20 >= 0 )
                  {
                    v22 = -1LL;
                    do
                      ++v22;
                    while ( Src[v22] );
                    sub_1800571F8((void *)(a1 + 152), Src);
                    do
                      ++v18;
                    while ( v17[v18] );
                    sub_1800571F8((void *)(a1 + 120), v17);
                    if ( pv )
                      CoTaskMemFree(pv);
                    sub_18000F708(&v29);
                    sub_18000F708(&v27);
                    sub_18000F708((__int64 *)&v28);
                    sub_18000F708(&v26);
                    sub_18000F708(&v25);
                    return 0LL;
                  }
                  sub_18004BD84(
                    (int)retaddr,
                    258,
                    (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\endpointdevice.cpp",
                    v20);
                  if ( pv )
                    CoTaskMemFree(pv);
                  sub_18000F708(&v29);
                  sub_18000F708(&v27);
                  sub_18000F708((__int64 *)&v28);
                  sub_18000F708(&v26);
                  sub_18000F708(&v25);
                  return v21;
                }
              }
            }
          }
        }
      }
    }
  }
}
