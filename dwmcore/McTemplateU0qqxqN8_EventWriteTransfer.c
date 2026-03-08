/*
 * XREFs of McTemplateU0qqxqN8_EventWriteTransfer @ 0x1801B2328
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqxqN8_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        int a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  int *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  int *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+C0h] [rbp+57h] BYREF
  int v21; // [rsp+C8h] [rbp+5Fh] BYREF

  v21 = a4;
  v20 = a3;
  v11 = 4LL;
  v10 = &v20;
  v13 = 4LL;
  v12 = &v21;
  v15 = 8LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v18 = a8;
  v19 = 1024LL;
  return McGenEventWrite_EventWriteTransfer(Microsoft_Windows_Dwm_Compositor_Context, &CleanTrees_Stop, a3, 6u, &v9);
}
