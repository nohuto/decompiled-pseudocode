/*
 * XREFs of McTemplateU0dddd_EtwEventWriteTransfer @ 0x18009BCB8
 * Callers:
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18009B814 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18009BA70 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0dddd_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  _BYTE v7[16]; // [rsp+38h] [rbp-19h] BYREF
  int *v8; // [rsp+48h] [rbp-9h]
  __int64 v9; // [rsp+50h] [rbp-1h]
  int *v10; // [rsp+58h] [rbp+7h]
  __int64 v11; // [rsp+60h] [rbp+Fh]
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  char *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+B8h] [rbp+67h] BYREF
  int v17; // [rsp+C0h] [rbp+6Fh] BYREF

  v17 = a4;
  v16 = a3;
  v9 = 4LL;
  v8 = &v16;
  v11 = 4LL;
  v10 = &v17;
  v13 = 4LL;
  v12 = &a5;
  v15 = 4LL;
  v14 = &a6;
  return McGenEventWrite_EtwEventWriteTransfer(
           Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (__int64)&UdwmGlassSheetAnimation_End,
           a3,
           5LL,
           (__int64)v7);
}
