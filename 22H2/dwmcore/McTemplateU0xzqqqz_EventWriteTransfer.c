/*
 * XREFs of McTemplateU0xzqqqz_EventWriteTransfer @ 0x180157340
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B1B98 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0xzqqqz_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t *v12; // rcx
  bool v13; // zf
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-39h]
  __int64 v17; // [rsp+48h] [rbp-31h]
  const wchar_t *v18; // [rsp+50h] [rbp-29h]
  int v19; // [rsp+58h] [rbp-21h]
  int v20; // [rsp+5Ch] [rbp-1Dh]
  char *v21; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  char *v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  char *v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  const wchar_t *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  __int64 v30; // [rsp+D0h] [rbp+57h] BYREF

  v30 = a3;
  v17 = 8LL;
  v16 = &v30;
  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a4[v10] );
    v11 = (unsigned int)(2 * v10 + 2);
  }
  else
  {
    v11 = 10LL;
  }
  v19 = v11;
  v21 = &a5;
  v20 = 0;
  v23 = &a6;
  v22 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v25 = &a7;
  v12 = a8;
  v18 = a4;
  v24 = 4LL;
  v26 = 4LL;
  v13 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v9 = 2 * v8 + 2;
    v13 = a8 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v28 = v9;
  v27 = v12;
  v29 = 0;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_ANIMATION_FIRST_FRAME_EVENT,
           v11,
           7u,
           &v15);
}
