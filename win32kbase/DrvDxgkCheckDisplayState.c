/*
 * XREFs of DrvDxgkCheckDisplayState @ 0x1C0193C04
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkCheckDisplayState(int a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5, int a6)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 DxgkWin32kInterface; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-20h]
  __int128 v13; // [rsp+38h] [rbp-18h]

  v13 = 0LL;
  v6 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v6 )
    goto LABEL_12;
  v6 = (unsigned int)(v6 - 1);
  if ( !(_DWORD)v6 )
  {
    v10[0] = 2;
    goto LABEL_13;
  }
  v6 = (unsigned int)(v6 - 2);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 4 )
      v10[0] = 8;
    else
      v10[0] = 0;
    goto LABEL_13;
  }
  if ( a6 == 2 )
  {
LABEL_12:
    v10[0] = 1;
    goto LABEL_13;
  }
  v7 = 4;
  v6 = 16LL;
  if ( a6 == 3 )
    v7 = 16;
  v10[0] = v7;
LABEL_13:
  v13 = *a5;
  v10[1] = a2;
  v11 = a3;
  v12 = a4;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v6, a2);
  return (*(__int64 (__fastcall **)(_DWORD *))(DxgkWin32kInterface + 744))(v10);
}
