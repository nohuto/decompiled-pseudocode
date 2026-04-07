/*
 * XREFs of McTemplateU0ji_EtwEventWriteTransfer @ 0x1800BA93C
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18002F094 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?End@CAnimationClock@@QEAAJXZ @ 0x180036158 (-End@CAnimationClock@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 McTemplateU0ji_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  int v6; // [rsp+4Ch] [rbp-2Ch]
  va_list v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  v4[2] = a3;
  v6 = 0;
  v5 = 16;
  va_copy(v7, va);
  v9 = 0;
  v8 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, a3, 3LL, (__int64)v4);
}
