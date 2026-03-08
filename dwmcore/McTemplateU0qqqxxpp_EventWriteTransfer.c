/*
 * XREFs of McTemplateU0qqqxxpp_EventWriteTransfer @ 0x18020EC8C
 * Callers:
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x1800E7CBC (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qqqxxpp_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-61h] BYREF
  int *v11; // [rsp+40h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-49h]
  int *v13; // [rsp+50h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-39h]
  char *v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  char *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  char *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  char *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]
  char *v23; // [rsp+A0h] [rbp+Fh]
  __int64 v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+E0h] [rbp+4Fh] BYREF
  int v26; // [rsp+E8h] [rbp+57h] BYREF

  v26 = a4;
  v25 = a3;
  v12 = 4LL;
  v14 = 4LL;
  v11 = &v25;
  v16 = 4LL;
  v13 = &v26;
  v18 = 8LL;
  v15 = &a5;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_VISUAL_SET_INTERACTION,
           a3,
           8u,
           &v10);
}
