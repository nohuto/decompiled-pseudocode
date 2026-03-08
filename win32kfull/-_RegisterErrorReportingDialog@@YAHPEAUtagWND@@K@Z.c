/*
 * XREFs of ?_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z @ 0x1C01F5350
 * Callers:
 *     NtUserRegisterErrorReportingDialog @ 0x1C01DA370 (NtUserRegisterErrorReportingDialog.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F4ECC (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

__int64 __fastcall _RegisterErrorReportingDialog(struct tagWND *a1)
{
  __int64 *v1; // rcx
  __int64 v2; // r8
  int v3; // r9d
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+24h] [rbp-34h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  int v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+34h] [rbp-24h]
  __int64 v10; // [rsp+3Ch] [rbp-1Ch]

  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v9 = *v1;
    v6 = v2;
    v8 = v2;
    v10 = v2;
    v5 = 4;
    v7 = v3;
    LODWORD(v2) = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v5);
  }
  return (unsigned int)v2;
}
