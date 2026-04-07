/*
 * XREFs of McTemplateU0pddddd_EtwEventWriteTransfer @ 0x18009A594
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001ACD0 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0pddddd_EtwEventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  char v9[16]; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-39h]
  __int64 v11; // [rsp+48h] [rbp-31h]
  int *v12; // [rsp+50h] [rbp-29h]
  __int64 v13; // [rsp+58h] [rbp-21h]
  char *v14; // [rsp+60h] [rbp-19h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  char *v16; // [rsp+70h] [rbp-9h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  char *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  char *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  __int64 v22; // [rsp+D0h] [rbp+57h] BYREF
  int v23; // [rsp+D8h] [rbp+5Fh] BYREF

  v23 = a4;
  v22 = a3;
  v11 = 8LL;
  v10 = &v22;
  v13 = 4LL;
  v12 = &v23;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v19 = 4LL;
  v21 = 4LL;
  return McGenEventWrite_EtwEventWriteTransfer(
           Microsoft_Windows_Dwm_Udwm_Provider_Context,
           (__int64)&UdwmWindowDPI_Change,
           a3,
           7LL,
           (__int64)v9);
}
