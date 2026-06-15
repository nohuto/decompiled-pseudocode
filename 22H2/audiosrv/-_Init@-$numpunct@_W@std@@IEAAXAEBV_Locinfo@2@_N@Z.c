/*
 * XREFs of ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005E08C
 * Callers:
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005E2C4 @ 0x18005E2C4 (sub_18005E2C4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801215D0 @ 0x1801215D0 (sub_1801215D0.c)
 *     sub_180121690 @ 0x180121690 (sub_180121690.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall std::numpunct<wchar_t>::_Init(__int64 a1)
{
  char v2; // di
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // edx
  int v10; // eax
  LPVOID v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  LPVOID pv; // [rsp+20h] [rbp-49h] BYREF
  __int64 v16; // [rsp+28h] [rbp-41h] BYREF
  int v17; // [rsp+30h] [rbp-39h]
  __int128 v18; // [rsp+38h] [rbp-31h]
  _QWORD v19[3]; // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-9h] BYREF
  __int128 v21; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall ***v22)(); // [rsp+98h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = 0;
  v17 = 0;
  if ( !(unsigned __int8)sub_18005E2C4() )
  {
    v16 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v16);
    v4 = v3;
    if ( v3 < 0 )
    {
      v9 = 497;
    }
    else
    {
      v5 = sub_18005DEF0(v16);
      v6 = (unsigned int)(v5 - 1);
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        v4 = 0;
LABEL_9:
        sub_18000F708(&v16);
        return v4;
      }
      v3 = sub_18005E238(v6, v16, v19);
      v4 = v3;
      if ( v3 >= 0 )
      {
        v7 = v19[0];
        if ( !v19[0] )
          v7 = v19[1] + 1LL;
        if ( !v7 )
        {
          pv = 0LL;
          sub_18002A504(&pv, 0LL);
          v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a1 + 40LL))(a1, &pv);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v11 = pv;
            v13 = sub_180055F40(0x48uLL);
            v19[0] = v13;
            if ( v13 )
            {
              LODWORD(v18) = v5;
              *((_QWORD *)&v18 + 1) = v11;
              v20 = off_180155F60;
              v21 = v18;
              v22 = &v20;
              v2 = 1;
              v17 = 1;
              *v13 = off_180155F90;
              v13[8] = 0LL;
              sub_1801215D0(v13 + 1, &v20);
            }
            else
            {
              v13 = 0LL;
            }
            if ( (v2 & 1) != 0 )
              unknown_libname_207((__int64)&v20, v12);
            v14 = v13;
            if ( v13 && PostQueuedCompletionStatus(CompletionPort, 0, (ULONG_PTR)v13, 0LL) )
            {
              pv = 0LL;
              v14 = 0LL;
            }
            v4 = 0;
            if ( v14 )
              sub_180121690(v14, 1LL);
          }
          else
          {
            sub_18004BD84(
              (int)retaddr,
              516,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              v10);
          }
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_9;
        }
        goto LABEL_8;
      }
      v9 = 507;
    }
    sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp", v3);
    goto LABEL_9;
  }
  return 0LL;
}
