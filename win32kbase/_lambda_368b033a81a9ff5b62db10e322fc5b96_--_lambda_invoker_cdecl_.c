/*
 * XREFs of _lambda_368b033a81a9ff5b62db10e322fc5b96_::_lambda_invoker_cdecl_ @ 0x1C015CA30
 * Callers:
 *     <none>
 * Callees:
 *     RIMConfigureDeviceFeedback @ 0x1C01ACF00 (RIMConfigureDeviceFeedback.c)
 */

char __fastcall lambda_368b033a81a9ff5b62db10e322fc5b96_::_lambda_invoker_cdecl_(
        struct DEVICEINFO *const a1,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = *((unsigned int *)a1 + 50);
  if ( (v5 & 0x80u) != 0LL && *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL) == 7 && (v5 & 0x400) != 0 )
  {
    v6 = SGDGetUserSessionState(v5, a2, a3, a4);
    if ( (*(_DWORD *)(v6 + 16820) & 0x10000) != 0 )
      v7 = (unsigned int)*(char *)(v6 + 16821);
    else
      v7 = 0LL;
    RIMConfigureDeviceFeedback(a1, v7);
  }
  return 1;
}
