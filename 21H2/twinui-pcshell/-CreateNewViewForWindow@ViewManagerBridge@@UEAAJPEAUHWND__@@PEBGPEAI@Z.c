/*
 * XREFs of ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x18032D270
 * Callers:
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18031C36C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::CreateNewViewForWindow(
        ViewManagerBridge *this,
        HWND a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // r10
  __int64 (__fastcall *v9)(__int64, HWND, _QWORD, unsigned __int64, _QWORD, _QWORD, int, _QWORD, unsigned int *); // r11
  const unsigned __int16 *v10; // rcx
  int v11; // eax
  unsigned int v12; // [rsp+50h] [rbp-48h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp-40h]
  unsigned int v14; // [rsp+60h] [rbp-38h] BYREF
  int v15; // [rsp+64h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a4 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v5 = -2147417848;
    v6 = 421LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *((_QWORD *)this + 14);
  v9 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD, unsigned __int64, _QWORD, _QWORD, int, _QWORD, unsigned int *))(*(_QWORD *)v8 + 24LL);
  if ( a3 )
  {
    v10 = a3;
    v11 = 0;
    v13 = a3;
    while ( *a3 )
    {
      ++a3;
      ++v11;
    }
    v12 = v11 | 0x80000000;
  }
  else
  {
    v10 = 0LL;
    v13 = 0LL;
  }
  v5 = v9(v8, a2, 0LL, (unsigned __int64)&v12 & -(__int64)(v10 != 0LL), 0LL, 0LL, 8, 0LL, &v14);
  if ( v5 < 0 )
  {
    v6 = 432LL;
    goto LABEL_3;
  }
  v5 = v15;
  if ( v15 < 0 )
  {
    v6 = 434LL;
    goto LABEL_3;
  }
  *a4 = v14;
  return 0LL;
}
