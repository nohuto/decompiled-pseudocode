/*
 * XREFs of McTemplateU0pdsddt_EventWriteTransfer @ 0x1801B9384
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pdsddt_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        const char *a5,
        char a6,
        char a7,
        char a8)
{
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-39h]
  __int64 v14; // [rsp+48h] [rbp-31h]
  int *v15; // [rsp+50h] [rbp-29h]
  __int64 v16; // [rsp+58h] [rbp-21h]
  const char *v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+68h] [rbp-11h]
  int v19; // [rsp+6Ch] [rbp-Dh]
  char *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  char *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  char *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  __int64 v26; // [rsp+D0h] [rbp+57h] BYREF
  int v27; // [rsp+D8h] [rbp+5Fh] BYREF

  v27 = a4;
  v26 = a3;
  v8 = a5;
  v13 = &v26;
  v14 = 8LL;
  v15 = &v27;
  v16 = 4LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v18 = v10;
  v19 = 0;
  v21 = 4LL;
  v20 = &a6;
  if ( !a5 )
    v8 = "NULL";
  v17 = v8;
  v22 = &a7;
  v23 = 4LL;
  v24 = &a8;
  v25 = 4LL;
  return McGenEventWrite_EventWriteTransfer(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_EFFECT_COMPILE_Info,
           0LL,
           7u,
           &v12);
}
